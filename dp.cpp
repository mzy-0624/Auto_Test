#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    for (int i = 1;; i++)
    {
        printf("The result of No. %d case is : ", i);
        system("./data.out");
        system("./totest.out");
        system("./std.out");
        if (system("diff std.txt totest.txt"))
        {
            printf("\033[1;31mWrong Answer\033[0m\n");
            return 0;
        }
        else
            printf("\033[1;32mAccepted\033[0m\n");
    }
    return 0;
}

