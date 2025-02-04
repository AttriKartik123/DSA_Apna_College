#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans(n, 1);

    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod *= nums[j];
            }
        }
    }

    return ans;
}

int main()
{

    vector<int> ans = {1, 2, 3, 4};
     vector<int> ans = productExceptSelf(nums);

    for (int num : ans) {
        cout << num << " ";
    }

    return 0;
}