#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    int sol;
    for (int i = 0; i < nums.size(); i++)
    {
        ans ^= nums[i];
    }
    sol = ans;

    return ans;
}
int main()
{
    vector<int> nums = {4,1,2,3,1,2,3};
    int sol = singleNumber(nums);
    cout << sol << endl;

    return 0;
}