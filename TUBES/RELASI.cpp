#include <iostream>
#include "h.RELASI.h"


void CreateList(listrelasi &L) {
    first(L) = NULL;
}

address_RELASI Alokasi(address_AMER C) {
    address_RELASI P = new elmlist_relasi;
    info(P) = C;
    next(P) = NULL;
    return P;
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

