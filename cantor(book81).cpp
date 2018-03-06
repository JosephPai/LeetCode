#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n;
	while (scanf("%d",&n)==1)
	{
		int k = 1, s = 0;
		while (true)
		{
			s += k;
			if (s >= n) {
				if (k%2 != 0)
				{
					printf("%d/%d\n", 1 - n + s, n - s + k);
				}
				else
				{
					printf("%d/%d\n", n - s + k, 1 - n + s);
				}
				
				break;
			}
			k++;
		}
	}

	return 0;
}