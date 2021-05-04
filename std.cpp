#include <bits/stdc++.h>
using namespace std;
int main(void)
{
#ifndef __DEBUG__
	freopen("data.in", "r", stdin);
	freopen("std.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		cout << (a + 1) * (a + 1) << endl;
	}
#ifndef __DEBUG__
	fclose(stdin);
	fclose(stdout);
#endif
	return 0;
}
