/* Porgrama 05
Calculo del factorial de los primeros N numeros naturales usando recursividad
*/

#include <stdio.h>
#include <conio.h>

unsigned int Factorial(unsigned int N);

int main()
{
    unsigned int N,F;

    printf("Escriba la cantidad de numeros naturales a sumar ");
    scanf("%u",&N);
    
    F=Factorial(N);

    printf("\nLa sumatoria de los primeros %i es: %i",N,F);

   return 0; 
}

unsigned int Factorial(unsigned int N)
{
    if(N==1) return 1;
    return N*Factorial(N-1);
}