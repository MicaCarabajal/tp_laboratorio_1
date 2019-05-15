#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define ELEMENTS 1000

int main()
{
    char seguir='s';
    char confirma;

    eEmployee list[ELEMENTS];
    //eEmployee idEmple[ELEMENTS];

    do
    {
        switch(menuEmpleyee())
        {
        case 1:
            addEmployee(list,ELEMENTS);
            system("pause");
            break;
        case 2:
            modificationEmployee(list,ELEMENTS);
            system("pause");
            break;
        case 3:
            removeEmployee(list,ELEMENTS);
            system("pause");
            break;
        case 4:
            printEmployee(list,ELEMENTS);
            sortEmployees(list,ELEMENTS);
            printEmployees(list,ELEMENTS);
            system("pause");
            break;
        case 5:
            printf("\nConfirma salida s/n?: ");
            fflush(stdin);
            confirma=getche();

            if(tolower(confirma)=='s')
            {
                seguir='n';
            }
            break;
        default:
            printf("\nOpcion invalida,reintente\n\n");
            system("break");
        }
    }
    while(seguir=='s');

    return 0;
}

