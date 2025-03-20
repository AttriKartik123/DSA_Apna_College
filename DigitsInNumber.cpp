#include <iostream>
using namespace std;

void PrintDigits(int n){
    while(n!=0){
        int digits= n%10;
       
        cout<<digits<<endl;

        n=n/10;
    }
}


int main(){
    int n=3456;

    PrintDigits(n);
    return 0;
}