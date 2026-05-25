/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include "operaciones.h"
#include "Funciones.h"

int main()
{
    int op;
    
    do 
    {
        printf("\nSeleccine una opcion: \n");
        printf("1. Suma \n");
        printf("2. Resta \n  3. Multiplicacion \n"  );
        printf("4.Division \n 5. Numero Par\n 6. Numero Perfecto\n 7. Salir\n");
        scanf("%i", &op);
        
        switch(op)
        {
            case 1:
                printf ("\nLa suma es: %i" , suma(5 , 2));
                break;
                
            case 2:    
                printf ("\nLa resta es: %i" , resta(5,2));
                break;
                
            case 3:
                 printf ("\nLa division es: %i" , division(5 , 2));
                 break;
                 
            case 4:
                 printf ("\nLa multiplicacion es: %i" , multiplicacion(5 , 2));
                 break;
                 
            case 5:
                pares();
                break;
                
            case 6:
                numerosPerfectos();
                break;
                 
            case 7:
                 printf ("\nGracias por vistar la aplicacion");
                 break;
                 
            default:
            printf("NO EXISTE LA OPCION");
            break;
        }
        
    } while (op != 5);

    return 0;
}