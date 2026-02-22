#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <math.h>

    // DISCLAIMER: Nem o doutor Victor Frankenstein olhou para sua criação e sentiu tanta repulsa e vergonha
    // quanto eu sinto por esse código! Eu escrevi essa monstruosidade sem olhar para traz se quer uma unica vez
    // e agora nem eu, o proprio criador, sei como essa merda funciona.
    // NÃO GASTE SEU TEMPO TENTANDO ENTENDER ESSA ABERRAÇÃO!!!!!!!!!

int main(){
    float vars[3] = {0};
    char alpha[3] = {'a', 'b', 'c'}, str1pt1[50] = "", str1pt2[50] = "", str2pt1[50] = "", str2pt2[50] = "";
    float delta = 0.0f, ans1 = 0.0f, ans2 = 0.0f;
    printf("Quadratic Equation Solver\n");
    for(int i = 0; i < 3; i++){
        printf("%c = ", alpha[i]);
        scanf("%f", &vars[i]);
    }
    delta = vars[1] * vars[1] - 4.0 * vars[0] * vars[2];
    printf("\n(%.0fX^2) + (%.0fX) + (%.0f) = 0\n\n", vars[0], vars[1], vars[2]);
    if(delta > 0){
        ans1 = (-vars[1] + sqrt(delta)) / (2 * vars[0]);
        ans2 = (-vars[1] - sqrt(delta)) / (2 * vars[0]);
    }else if(delta == 0){
        ans1 = -vars[1] / (2 * vars[0]); 
    }else{
        sprintf(&str1pt1[0], "%.3f", (-vars[1]) / (2 * vars[0]));         
        sprintf(&str1pt2[0], "%.3f", (sqrt(fabs(delta)) / (2 * vars[0])));  // <--- as quatro strings do diabo.
        sprintf(&str2pt1[0], "%.3f", (-vars[1]) / (2 * vars[0]));
        sprintf(&str2pt2[0], "%.3f", + (sqrt(fabs(delta)) / (2 * vars[0])));
    }   
    //system("cls");
    //printf("%s\n%s\n%s\n%s", str1pt1, str1pt2, str2pt1, str2pt2);
    (delta == 0) ? printf("X = %.3f", ans1) : 0;
    (delta > 0) ? printf("X1 = %.3f\nX2 = %.3f", ans1, ans2) : printf("X1 = %s + %si\nX2 = %s - %si", str1pt1, str1pt2, str2pt1, str2pt2);
}