#ifndef H_AMER_H_INCLUDED
#define H_AMER_H_INCLUDED
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(L) L.first
#define last(L) L.last

using namespace std;

typedef struct elmlist_ortu*address;
struct ortu{
    string nama2;
    string tempattinggal2;
    string kerjaan;
    int jmlhanak;
};
struct elmlist_ortu{
    ortu info;
    address next;
    address prev;
};

struct listOrtu{
    address first;
    address last;
};

void createList(listOrtu &L);
bool isEmpty(listOrtu L);
void createElement(address &P);
void tambahDataOrtu(listOrtu &L, address P);
void hapusDataOrtuTertentu(listOrtu &L, address Prec, address &P);
address findData(listOrtu L, string x);
void tampilkanDataOrtu(listOrtu L);

#endif // H_AMER_H_INCLUDED
