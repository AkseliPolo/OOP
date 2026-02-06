#ifndef notifikaattori_h
#define notifikaattori_h
#include "seuraaja.h"
class notifikaattori{
public:
    notifikaattori();
    void lisaa(Seuraaja*);
    void poista(Seuraaja*);
    void tulosta();
    void postita(string);
private:
    Seuraaja* seuraajat = nullptr;
};

#endif
