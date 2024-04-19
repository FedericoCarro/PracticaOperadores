#include<stdio.h>
#define s scanf
#define p printf 
int main()
{
    int anio, aux1;
    p("Indique un anio: ");
    s ("%d",&anio);
    aux1=anio%4;
    if (aux1==0)
    {
      p ("el anio %d es bisiesto",anio);
    }
    else    
    p ("el anio %d no es bisiesto",anio);
    
    return 0;
}