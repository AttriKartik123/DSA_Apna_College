#include <iostream>
using namespace std;

void PrintDigits(int n){
    int sum=0;
    while(n!=0){
        int digits= n%10;
        sum += digits ;
      
     
        n=n/10;
    }

    cout<<sum<<endl;
}


int main(){
    int n=3456;

    PrintDigits(n);
    return 0;
}