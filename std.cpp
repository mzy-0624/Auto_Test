#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxn 200005
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
	S = (char *)malloc(sizeof(char) * maxn);
	T = (char *)malloc(sizeof(char) * maxn);
	scanf("%s%s", S, T);
	int lenS = strlen(S), lenT = strlen(T);
	for (int i = 0; i <= lenS - lenT; i++)
	{
		char *s = S, *t = T;
		while (*s == *t)
		{
			s++;
			t++;
			if (*t == '\0')
			{
				printf("%d ", i);
				break;
			}
		}
		S++;
	}
#ifdef __AUTO_TEST__
	fclose(stdin);
	fclose(stdout);
#endif
#ifdef __DEBUG__
	fclose(stdin);
#endif
	return 0;
}
