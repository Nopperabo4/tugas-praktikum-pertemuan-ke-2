#include <iostream>
using namespace std;

int main(){
    int firstValue = 10;
    int secondValue = 8;

    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "Setelah ditukar (tanpa variabel tambahan):" << endl;
    cout << "firstValue: " << firstValue << endl;
    cout << "secondValue: " << secondValue << endl;

    return 0;
}

