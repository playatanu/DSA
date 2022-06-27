#include <bits/stdc++.h>
using namespace std;

int sumOfArray(int array[], int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "i : " << i << "\n";
        for (int j = i; j < size; j++)
        {
            cout << "i = " << array[i] << " j = " << array[j] << endl;

            sum += array[j];
        }
    }

    return sum;
}

int main()
{

    int array[5] = {1, 2, 0, 7, 2};

    cout << "Array of Sum " << sumOfArray(array, 5);
}