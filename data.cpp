#include <iostream>
#include <random>
using namespace std;
#define INT_MIN 0x80000000
#define INT_MAX 0x7fffffff
random_device rd;
int rand_int(int l, int r)
{
	uniform_int_distribution<int> dist(l, r);
	return dist(rd);
}
int main(void)
{
	freopen("data.in", "w", stdout);
	int N = rand_int(2, 20);
	
	fclose(stdout);
	return 0;
}
