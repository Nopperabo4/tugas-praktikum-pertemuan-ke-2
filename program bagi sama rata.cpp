#include <iostream>
using namespace std;

int main(){
    int totalBebek = 20;
    int jumlahTeman = 13;

    int bebekPerTeman = totalBebek / jumlahTeman;
    int sisaBebek = totalBebek % jumlahTeman;

    cout << "Masing-masing teman mendapatkan: " << bebekPerTeman << " ekor bebek" << endl;
    cout << "Sisa bebek yang tidak terbagikan: " << sisaBebek << " ekor bebek" << endl;

    return 0;
}
