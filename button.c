#include <avr/io.h>
#include "button.h"


/** Return non-zero if button pressed.  */
int button_pressed_p (void)
{
    /* Return non-zero if button pressed_p.  */
    return ((PIND)&(1<<7)) != 0;
    /* TODO.  */
}

/** Initialise button1.  */
void button_init (void)
{
    /* Initialise port to read button 1.  */
     DDRD &= ~(1<<7);
    /* TODO.  */
}

