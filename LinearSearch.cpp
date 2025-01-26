#include <iostream>
using namespace std;

int answer(int arr[], int target)
{

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        return -1;
    }
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int target = 5;
    int size = 5;

    int result = answer(arr, target);
    cout << result << endl;

    return 0;
}