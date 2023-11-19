#include <iostream>
using namespace std;

// nomor 1
void bilanganGanjil(int batas, int & sumGanjil){
    cout << "Bilangan Ganjil: ";
    for (int i=0; i<=batas; i++){
        if (i % 2 != 0){
            cout << i << " ";
            sumGanjil +=1;
        }
    }
    cout << endl;
}
void bilanganGenap (int batas, int &sumGenap){
    cout << "Bilangan Genap: ";
    for (int i=0; i<=batas; i+=2){
        cout << i << " ";
        sumGenap +=i;
    }
    cout << endl;
}
void bilanganPrima(int batas, int & sumPrima){
    cout << "Bilangan Prima: ";
    for (int i=2; i<=batas; i++){
        int j;
        for (j=2; j<=i && i%j !=0; j++){
        }
        if (j*j > i){
            cout << i << " ";
            sumPrima +=i;
        }
    }
    cout << endl;
}
void faktorGanjil (int sumGanjil){
    cout << "Fakor penjumlahan bilangan ganjil: ";
    for (int i=1; i<=sumGanjil; i++){
        if (sumGanjil % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}
void faktorGenap (int sumGenap){
    cout << "Faktor penjumlahan bilangan genap: ";
    for (int i=1; i<=sumGenap; i++){
        if (sumGenap % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}
void faktorPrima (int sumPrima){
    cout << "Faktor penjumlahan bilangan prima: ";
    for (int i=1;i<=sumPrima; i++){
        if (sumPrima % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int batas;
    int sumGanjil=0, sumGenap=0, sumPrima=0;

    cout << "Program Bilangan Ganjil, Genap, Prima\n\n";
    cout << "Masukkan batas akhir: "; cin >> batas;

    bilanganGanjil(batas, sumGanjil);
    bilanganGenap(batas, sumGenap);
    bilanganPrima(batas, sumPrima);

    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan prima: " << sumPrima << endl;

    faktorGanjil(sumGanjil);
    faktorGenap(sumGenap);
    faktorPrima(sumPrima);
    cout << "\n\n";
}

// nomor 2
void pyramid() {

    int angka;
    cout << "Masukkan jumlah batasan: ";
    cin >> angka;
    for (int i = 1; i <= angka; i++){
        for (int j = 1; j <= angka - i; j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    pyramid();
    cout << "\n\n";
}

// nomor 3
void fibonacci (int n, int n1=0, int n2=1, int fn=0){
    cout << "Jumlah deret fibonacci yang dibutuhkkan: ";
    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << n1 << " ";
        }
        if (i == 2){
            cout << n2 << " ";
        }
        fn = n1 + n2;
        n1 = n2;
        n2 = fn;
        cout << fn << " ";
    } cout << endl;
}
int main(){
    int n;

    cout << "Masukkan jumlah angka yang dibutuhkan: "; cin >> n;
    cout << endl;

    fibonacci(n);
    return 0;
}
