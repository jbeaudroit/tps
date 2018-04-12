#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int flag1O=0;
    int flag2O=0;
    float numeroX;
    float numeroY;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    long long factorializacion;
    float enteroFactorial;
    while(seguir=='s')
    {
        if(flag1O==0)
        {
           printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
          printf("1- Ingresar 1er operando (A=%.2f)\n", numeroX);
        }
        if(flag2O==0)
        {
           printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
           printf("2- Ingresar 2do operando (B=%.2f)\n", numeroY);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

printf("ingrese el numero de opción que desea realizar \n");
 scanf("%d",&opcion);
while (opcion<1 || opcion>9)
{
    printf("las opciones posibles van del 1 al 9, reingrese la opción que desea realizar: \n");
        scanf("%d",&opcion);
}

fflush(stdin);
        switch(opcion)
        {
            case 1:
                printf("ingrese el primer operando: \n");
               scanf("%f", &numeroX);
               flag1O=1;
             fflush(stdin);
                break;
            case 2:
                printf("ingrese el segundo operando: \n");
                scanf("%f", &numeroY);
                flag2O=1;

                fflush(stdin);
                break;
            case 3:
                if(flag1O==0 || flag2O==0)
                {
                    printf("debe ingresar ambos ooperandos para realizar la operacion \n");
                }
                else
                {
                suma=sumar(numeroX, numeroY);
                printf("La suma de ambos numeros da como resultado: %.2f\n", suma);
                }
                break;
            case 4:
                if(flag1O==0 || flag2O==0)
                {
                    printf("debe ingresar ambos ooperandos para realizar la operacion \n");
                }
                else
                {
                resta=restar(numeroX, numeroY);
                printf("La resta de ambos numeros da como resultado: %.2f\n", resta);
                }
                break;
            case 5:
                if(flag1O==0 || flag2O==0)
                {
                    printf("debe ingresar ambos ooperandos para realizar la operacion \n");
                }
                else
                {
                if (numeroY!=0)
                {
                division=dividir(numeroX, numeroY);
                printf("La division de ambos numeros da como resultado: %.3f\n", division);
                }
                else
                {
                printf("La operacion de division no puede realizarse si se divide por 0 \n");
                }
                }
                break;
            case 6:
                if(flag1O==0 || flag2O==0)
                {
                printf("debe ingresar ambos ooperandos para realizar la operacion \n");
                }
                else
                {
                multiplicacion=multiplicar(numeroX, numeroY);
                printf("La multiplicacion de ambos numeros da como resultado: %.3f\n", multiplicacion);
                }
                break;
            case 7:
                if(flag1O==0)
                {
                printf("debe ingresar el primer operando para calcular su factorial \n");
                }
                enteroFactorial= numeroX / (int)numeroX;
                if (enteroFactorial!=0)
                {
                printf("no puede calcularse el factorial de un numero con decimales \n");
                }
                else if (numeroX==0)
                {
                factorializacion=1;
                printf("el factorial es: %d \n", factorializacion);
                }
                else
                {
                factorializacion=factorial(numeroX);
                printf("el factorial es: %d \n", factorializacion);
                }
                break;
            case 8:
                if((flag1O==0 && flag2O==0)||(flag1O==0 && flag2O==1))
                {
                    printf("debe ingresar ambos ooperandos para realizar las operaciones \n");
                }
                else if (flag1O==1 && flag2O==0)
                {
                enteroFactorial= numeroX / (int)numeroX;
                if (enteroFactorial!=0)
                {
                printf("no puede calcularse el factorial de un numero con decimales, para obtener el resto de las operaciones debe ingresar el segundo operando \n");
                }
                else if (numeroX==0)
                {
                factorializacion=1;
                printf("el factorial es: %d, para obtener el resto de las operaciones debe ingresar el segundo operando \n", factorializacion);
                }
                else
                {
                factorializacion=factorial(numeroX);
                printf("el factorial es: %d, para obtener el resto de las operaciones debe ingresar el segundo operandoel factorial es: %lld\n", factorializacion);
                }
                }
                else
                {
                    suma=sumar(numeroX, numeroY);
                printf("La suma de ambos numeros da como resultado: %f\n", suma);
                resta=restar(numeroX, numeroY);
                printf("La resta de ambos numeros da como resultado: %f\n", resta);
                if (numeroY!=0)
                {
                division=dividir(numeroX, numeroY);
                printf("La division de ambos numeros da como resultado: %f\n", division);
                }
                else
                {
                printf("La operacion de division no puede realizarse si se divide por 0 \n");
                }
                division=dividir(numeroX, numeroY);
                printf("La multiplicacion de ambos numeros da como resultado: %f\n", multiplicacion);

                enteroFactorial= numeroX / (int)numeroX;
                if (enteroFactorial!=0)
                {
                printf("no puede calcularse el factorial de un numero con decimales \n");
                }
                else if (numeroX==0)
                {
                factorializacion=1;
                printf("el factorial es: %d\n", factorializacion);
                }
                else
                {
                factorializacion=factorial(numeroX);
                printf("el factorial es: %d\n", factorializacion);
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
}
}

    return 0;

}
