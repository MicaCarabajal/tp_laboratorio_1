#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "input.h"

int getInt(int* input,char message[],char sMessage[],int lowLimit,int hiLimit)
{
    int todoOk=-1;
    int value;

    printf("\n%s",message);
    scanf("%d",&value);

    while(value<lowLimit || value>hiLimit)
    {
        printf(sMessage);
        scanf("%d",&value);
    }
    *input=value;
    todoOk=0;

    return todoOk;
}

void getFloat(float* input,char message[],char sMessage[],float lowLimit,float hiLimit)
{
    printf(message);
    scanf("%f",input);

    /*while(*input<lowLimit || *input>hiLimit)
    {
        printf(sMessage);
        printf(message);
        scanf("%f",input);
    }*/
}
int getString(char* input,char message[],char sMessage[],int lowLimit,int hiLimit)
{
    int todoOk=-1;

    printf("%s",message);
    fflush(stdin);
    scanf("%s",input);

    /*while(strlen(input)>lowLimit || strlen(input)<hiLimit)
    {
        printf(sMessage);
        fflush(stdin);
        scanf("%s",input);
    }
    todoOk=0;*/

    return todoOk;
}
