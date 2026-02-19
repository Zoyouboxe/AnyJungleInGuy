#include <stdio.h>
#include <math.h>

typedef long long ll;


ll power_mod(ll base, ll exp, ll mod) {
    ll resultado = 1;
    for (ll i = 0; i < exp; i++) {
        resultado = (resultado * base) % mod;
    }
    return resultado;
}
double summation(int n, int j) {
    double sum = 0.0;
    for (int i = 0; i <= n; i++) {

        ll d = 8LL * i + j;

        ll num = power_mod(16, n - i, d);
        

        sum += (double)num / d;
        
        sum -= (int)sum;
    }
    return sum;
}


int main() {      
    int n;
    printf("Digite a posicao n: ");
    scanf("%d", &n);


    double s1 = summation(n, 1);
    double s4 = summation(n, 4);
    double s5 = summation(n, 5);
    double s6 = summation(n, 6);


    double x = (4.0 * s1) - (2.0 * s4) - s5 - s6;


    x = x - (int)x;
    if (x < 0) x += 1.0;

    int valor = (int)(x * 16.0);


    if (valor >= 10) {

        printf("Posicao %d:\n", n);
        printf("-> Em Hexadecimal: %X\n", valor);
        printf("-> Em Decimal:     %d (Ocupa apenas esta posicao)\n", valor);
    } else {

        printf("Posicao %d:\n", n);
        printf("-> Valor: %d\n", valor);
    }

    return 0;
}
