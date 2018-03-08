#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <queue>
#include <stack>

using namespace std;

const int MAXN = 1000;
char s[MAXN + 10];
int failed;
int read_input()
{
	failed = 0;
	root = newnode();
	while (true)
	{
		if (scanf("%s", s) != 1)	return 0;
		if (!strcmp(s, "()"))	break;
		int v;
		sscanf(&s[1], "%d", &v);
		addnode(v, strchr(s, ',') + 1);		// C语言char数组作为字符串的灵活性，可以把任意“指向字符的指针”看成是字符串，从该位置开始直到出现\0
		// strchr(s,',')+1 对应的字符串是LL)
	}
	return 1;
}


typedef struct TNode
{
	int have_value;
	int v;
	struct TNode *left, *right;
}Node;

Node* root;

Node* newnode()
{
	Node* u = (Node*)malloc(sizeof(Node));
	if (u != NULL)
	{
		u->have_value = 0;
		u->left = u->right = NULL;
	}
	return u;
}

void addnode(int v, char* s)
{
	int n = strlen(s);
	Node* u = root;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'L')
		{
			if (u->left == NULL)	u->left = newnode();
			u = u->left;
		}
		else if(s[i] == 'R')
		{
			if (u->right == NULL)	u->right = newnode();
			u = u->right;
		}
	}
	if (u->have_value)	failed = 1;
	u->v = v;
	u->have_value = 1;
}

int n = 0, ans[MAXN];
int bfs()
{
	int front = 0, rear = 1;
	Node* q[MAXN];
	q[0] = root;
	while (front < rear)
	{
		Node* u = q[front++];
		if (!u->have_value)	return 0;

		ans[n++] = u->v;
		if (u->left != NULL) q[rear++] = u->left;
		if (u->right != NULL) q[rear++] = u->right;
	}
	return 1;
}

void remove_tree(Node* u)
{
	if (u == NULL)	return;
	remove_tree(u->left);
	remove_tree(u->right);
	free(u);
}



int main() {
	freopen("input.txt", "r", stdin);
	
	
	return 0;
}