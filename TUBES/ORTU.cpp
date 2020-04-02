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
void createElementAnak(address_ORTU &P){
    string nama;
    string tempattinggal;
    string tmpt;
    int tl;
    string bln;
    int tahunlahir;

    P = new elmlist_anak;
    next(P) = NULL;
    prev(P) = NULL;

    cout<<"================================= MASUKAN DATA ANAK =========================================="<<endl;

    cout<<"NAMA ANAK : ";
    cin>>nama;
    info(P).nama = nama;
    cout<<endl;

    cout<<"TEMPAT TANGGAL LAHIR : "<<endl;
    cout<<"TEMPAT : ";
    cin>>tmpt;
    info(P).tmpt = tmpt;
    cout<<"TANGGAL : ";
    cin>>tl;
    info(P).tl = tl;
    cout<<"BULAN : ";
    cin>>bln;
    info(P).bln = bln;
    cout<<"TAHUN LAHIR : ";
    cin>>tahunlahir;
    info(P).tahunlahir = tahunlahir;
    cout<<endl;

    cout<<"UMUR : "<<2020 - tahunlahir;
    cout<<endl;

    cout<<"SERUMAH DENGAN ORTU : "<<endl;
    cout<<"YA"<<endl;
    cout<<"TIDAK"<<endl;
    cout<<"=== JAWABAN ==="<<endl;
    cin>>tempattinggal;
    if(tempattinggal == "YA"){
        info(P).tempattinggal = "SERUMAH";
    }else if(tempattinggal == "TIDAK"){
        info(P).tempattinggal = "MISAH";
    }else{
        cout<<"TIDAK MILIH";
    }
    cout<<endl;

}
void tambahDataAnak(listAnak &L, address_ORTU P){
    if (isEmpty(L) == true){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
address_ORTU findData(listAnak L, string x)
{
    address_ORTU P = first(L);
    while(next(P) != NULL && info(P).nama != x){
        P = next(P);
    }
    if (info(P).nama == x) {
        return P;
    }
    return NULL;
}
void hapusDataAnakTertentu(listAnak &L, address_ORTU Prec, address_ORTU &P){
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
    address_ORTU P;
    P = first(L);
    while (P != NULL){
        cout<<"NAMA : "<<info(P).nama<<endl;
        cout<<"TTL : "<<info(P).tmpt<<" , "<<info(P).tl<<" "<<info(P).bln<<" "<<info(P).tahunlahir<<endl;
        cout<<"UMUR : "<<2020 - info(P).tahunlahir<<endl;
        cout<<"TEMPAT TINGGAL : "<<info(P).tempattinggal<<endl;
        P = next(P);
    }
}
