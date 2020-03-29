#include <iostream>
#include "h.ORTU.h"

void createList(listAnak &L){
    first(L) = NULL;
    last(L) = NULL;
}
bool isEmpty(listAnak L){
    if(first(L) == NULL) {
        return true;
    } else {
        return false;
    }
}
void createElementAnak(address &P){
    string nama;
    string tempattinggal;
    string tmpt;
    int tl;
    int tahunlahir;

    P = new elmlist_anak;
    next(P) = NULL;
    prev(P) = NULL;

    cout<<"================================= MASUKAN DATA ANAK =========================================="<<endl;
    cout<<endl;

    cout<<"NAMA ANAK : ";
    cin>>nama;
    info(P).nama = nama;
    cout<<endl;

    cout<<"TEMPAT TANGGAL LAHIR : ";
    cin>>tmpt;
    info(P).tmpt = tmpt;
    cout<< " , ";
    cin>>tl;
    info(P).tl = tl;
    cout<<endl;

    cout<<"TAHUN LAHIR : ";
    cin>>tahunlahir;
    cout<<endl;
    cout<<"UMUR : ";
    info(P).tahunlahir = 2020 - tahunlahir;
    cout<<info(P).tahunlahir;
    cout<<endl;

    cout<<"SERUMAH DENGAN ORTU : "<<endl;
    cout<<"YA"<<endl;
    cout<<"TIDAK"<<endl;
    cin>>tempattinggal;
    if(tempattinggal == "YA"){
        info(P).tempattinggal = "SERUMAH";
    }else if(tempattinggal == "TIDAK"){
        info(P).tempattinggal = "MISAH";
    }else{
        cout<<"TIDAK MILIH";
    }

}
void tambahDataAnak(listAnak &L, address P){
    if (isEmpty(L) == true){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
address findData(listAnak L, string x)
{
    address P = first(L);
    while(next(P) != NULL && info(P).nama != x){
        P = next(P);
    }
    if (info(P).nama == x) {
        return P;
    }
    return NULL;
}
void hapusDataAnakTertentu(listAnak &L, address Prec, address &P){
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

void tampilkanDataAnak(listAnak L){
    address P;
    P = first(L);
    while (P != NULL){
        cout<<"NAMA : "<<info(P).nama<<endl;
        cout<<"TTL : "<<info(P).tmpt<<" , "<<info(P).tl<<endl;
        cout<<"TAHUN LAHIR : "<<info(P).tahunlahir<<endl;
        cout<<"TEMPAT TINGGAL : "<<info(P).tempattinggal<<endl;
        P = next(P);
    }
}
