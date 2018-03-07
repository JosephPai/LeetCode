#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>

using namespace std;

queue<int> q;
int main() {
	freopen("input.txt", "r", stdin);	
	int n;
	scanf("%d", &n);
	for (int i = 0 ;i < n;i++) {
		q.push(i + 1);
	}
	while (!q.empty())
	{
		printf("%d", q.front());
		q.pop();
		q.push(q.front());
		q.pop();
	}

	return 0;
}