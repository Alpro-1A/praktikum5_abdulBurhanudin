#include <iostream>

using namespace std;

void Piramid(){

    int n;
    cout << "Masukan Tinggi Segitiga: ";
    cin >> n; // input tinggi bintang

    // proses membuat bintang
    for(int i = 1, k = 0; i <= n; i++, k = 0){
        for(int j = 1; j <= n - i; j++){
            cout << " "; // diberi spasi agar tidak berdempet
        }

        while(k != 2 * i - 1){
            cout << "*";
            ++k;
        }
        cout << endl;
    }
}

int main () {
    Piramid();
        return 0;
}
