// Buatlah sebuah program yang berisi 2 class dimana terdapat class
// Layang-Layang, Belah Ketupat.
// Di setiap class nya berisikan luas dan keliling serta input dan
// output.
// Setiap variable memiliki akses private, BangunDatar Belah Ketupat
// merupakan friend function keliling dari Layang-Layang, dan
// semua class hanya dapat diakses menggunakan object.

#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;
class layanaglayang {
    private:
    //di = diagonal
    double di1, di2;
    double sisi1, sisi2;
    //Lengkapi disini

    public:

    void inputData(){
    cout<<"Masukan nilai diagonal 1 layang-layang : ";
    cin>>di1;

    cout<<"Masukan nilai diagonal 2 layang-layang : ";
    cin>>di2;

    cout<<"Masukan nilai sisi 1 : ";
    cin>>sisi1;

    cout<<"Masukan nilai sisi 2 : ";
    cin>>sisi2;
    }

    double hitungLuas() {
        return 0.5 * di1 * di2;
    }
    //Lengkapi disini
    friend void tampilkankeliling(layanaglayang, BelahKetupat);
};

class BelahKetupat {
    private:
    //di = diagonal
    double di1, di2;
    double sisi1, sisi2;
    //Lengkapi disini

    public:
    void inputData() {
        //Lengkapi disini
    }
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    //Lengkapi disini
};

void tampilkankeliling() //Lengkapi disini
{
    //Lengkapi disini
}

int main() {
    //Lengkapi disini

    cout << "\n--- Hasil luas ---" << endl;
    cout << "Luas Layang-Layang     : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat     : " <<ObjectBelah.hitunngLuas() <<endl;

    //Lengkapi disini
}