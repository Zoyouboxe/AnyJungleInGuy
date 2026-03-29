#include <stdio.h>
#include <windows.h>

typedef struct {
    float x;
    float y;
} Ponto;

Ponto bezier(Ponto P0, Ponto P1, Ponto P2, Ponto P3, float t) {
    Ponto p;

    float u = 1 - t;

    float b0 = u * u * u;
    float b1 = 3 * u * u * t;
    float b2 = 3 * u * t * t;
    float b3 = t * t * t;

    p.x = b0 * P0.x + b1 * P1.x + b2 * P2.x + b3 * P3.x;
    p.y = b0 * P0.y + b1 * P1.y + b2 * P2.y + b3 * P3.y;

    return p;
}

int main() {
    Ponto P0, P1, P2, P3;

    

    printf("Digite P0 (x y): ");
    scanf("%f %f", &P0.x, &P0.y);

    printf("Digite P1 (x y): ");
    scanf("%f %f", &P1.x, &P1.y);

    printf("Digite P2 (x y): ");
    scanf("%f %f", &P2.x, &P2.y);

    printf("Digite P3 (x y): ");
    scanf("%f %f", &P3.x, &P3.y);

    int n = 10;

    system("cls");

    printf("\nCole isso no Desmos:\n");

    // Lista X
    printf("X = [");
    for (int i = 0; i < n; i++) {
        float t = (float)i / (n - 1);
        Ponto p = bezier(P0, P1, P2, P3, t);

        printf("%.4f", p.x);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    // Lista Y
    printf("Y = [");
    for (int i = 0; i < n; i++) {
        float t = (float)i / (n - 1);
        Ponto p = bezier(P0, P1, P2, P3, t);

        printf("%.4f", p.y);
        if (i < n - 1) printf(",");
    }
    printf("]\n");

    // Instrução final
    printf("\nNo Desmos digita:\n");
    printf("(X, Y)\n");

    int t = 0;
    printf("%f %f", bezier(P0, P1, P2, P3, t));

    return 0;
}