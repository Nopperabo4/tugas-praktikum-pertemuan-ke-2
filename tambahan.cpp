#include <iostream>
using namespace std;

int main(){
    int firstValue = 10;
    int secondValue = 8;

    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "Setelah ditukar (dengan variabel tambahan):" <<endl;
    cout << "firstValue: " << firstValue <<endl;
    cout << "secondValue: " << secondValue <<endl;

    return 0;
}