#include <bits/stdc++.h>
using namespace std;

int arithmeticArray(int array[], int size)
{
    int maxArithmeticLength = 0;
    int preValue = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            preValue = array[j];

            if (preValue == array[j] - array[j + 1])
            {
                maxArithmeticLength++;
            }
            // else
            // {

            //     maxArithmeticLength
            // }
        }
    }

    return maxArithmeticLength;
}

int main()
{

    int array[7] = {10, 7, 4, 6, 8, 10, 11};

    cout << "Arithmetic Length " << arithmeticArray(array, 7);
}