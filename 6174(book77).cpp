#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

const int MAXN = 1000;

int next(int x) {
	char s[10];
	sprintf(s,"%d", x);
	int a, b, n;
	n = strlen(s);
	for (int i = 0;i < n;i++) {
		for (int j = i+1;j < n;j++) {
			if (s[i] > s[j]) {
				char t = s[i]; 
				s[i] = s[j];
				s[j] = t;
			}
		}
	}
	sscanf(s, "%d", &b);
	for (int i = 0; i < n / 2;i++) {
		char t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
	sscanf(s, "%d", &a);
	return a - b;
}

int main() {
	freopen("input.txt", "r", stdin);
	int a[MAXN], count;
	scanf("%d", &a[0]);
	printf("%d", a[0]);
	count = 1;
	while (true)
	{
		a[count] = next(a[count - 1]);
		printf(" -> %d", a[count]);
		int found = 0;
		for (int i = 0;i < count;i++) {
			if (a[i] == a[count])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			break;
		}
		count++;
	}

	return 0;
}