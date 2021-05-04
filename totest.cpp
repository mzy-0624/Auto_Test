#include <bits/stdc++.h>
using namespace std;
int main(void)
{
#ifndef __DEBUG__
	freopen("data.in", "r", stdin);
	freopen("totest.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		cout << a * a + 2 * a + 1 << endl;
	}
#ifndef __DEBUG__
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}
