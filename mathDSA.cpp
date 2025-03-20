#include <iostream>
using namespace std;

// prime number
// string isPrime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return "non-prime";
//         }

//     }
//     return "prime";
// }
// int main()
// {
//     int n=42;
//     cout<<isPrime(n)<< endl;
// }

//--------------------------------------------------> COUNT PRIMES

// class Solution {
//     public:
//         int countPrimes(int n) {
//             vector<bool> isPrime(n+1, true);
//             int count = 0;
            
//             for (int i = 2; i < n; i++) {
//                 if (isPrime[i]) {  // Fix: changed 'j' to 'i'
//                     count++;
//                     for (int j = i * 2; j < n; j += i) {  // Fix: changed 'j+i' to 'j += i'
//                         isPrime[j] = false;
//                     }
//                 }
//             }
    
//             return count;
//         }
//     };





    