#include<iostream>
using namespace std;

int main(){

    char str[]={'a','b','c'}; // Gives garbage value at the end

    char str2[]={'a','b','c','\0'};

    cout<<str<<endl;
    cout<<str2<<endl;
    cout<<str2[1];

    char str3[100];
    cout<<"Enter charcater array =";  //But if we add space in between them it will give array 
    cin.getline(str3,100)>>str3;
    cout<<"Output str3";

    return 0;
}