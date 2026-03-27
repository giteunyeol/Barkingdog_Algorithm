#include <iostream>

using namespace std;

int sum_pretend(int array[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += array[i];
    return sum;
}

int sum(int array[], int count)
{
    if ( count == 0)
    {
        return 0;
    }
    return sum(array, count - 1) + array[count - 1];
}

int main(void)
{
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3};
    printf("%d\n", sum(array, sizeof(array) / sizeof(*array)));

    return 0;
}