#include <iostream>
using namespace std;

void PrintDigits(int n){
    int count=0;
    while(n!=0){
        int digits= n%10;
        count++ ;
      
     
        n=n/10;
    }

    cout<<count<<endl;
}


int main(){
    int n=3456;

    PrintDigits(n);
    return 0;
}