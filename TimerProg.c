

#include "xc.h"
#include "TimerProg.h"



volatile uint16_t tmProg[5];

void TimerProg(void){
     uint8_t i;
     uint16_t dec;
           
 for(i=0;i<=5;i++)
    {
       dec = tmProg[i]; //Pobranie wartosci czasu do zmiennej dec
    if (dec) tmProg[i] = --dec; //Jesli czas jest wiekszy od 0 zmniejsz o 1 i przepisz wartosc do tablicy
    }

}