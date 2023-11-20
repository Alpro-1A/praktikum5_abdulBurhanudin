#include <iostream>

using namespace std;

// Function untuk menghitung dan menampilkan jumlah bilangan ganjil sampai batas tertentu.

void BilanganGanjil (int batas, int & JumlahGanjil){
    cout << "Bilangan Ganjil: ";
    for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " ";
            JumlahGanjil += i;
        }
    }
    cout << endl;
}

// Function untuk menghitung dan menampilkan jumlah bilangan genap sampai batas tertentu.

void BilanganGenap (int batas, int & JumlahGenap){
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i+= 2){
        cout << i << " ";
        JumlahGenap += i;
    }
    cout << endl;
}

// Function untuk menghitung dan menampilkan jumlah bilangan prima sampai batas tertentu.

void BilanganPrima (int batas, int & JumlahPrima){
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++){
        }

        if (j * j > i){
            cout << i << " ";
            JumlahPrima += i;
        }
    }
    cout << endl;
}

// Function untuk menampilkan faktor ganjil

void FaktorGanjil (int JumlahGanjil){
    cout << "Faktor-faktor dari penjumlahan bilangan ganjil: ";
    for (int i = 1; i <= JumlahGanjil; i++){
        if (JumlahGanjil % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function untuk menampilkan faktor genap

void FaktorGenap (int JumlahGenap){
    cout << "Faktor-faktor dari penjumlahan bilangan genap: ";
    for (int i = 1; i <= JumlahGenap; i++){
        if (JumlahGenap % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function untuk menampilkan faktor prima

void FaktorPrima (int JumlahPrima){
    cout << "Faktor-faktor dari penjumlahan bilangan Prima: ";
    for (int i = 1; i <= JumlahPrima; i++){
        if (JumlahPrima % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

// untuk output

int main (){
    int batas;
    int JumlahGanjil = 0, JumlahGenap = 0, JumlahPrima = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima" << endl;
    cout << "Masukan batas akhir: ";
    cin >> batas;

    // memanggil function untuk menampilkan hasil

    BilanganGanjil(batas, JumlahGanjil);
    BilanganGenap(batas, JumlahGenap);
    BilanganPrima(batas, JumlahPrima);

    cout << "Jumlah Bilangan Ganjil: " << JumlahGanjil << endl;
    cout << "Jumlah Bilangan Genap: " << JumlahGenap << endl;
    cout << "Jumlah Bilangan Prima: " << JumlahPrima << endl;

    // Memanggil function untuk menampilkan hasil

    FaktorGanjil(JumlahGanjil);
    FaktorGenap(JumlahGenap);
    FaktorPrima(JumlahPrima);

    return 0;
}
