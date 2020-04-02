#include <iostream>
#include "h.AMER.h"

void createList(listOrtu &L){
    first(L) = NULL;
}
bool isEmpty(listOrtu L){
    if(first(L) == NULL) {
        return true;
    } else {
        return false;
    }
}
void createElement(address_AMER &P){
    string nama2, tempattinggal2, kerjaan;
    int jmlhanak;

    P = new elmlist_ortu;
    next(P) = NULL;
    prev(P) = NULL;

    cout<<"================================= MASUKAN DATA ANAK =========================================="<<endl;
    cout<<endl;

    cout<<"NAMA ORANG TUA : ";
    cin>>nama2;
    info(P).nama2 = nama2;
    cout<<endl;


    cout<<"TEMPAT TINGGAL : ";
    cin>>tempattinggal2;
    info(P).tempattinggal2 = tempattinggal2;
    cout<<endl;

    cout<<"KERJAAN : ";
    cin>>kerjaan;
    info(P).kerjaan = kerjaan;
    cout<<endl;

    cout<<"JUMLAH ANAK : ";
    cin>>jmlhanak;
    info(P).jmlhanak = jmlhanak;
    cout<<endl;
}
void tambahDataOrtu(listOrtu &L, address_AMER P){
    if (isEmpty(L) == true){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
address_AMER findData(listOrtu L, string x)
{
    address_AMER P = first(L);
    while(next(P) != NULL && info(P).nama2 != x){
        P = next(P);
    }
    if (info(P).nama2 == x) {
        return P;
    }
    return NULL;
}
void hapusDataOrtuTertentu(listOrtu &L, address_AMER &Prec, address_AMER &P){
    if(Prec == NULL){
        delete P;
    }else if(first(L) == NULL){
        first(L) = P;
        last(L) = P;
    }else if(Prec == last(L)){
        next(Prec) = P;
        prev(P) = Prec;
        last(L) = P;
    }else{
        next(P) = next(Prec);
        prev(next(Prec)) = P;
        next(Prec) = P;
        prev(P) = Prec;
    }
}
void tampilkanDataOrtu(listOrtu L){
    address_AMER P = first(L);
    while (P != NULL){
        cout<<"NAMA : "<<info(P).nama2<<endl;
        cout<<"TEMPAT TINGGAL :"<<info(P).tempattinggal2<<endl;
        cout<<"KERJAAN : "<<info(P).kerjaan<<endl;
        P = next(P);
    }
}

