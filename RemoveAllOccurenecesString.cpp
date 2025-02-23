#include<iostream>
using namespace std;

class Solution{
    public:

    string removeOccureneces (string s , string part ){
        while ( s.length() > 0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length()) ;
        }

        return s;
    }
};