#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "OS.h"

enum keyboard{LEFT,RIGHT,UP,DOWN,ESC,ENTER};

char OSstring[10];

char *Windows ="Windows";
char *Linux ="Linux";

int main()
{

    #ifdef WIN32
    strcpy(OSstring,Windows);
    #endif

    #ifdef linux
    strcpy(OSstring,Linux);
    #endif

    OSselect(OSstring);
    return 0;
}
