#include <iostream>
using namespace std;

int main(){

    int arr[5]={10,12,13,14,15};
    arr[0]=30;
    int n=5;
    for (int i=0; i<n; i++){
        cout<<"Array elements:"<<arr[i]<<endl;
    }



    return 0;
}