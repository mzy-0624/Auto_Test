#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 1000010
int main(void)
{
#ifdef __AUTO_TEST__
	freopen("data.in", "r", stdin);
	freopen("totest.txt", "w", stdout);
#endif
#ifdef __DEBUG__
	freopen("data.in", "r", stdin);
#endif

    char *s = (char *)malloc(SIZE * sizeof(*s));
    char *t = (char *)malloc(SIZE * sizeof(*t));
    scanf("%s", s);
    scanf("%s", t);
    int len_S = strlen(s);
    int len_T = strlen(t);
    for (int i = 0; i <= len_S - len_T; i++)
    {
        int j;
        for (j = 0; j < len_T; j++)
            if (*(s + i + j) != *(t + j))
                break;
        if (j == len_T)
        {
            printf("%d ", i);
        }
    }
    free(s);
    free(t);
#ifdef __AUTO_TEST__
	fclose(stdin);
	fclose(stdout);
#endif
#ifdef __DEBUG__
	fclose(stdin);
#endif
	return 0;
}
