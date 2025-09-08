#include <iostream>
using namespace std;
int main() {
    double num;
    cin >> num;

    if (num== (int)num) {
        cout << "int " << (int)num<< endl;
    }
    else {
        int integerPart = (int)num;  
        double decimalPart = num- integerPart; 
        cout << "float " << integerPart << " " << decimalPart << endl;
    }

    return 0;
}