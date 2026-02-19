    #include <stdio.h>
    #include <math.h>

    int main()
    {
        const long double PI = 3.14159265358979323846;
        int acuracy; 
        printf("Acuracy: ");
        scanf(" %d", &acuracy);
        acuracy++;

        long double num = 3;
        long double evenorodd;
        long double fraction;
        long double total;

        for(int n = 1; n <= acuracy; n++)
        {
            // evenorodd = pow(-1, n + 1); // NADA eficiente
            evenorodd = ((n + 1) % 2 == 0) ? 1 : -1;
            fraction = 4 / ((2.0 * n) * (2.0 * n + 1) * ( 2.0 * n + 2));
            total = evenorodd * fraction;
            num += total;
        }

        printf("Calculado: %.20Lf\n", num);
        printf("Constante: %.20Lf\n", PI);
        printf("Diferenca: %.20Lf\n", num - PI);

        return 0;
    }