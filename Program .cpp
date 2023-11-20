#include <iostream>

using namespace std;

void Fibonacci (int ang, int ang1 = 0, int ang2 = 1, int angSelanjutnya = 0){

    cout << "Jumlah Deret Fibonacci: ";

    for(int i = 1; i <= ang; i++){
        if (i == 1){
            cout << ang1 << " ";
            continue;
        }
        if (i == 2) {
            cout << ang2 << " ";
            continue;
        }
        //menghitung angka selanjutnya
        angSelanjutnya = ang1 + ang2;
        ang1 = ang2;
        ang2 = angSelanjutnya;

        cout << angSelanjutnya << " ";
    }
    cout << endl;
}

int main (){
    int ang;

    cout << "Masukan Jumlah Angka yang diinginkan: ";
    cin >> ang;
    cout << endl;

    Fibonacci(ang);
        return 0;
}
