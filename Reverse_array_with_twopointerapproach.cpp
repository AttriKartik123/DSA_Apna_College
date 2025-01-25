#include <iostream>
using namespace std;

    void reverseArray(int arr[], int size)
    {
        int start = 0, end = size - 1;

        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
             
            
        }
    }

    int main()
    {

        int arr[5] = {10, 20, 30, 40, 50};
        int size = 5 ;
        
        reverseArray(arr,size);
        for(int i=0; i<size ; i++){
            cout<<arr[i]<<endl;
        }
        return 0;


    }
   
