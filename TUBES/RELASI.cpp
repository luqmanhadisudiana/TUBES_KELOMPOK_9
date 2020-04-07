#include <iostream>
#include "h.RELASI.h"


void createList(listrelasi &L) {
    first(L) = NULL;
}

address_RELASI Alokasi(address_AMER ortu, address_ORTU anak) {
    address_RELASI P = new elmlist_relasi;
    info(P) = ortu;
    next(P) = NULL;
    info1(P) = anak;
    return P;
}
void inputRelasi(listrelasi &LR, listOrtu LO, listAnak LA){
    address_ORTU P;
    address_AMER Q;
    address_RELASI R;
    string namaortu;
    string namaanak;

    tampilkanDataOrtu(LO);
    cout<<"MASUKAN NAMA ORANG TUA : ";
    cin>>namaortu;
    Q = findDataOrtu(LO, namaortu);
    tampilkanDataOrtu(LO);
    if( Q != NULL){
        cout<<endl;

        tampilkanDataAnak(LA);

        if(P != NULL){
            P = findDataAnak(LA, namaanak);
            cout<<endl;
            cout<<"SAYANGILAH KELUARGA DENGAN #DIRUMAHAJA!!!"<<endl;
        }else{
            cout<<"ANDA CARI KELUARGA SIAPA?"<<endl;
        }
    }else{
        cout <<"ANDA SALAH KELUARGA!!!" << endl;
    }
}

void InsertFirst(listrelasi &L, address_RELASI P) {
    next(P) = first(L);
    first(L) = P;
}

address_RELASI findData(listrelasi L, address_AMER C) {
    address_RELASI P = first(L);
    while(P != NULL) {
        if(info(P)== C) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void InsertAfter(address_RELASI &Prec, address_RELASI P) {
    next(P) = next(Prec);
    next(Prec) = P;
}

void PrintInfo(listrelasi L) {
    address_RELASI P = first(L);
    while(P !=NULL){
        cout<<" - "<<info(P)<<endl;
        P = next(P);
    }
}

