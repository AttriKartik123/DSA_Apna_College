#include <iostream>
#include <vector>
using namespace std;  //Dutch NAtional Flag Algorithm 

class Solution{
    public:

    void SortColors(vector<int> &nums){

        int n=nums.size();
        int low=0 , mid=0 , high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]); 
                mid++; low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[high],nums[mid]);
                high--;
            }
            

        }
    }
};
