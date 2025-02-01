#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height){
    int maxWater=0; //ans
    int lp=0 , rp=height.size()-1;

    while (lp-rp){
        int w=rp-lp;
        int ht= min(height[lp], height[rp]);

        int currWater = w*ht;
        maxWater = max(maxWater,currWater);

        height[lp]<height[rp]? lp++ : rp-- ;


    }
    return maxWater;
}


int main(){

    vector<int> vec ={ 1 ,8, 6 , 2, 5 , 4, 8 ,3 ,7};

    cout<<maxArea(vec);
    return 0;
}