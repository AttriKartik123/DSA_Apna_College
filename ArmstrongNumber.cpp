#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int copyN = n;
    int SumOfCubes = 0;  

    while (n != 0) {
        int dig = n % 10;
        SumOfCubes += (dig * dig * dig);  

        n = n / 10;
    }

    return SumOfCubes == copyN;
}

int main() {
    int n = 153;
    if (isArmstrong(n)) {
        cout << "is Armstrong";
    } else {
        cout << "Not Armstrong";
    }
    return 0;
}
