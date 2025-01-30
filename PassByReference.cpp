#include <iostream>
using namespace std;
void changeArray(int arr[],int size){
    cout<<"In-Function"<<endl;
    for (int i=0; i<size ; i++){
        arr[i]=2*arr[i];
        cout<<arr[i];
    }
}


int main(){

    int arr[]={1,2,3};
    int size=3;
    changeArray(arr, size);
    cout<<"In-Main";
    for(int i=0; i< size ; i++){
        cout<<arr[i];
    }

    cout<<endl;


    return 0;
}