#ifndef H_ORTU_H_INCLUDED
#define H_ORTU_H_INCLUDED
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(L) L.first
#define last(L) L.last

using namespace std;

typedef struct elmlist_anak*address;
struct anak{
    string nama;
    string tmpt;
    int tl;
    int tahunlahir;
    string tempattinggal;
};
struct elmlist_anak{
    anak info;
    address next;
    address prev;
};

struct listAnak{
    address first;
    address last;
};

void createList(listAnak &L);
bool isEmpty(listAnak L);
void createElementAnak(address &P);
void tambahDataAnak(listAnak &L, address P);
address findData(listAnak L, string x);
void hapusDataAnakTertentu(listAnak &L, address Prec, address &P);
void tampilkanDataAnak(listAnak L);

#endif // H_ORTU_H_INCLUDED
