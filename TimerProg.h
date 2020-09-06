
// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef TIMERPROG_H
#define	TIMERPROG_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>

extern volatile uint16_t tmProg[5]; //tablica zmiennych 
void TimerProg(void); //funkcja timera programowego



#endif	/* XC_HEADER_TEMPLATE_H */

