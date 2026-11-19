#include <stdio.h>
#include <math.h>

int main()
{

    double incremento;
    double inicio;
    double fin;
   

   

    scanf_s("%lf %lf %lf", &inicio, &fin, &incremento);

    

    int num_terminos;

    if (inicio == fin)
    {
        num_terminos = 1;
    }

     if (incremento <= 0.0)
    {
        return 1;
    }

    if
    {
        num_terminos = (int)(((fin - inicio) / incremento) + 1e-9) + 1;
    }

    for (int i = 0; i < num_terminos; i++)
    {
        double x = inicio + (i * incremento);
        double suma = 1.0;
        double termino = 1.0;

        for (int n = 1; n < num_terminos; n++)
        {
            termino = termino * x / n;
            suma += termino;
        }

      

        printf("%f %f %f\n", x, suma, exp(x));
    }

    return 0;
}