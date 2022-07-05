#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    for (int i = 1;; i++)
    {
        cout << "The result of No. " << i << " case is : ";
        string data, totest, std;
        data = "./data.out > data.in", totest = "./totest.out < data.in > totest.txt", std = "./std.out < data.in > std.txt";
        system(data.c_str());
        system(totest.c_str());
        system(std.c_str());
        if (system("diff std.txt totest.txt"))
        {
            cout << "\033[1;31mWrong Answer\033[0m\n";
            return 0;
        }
        else
            cout << "\033[1;32mAccepted\033[0m\n";
    }
    return 0;
}

