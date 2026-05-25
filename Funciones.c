#include <stdio.h>

int par (int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }else
    return 0;
}

void pares ()
{
    int num;
    printf("\nIngrese un numero entero: ");
    scanf("%i", & num);
    if (par(num))
    {
        printf("El numero es par\n");
    }else
    {
        printf("El numero es impar\n");
    }
}

#include <stdio.h>


int perfecto(int num)
{
    int suma = 0;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            suma += i;
        }
    }

    if(suma == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void numerosPerfectos()
{
    int num;

    printf("\nIngrese un numero entero: ");
    scanf("%i", &num);

    if(perfecto(num))
    {
        printf("El numero es perfecto \n");
    }
    else
    {
        printf("El numero no es perfecto \n");
    }
}