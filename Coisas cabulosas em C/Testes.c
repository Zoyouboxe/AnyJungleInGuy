#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    int vars[3] = {0};
    char alpha[3] = {'a', 'b', 'c'};
    float delta = 0.0f;
    
    for(int i = 0; i < 3; i++){
        printf("%c = ", alpha[i]);
        scanf("%d", &vars[i]);
    }

    delta = vars[1] * vars[1] - 4.0 * vars[0] * vars[2];
    
    printf("%.2f", delta);

    








}   