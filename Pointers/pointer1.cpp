#include <bits/stdc++.h>
using namespace std;

void increment(int *x)
{

    *x = *x + 1;
}
int main()
{

    int x = 0;
    increment(&x);

    cout << x;
}