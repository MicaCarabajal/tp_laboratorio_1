#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

#include "ArrayEmployees.h"
#include "input.h"

void initEmployees(eEmployee list[],int len)
{
    for(int i=0;i<len;i++)
    {
        list[i].isEmpty=0;
    }
}
int menuEmpleyee()
{
    int option;
    system("cls");
    printf("***ABM EMPLEAOS***\n");
    printf("1-Alta empleado\n");
    printf("2-Modificar empleado\n");
    printf("3-Baja empleado\n");
    printf("4-Listar empleados\n");
    printf("5-Salir\n\n");

    printf("Ingrese la opcion que quiera realizar:\n");
    scanf("%d",&option);

    return option;
}
int searchFree(eEmployee list[],int len)
{
    int index=-1;

    for(int i=0;i<len;i++)
    {
        if(list[i].isEmpty==0)
        {
            index=i;
            break;
        }
    }
    return index;
}
int findEmployeeById(eEmployee list[],int len,int id)
{
    int index=-1;

    for(int i=0;i<len;i++)
    {
        if(list[i].isEmpty==1 && list[i].id==id)
        {
            index=i;
            break;
        }
    }
    return index;
}
void addEmployee(eEmployee list[],int len)
{
    int index;
    int idEmp;
    int esta;

    index=searchFree(list,len);

    if(index==-1)
    {
        printf("\n¡No se cuentra lugar en el sistema en estos momentos!");
    }
    else
    {
        printf("Ingrese el id del empleado: ");
        scanf("%d",&idEmp);

        esta=findEmployeeById(list,len,idEmp);

        if(esta!=-1)
        {
            printf("\nExiste un empleado con el id %d en el sistema,reintente",idEmp);
        }
        else
        {
            list[index].id=idEmp;
            getString(list[index].name,"Ingrese el nombre del empleado: ","El nombre excede el limite,reintente nuevamente",1,51);
            getString(list[index].lastName,"Ingrese el apellido: ","El apellido excede el limite,reintente nuevamente",1,51);
            getFloat(&list[index].salary,"Ingrese su sueldo : ","El sueldo min/max[8000/80000],reintente nuevamente",8000,80000);
            printf("\nSECTORES");
            printf("\n1-Contador");
            printf("\n2-Ventas");
            printf("\n3-Supervisor");
            printf("\n4-RRHH");
            printf("\n5-Asistente");
            printf("\n6-Gerente");
            getInt(&list[index].sector,"Ingrese el sector :","El sector ingresado es invalido,reintente nuevamente",1,6);

            list[index].isEmpty=1;
            printf("\nSe ha realizado exitosamente el alta del empleado\n");
        }
    }
}
void modificationEmployee(eEmployee list[],int len)
{
    int option;
    int index;
    int idEmployee;

    printf("\n**Modificacion de empleado**");
    printf("\n1-Modificar Nombre");
    printf("\n2-Modificar Apellido");
    printf("\n3-Modificar Salario");
    printf("\n4-Modificar Sector");
    printf("\n5-Salir");

    printf("\nIngrese el numero de la opcion para poder realizar la modificacion: ");
    scanf("%d",&option);

    printf("\nIngrese el id del empleado a modificar: ");
    scanf("%d",&idEmployee);

    index=findEmployeeById(list,len,idEmployee);

    if(index==-1)
    {
        printf("\nNo hay un empleado con ese id,reintente nuevamente\n");
    }
    else
    {
      switch(option)
      {
        case 1:
            getString(list[index].name,"Ingrese el nombre del empleado :","¡Error!,El nombre excede el limite",1,51);
        break;

        case 2:
            getString(list[index].lastName,"Ingrese el apellido del empleado :","¡ERROR!,El apellido excede el limite",1,51);
        break;

        case 3:
            getFloat(&list[index].salary,"Ingrese el salario del empleado :","¡Error!,Debe ingresar numeros",8000,80000);
        break;

        case 4:
            printf("\nSECTORES");
            printf("\n1-Contador");
            printf("\n2-Ventas");
            printf("\n3-Supervisor");
            printf("\n4-RRHH");
            printf("\n5-Asistente");
            printf("\n6-Gerente");
            getInt(&list[index].sector,"Ingrese el sector :","El sector ingresado es invalido,reintente nuevamente",1,6);
        break;

        case 5:
        break;

        default:
            printf("\nLa opcion ingresada es incorrecta,reintente nuevamente");
        }

     printf("\nSe realizo la modificacion del empleado exitosamente\n");
     }
}
void removeEmployee(eEmployee list[],int len)
{
    int idEmplo;
    int confirmation;

    printf("\nIngrese el id del empleado que desea dar de bajar: ");
    scanf("%d",&idEmplo);

    for(int i=0;i<len;i++)
    {
        if(idEmplo==list[i].id)
        {
            printf("\n¿Seguro quiere dar de baja al empleado? s/n");
            confirmation=getche();

            if(tolower(confirmation)=='s')
            {
                printf("\nLa baja del empleado se realizo correctamente\n");
                list[i].isEmpty=0;
                break;
            }
            else
            {
                printf("\nLa baja del empleado ha sido cancelada");
                break;
            }
        }
        else
        {
            printf("\nEl id del empleado que ingreso no existe,reintente nuevamente");
        }
    }
}
void printEmployees(eEmployee list[],int len)
{
    printf("| Id   |  Nombre   |  Apellido|  Salario | Sector  | \n\n");

    sortEmployees(list,len);

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(list[j].lastName && list[i].sector)
            {
               printf(" %d   %9s    %s   %f    %d  \n",list[j].id,list[j].name,list[j].lastName,list[j].salary,list[j].sector);
            }

        }
    }
}
void printEmployee(eEmployee list[],int len)
{
    int idEmp;
    int i;
    printf("\nIngrese el id de un empleado que quiera que se muestre: ");
    scanf("%d",&idEmp);
    i=findEmployeeById(list,len,idEmp);
    if(i==-1)
    {
        printf("\nNo hay un empledo con ese id que ingresa");
    }
    else
    {
        printf("| Id |  Nombre   | Apellido|  Salario |  Sector  | \n\n");
        printf(" %d   %9s    %s   %f   %d  \n",list[i].id,list[i].name,list[i].lastName,list[i].salary,list[i].sector);
    }
}

void sortEmployees(eEmployee list[],int len)
{
    eEmployee empAux;

    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(stricmp(list[i].lastName,list[j].sector)>0)
            {
                empAux=list[i];
                list[i]=list[j];
                list[j]=empAux;
            }
            if(stricmp(list[j].sector,list[i].sector)>0)
            {
                empAux=list[i];
                list[i]=list[j];
                list[j]=empAux;
            }

        }
    }
}
