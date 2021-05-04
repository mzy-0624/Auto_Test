#include <bits/stdc++.h>
using namespace std;
#define maxn 100

int main(void)
{
	freopen("data.in", "w", stdout);
	srand(time(NULL));
	int n = rand() % maxn + 1;
	for (int i = 1; i <= n; i++)
		cout << i << endl;
	fclose(stdout);
	return 0;
}
