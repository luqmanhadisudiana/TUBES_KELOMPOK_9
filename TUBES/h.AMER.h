#ifndef H_AMER_H_INCLUDED
#define H_AMER_H_INCLUDED
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define first(L) L.first
#define last(L) L.last

using namespace std;

typedef struct elmlist_ortu*address_AMER;
struct ortu{
    string nama2;
    string tempattinggal2;
    string kerjaan;
    int jmlhanak;
};
struct elmlist_ortu{
    ortu info;
    address_AMER next;
    address_AMER prev;
};

struct listOrtu{
    address_AMER first;
    address_AMER last;
};

void createList(listOrtu &L);
bool isEmpty(listOrtu L);
void createElement(address_AMER &P);
void tambahDataOrtu(listOrtu &L, address_AMER P);
void hapusDataOrtuTertentu(listOrtu &L, address_AMER Prec, address_AMER &P);
address_AMER findData(listOrtu L, string x);
void tampilkanDataOrtu(listOrtu L);

#endif // H_AMER_H_INCLUDED
