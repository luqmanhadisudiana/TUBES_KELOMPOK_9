#include <iostream>
#include "h.RELASI.h"
#include "h.ORTU.h"
#include "h.AMER.h"

using namespace std;

int main()
{
    listOrtu O;
    listAnak A;
    listrelasi R;
    address_AMER AA;
    address_ORTU AO;
    address_RELASI AR;

    createList(O);
    createList(A);
    createList(R);

    AO = alokasi("BUDI");
    tambahDataAnak(A, AO);
    AO = alokasi("IMAN");
    tambahDataAnak(A, AO);
    AO = alokasi("ASEP");
    tambahDataAnak(A, AO);
    AO = alokasi("UJANG");
    tambahDataAnak(A, AO);

    cout<<"================================= LIST ANAK =========================================="<<endl;
    createElementAnak(AO);
    tampilkanDataAnak(A);
}
