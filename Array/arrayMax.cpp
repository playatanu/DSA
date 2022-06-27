#include <bits/stdc++.h>
using namespace std;

int max(int array[], int size)
{
    int maxTillNum = 0;

    for (int i = 0; i < size; i++)
    {
        if (maxTillNum < array[i])
        {
            maxTillNum = array[i];
        }

        cout << maxTillNum << " ";
    }
}

int main()
{

    int arr[6] = {0, -9, 1, 3, -4, 5};

    max(arr, 6);
}