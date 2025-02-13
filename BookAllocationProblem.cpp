#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr , int n , int m , int maxAllowedPages){
   int  students=1 , pages=0;
    for (int i=0 ; i < n ; i++){
        if(arr[i]> maxAllowedPages){
            return false;
        }else{
            students++;
            pages=arr[i];  //reinitialize
        }
    }
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if (m > n) // handling edge case
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int st = 0, ans = -1, end = sum; // range of possible answers
    while (st < end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}


int main(){

    vector<int> arr={2,1,3,4};
    int n=4 , m=2 ;
    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}