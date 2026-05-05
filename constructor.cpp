#include <iostream>
using namespace std;

class mahasiswa {
public:
    Mahasiswa();
};

mahasiswa::mahasiswa() {
    cout << "Constructor Terpanggil" << endl;
};

int main() {
    mahasiswa mhs;
    return 0;
}