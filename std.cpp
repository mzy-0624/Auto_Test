#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
int n, a[1000010] = { 0 }, b[1000010] = { 0 }, c[1000010] = { 0 };
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
char *S, *T;
int main(void)
{
#ifdef __AUTO_TEST__
	freopen("data.in", "r", stdin);
	freopen("std.txt", "w", stdout);
#endif
#ifdef __DEBUG__
	freopen("data.in", "r", stdin);
#endif
	scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    b[1] = a[0];
    c[n - 2] = a[n - 1];
    for (int i = 2; i < n; i++)
        b[i] = gcd(a[i - 1], b[i - 1]);
    for (int i = n - 3; i >= 0; i--)
        c[i] = gcd(a[i + 1], c[i + 1]);
	int m = 0;
	for (int i = 0; i < n; i++)
		m = max(m, gcd(b[i], c[i]));
	printf("%d\n", m);
#ifdef __AUTO_TEST__
	fclose(stdin);
	fclose(stdout);
#endif
#ifdef __DEBUG__
	fclose(stdin);
#endif
	return 0;
}
