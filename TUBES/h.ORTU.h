#ifndef H_ORTU_H_INCLUDED
#define H_ORTU_H_INCLUDED
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define info1(P) P->info1
#define first(L) L.first
#define last(L) L.last


using namespace std;
typedef string infotype_ORTU;
typedef struct elmlist_anak*address_ORTU;
struct anak{
    string nama;
    string tmpt;
    int tl;
    int tahunlahir;
    string bln;
    string tempattinggal;
    int jmlhanak;
    int i;
};
struct elmlist_anak{
    anak info;
    infotype_ORTU info1;
    address_ORTU next;
    address_ORTU prev;
};

struct listAnak{
    address_ORTU first;
    address_ORTU last;
};

void createList(listAnak &L);
bool isEmpty(listAnak L);
void createElementAnak(address_ORTU &P);
void tambahDataAnak(listAnak &L, address_ORTU P);
address_ORTU findDataAnak(listAnak L, string x);
void hapusDataAnakTertentu(listAnak &L, address_ORTU Prec, address_ORTU &P);
address_ORTU alokasi(infotype_ORTU x);
void tampilkanDataAnak(listAnak L);

#endif // H_ORTU_H_INCLUDED
