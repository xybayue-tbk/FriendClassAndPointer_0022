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
    double sisi;
    //Lengkapi disini

    public:
    void inputData() {
        cout<<"\nInput diagonal 1 belah ketupat : ";
        cin>>di1;

        cout<<"Input diagonal 2 belah ketupat : ";
        cin>>di2;

        cout<<"Input sisi : ";
        cin>>sisi;

        //Lengkapi disini
    }
    double hitungLuas() {
        return 0.5 * di1 * di2;
    }
        friend void tampilkankeliling(layanaglayang, BelahKetupat);

    //Lengkapi disini
};

void tampilkankeliling(layanaglayang l, BelahKetupat b) //Lengkapi disini
{ 
    cout << "\n--- Keliling ---" << endl;
    cout << "Keliling Layang-Layang : " << 2*(l.sisi1 + l.sisi2) << endl;

    cout << "Keliling Belah Ketupat : " << 4*(b.sisi) << endl;
    
    //Lengkapi disini
}

int main() {
    layanaglayang objeklayang;
    BelahKetupat ObjectBelah;
    //Lengkapi disini

    cout << "\n--- Hasil luas ---" << endl;
    cout << "Luas Layang-Layang     : " << objeklayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat     : " << ObjectBelah.hitungLuas() <<endl;

    tampilkankeliling(objeklayang, ObjectBelah);
    //Lengkapi disini
}