#include <stdio.h>
#include <windows.h>

typedef struct{
    float x;
    float y;
}point;

point bezier(point p0, point p1, point p2, point p3, float t){
    point p;

    float u = 1 - t;

    float b0 = u * u * u;
    float b1 = (u * u) * 3 * t;
    float b2 = t * t * 3 * u;
    float b3 = t * t * t;

    p.x = b0 * p0.x + b1 * p1.x + b2 * p2.x + b3 * p3.x;
    p.y = b0 * p0.y + b1 * p1.y + b2 * p2.y + b3 * p3.y;

    return p; 
};

int main() {
   
    point p0, p1, p2, p3;
    int n = 0;

    printf("Start Pos = ");
    scanf("%f %f", &p0.x, &p0.y);
    printf("End Pos = ");
    scanf("%f %f", &p3.x, &p3.y);

    printf("Control Point 1 = ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Control Point 2 = ");
    scanf("%f %f", &p2.x, &p2.y);

    printf("Precision = ");
    scanf("%d", &n);

    system("cls");
    printf("Desmos:\n");
    printf("(X, Y)\n(a, b)\n");

    printf("X = [");

    for(int i = 0; i < n; i++){
        float t = (float)i / (n - 1);
        point p = bezier(p0, p1, p2, p3, t);
        printf("%.2f", p.x);
        (i < n - 1) ? printf(",") : printf("]\n");
    }

    printf("Y = [");

    for(int i = 0; i < n; i++){
        float t = (float)i / (n - 1);
        point p = bezier(p0, p1, p2, p3, t);
        printf("%.2f", p.y);
        (i < n - 1) ? printf(",") : printf("]\n");
    }
    printf("a = [%.2f, %.2f]\n", p0.x, p3.x);
    printf("b = [%.2f, %.2f]", p0.y, p3.y);
}   