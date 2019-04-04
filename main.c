#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

 int main()
 {
    float numeroA=0;
    float numeroB=0;
    int opciones=0;
    int realiceCalculos=0;

    float resultSuma;
    float resultResta;
    float resultMultiplicacion;
    float resultDivision;
    int resultFactorialA;
    int resultFactorialB;

    while(opciones!=5)
    {
        printf("------Menu de opciones------");//Muestro las opciones que el usuario debe ingresar.
        printf("\nPara realizar una operacion,introduzca uno de los siguientes numeros:");
        printf("\n1.Ingresar el primer numero");
        printf("\n2.Ingresar el segundo numero");
        printf("\n3.Calcular todas las operaciones");
        printf("\n4.Mostrar resultados de las operaciones");
        printf("\n5.Salir");

        printf("\nIngrese la opcion que quiera realizar(1 al 5):");//Le pido al usuario que ingrese dichas opciones.
        scanf("%d",&opciones);
        fflush(stdin);

        switch(opciones)
            {
                case 1://Le pido al usuario el primer numero que tiene que ingresar.
                    printf("\nIngrese un valor para su primer numero:");
                    scanf("%f",&numeroA);
                    fflush(stdin);
                    break;
                case 2://Le pido al usuario el segundo numero que tiene que ingresar.
                    printf("\nIngrese un valor para su segundo numero:");
                    scanf("%f",&numeroB);
                    fflush(stdin);
                    break;

                case 3://calculo todas las operaciones y llamo a las funciones.
                    resultSuma=sumar(numeroA,numeroB);
                    resultResta=restar(numeroA,numeroB);
                    resultMultiplicacion=multiplicar(numeroA,numeroB);
                    resultDivision=dividir(numeroA,numeroB);
                    resultFactorialA=factorial(numeroA);
                    resultFactorialB=factorial(numeroB);

                    realiceCalculos=1;
                    printf("\n#####Se realizo los calculos para los numeros %f y %f adecuadamente.#####\n\n",numeroA,numeroB);
                    break;

                case 4://Muestro los resultados de todas las operaciones mencionadas.
                    if(realiceCalculos==1)
                    {
                        printf("\n1.El resultado de la suma es:%f",resultSuma);

                        printf("\n2.El resultado de la resta es:%f",resultResta);

                        printf("\n4.El resultado de la multiplicacion es:%f",resultMultiplicacion);

                        if(numeroB==0)
                        {
                            printf("\n3.No es posible dividir por 0.");
                        }else
                        {
                            printf("\n3.El resultado de division es:%f",resultDivision);
                        }

                        if(numeroA<0 || numeroB<0)
                        {
                             printf("\n5.ERROR!no es posible realizar el factorial con un numero negativo.\n");
                        }
                        else
                        {
                            printf("\n5.El factorial de A es:%d y el factorial de B es:%d\n\n",resultFactorialA,resultFactorialB);
                        }
                    }
                    else
                    {
                        printf("\nERROR!,no se encontraron calculos realizados para calcular.\n\n");
                    }
                    break;
                case 5:
                    break;
                default://En caso de que el usuario ingrese mal un numero de las opciones.
                    printf("\nEl numero ingresado para las opciones es invalido,reintente nuevamente.\n\n");
                    break;

            }
    }
    return 0;
 }
