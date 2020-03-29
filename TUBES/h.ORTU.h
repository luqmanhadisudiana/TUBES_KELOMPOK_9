#ifndef H_ORTU_H_INCLUDED
#define H_ORTU_H_INCLUDED
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last

typedef struct elmlist_anak*address;
struct anak{
    string nama;
    int ttl;
    int tahunlahir;
    string tempattinggal;
};
struct elmlist_anak{
    anak info;
    next address;
    prev address;
};

struct listAnak{
    first address;
    last address;
};

void createList(listAnak &L);
void isEmpty(listAnak L);
void createElementAnak(address &P);
void tambahDataAnak(listAnak L, address P);
void hapusDataAnakTertentu(listAnak &L, address Prec, address &P);
void tampilkanDataAnak(listAnak L);



#endif // H_ORTU_H_INCLUDED
