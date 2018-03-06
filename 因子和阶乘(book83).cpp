#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int is_prime(int x) {
	for (int i = 2;i*i <= x;i++) {
		if (x%i == 0)	return 0;
	}
	return 1;
}

int main() {
	freopen("input.txt", "r", stdin);
	int prime[100], count = 0;
	int p[100], n;
	for (int i = 2;i <= 100;i++) {
		if (is_prime(i))	prime[count++] = i;
	}
	while (scanf("%d",&n)==1)
	{
		memset(p, 0, sizeof(p));
		int maxp = 0;
		printf("%d!=", n);
		for (int i = 2; i <= n; i++)
		{
			int m = i;
			for (int j = 0;j < count;j++) {
				while (m%prime[j]==0)
				{
					m /= prime[j];
					p[j]++;
					if (j > maxp)
					{
						maxp = j;
					}
				}
			}
		}
		for (int i = 0; i <= maxp; i++)
		{
			printf(" %d", p[i]);
		}
		printf("\n");
	}

	return 0;
}