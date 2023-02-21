#include <stdio.h>
#include <stdlib.h>

#include "Pile.h"

int main()
{
    printf("Hello world!\n");

    pile *L = NULL;
    pile *tri = NULL;
    pile *temp = NULL;

    Push(&L,2);
    Push(&L,3);
    Push(&L,1);
    Push(&L,4);
    Push(&L,5);

    puts("Pile d'entrée :");
    View(L);
    puts("-----");

    char oper[10] = {'E','E','E','D','E','E','D','D','D','D'};

    int cour, elm;
    for(int i=0;i<10;i++)
    {
        if(oper[i]=='E')
        {
            cour=Pop(&L);
            Push(&temp, cour);
        }
        if(oper[i]=='D')
        {
            elm = Pop(&temp);
            Push(&tri, elm);
        }
    }

    View(tri);

    return 0;
}
