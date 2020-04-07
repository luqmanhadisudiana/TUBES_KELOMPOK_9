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
    int jmlhanak,i;

    createList(O);
    createList(A);
    createList(R);

    cout<<"================================= LIST ANAK =========================================="<<endl;
    cout << "MASUKAN JUMLAH ANAK : ";
    cin >> jmlhanak;
    i = 0;
    while (i < jmlhanak) {
        createElementAnak(AO);
        tambahDataAnak(A, AO);
        i++;
    }
    tampilkanDataAnak(A);
    cout<<endl;
    cout<<"================================= LIST ORANG TUA ====================================="<<endl;
    createElementOrtu(AA);
    tambahDataOrtu(O, AA);
    cout<<endl;
    inputRelasi(R, O, A);
}
