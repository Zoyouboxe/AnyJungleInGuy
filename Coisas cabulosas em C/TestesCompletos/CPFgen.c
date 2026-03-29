#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int iteration = 0, location = 0;
    int nums[11] = {0};
    int size = sizeof(nums) / sizeof(nums[0]);

    do{
        system("cls");
        printf("0: RS\n1: DF, GO, MS, MT, TO\n2: AC, AM, AP, PA, RO, RR\n3: CE, MA, PI\n4: AL, PB, PE, RN\n5: BA, SE\n6: MG\n7: ES, RJ\n8: SP\n9: PR, SC\nLocation: ");
        scanf("%d", &location);
    } while (location < 0 || location > 9);

    system("cls");

        do{
        int sum = 0;

        for (int i = 0; i < 9; i++){
            nums[i] = rand() % 10;
            sum += nums[i] * (10 - i);
        }        

        if (sum % 11 == 0 || sum % 11 == 1){
            nums[9] = 0;
        }else{
            nums[9] = (11 - (sum % 11));
        }

        sum = 0;

        for (int i = 0; i < 10; i++){
            sum += nums[i] * (11 - i);
        }

        if (sum % 11 == 0 || sum % 11 == 1){
            nums[10] = 0;
        }else{
            nums[10] = (11 - (sum % 11));
        }

        iteration++;
        }while (nums[8] != location);

    system("cls");

    for (int i = 0; i < size; i++){
        if (i == 3 || i == 6)
        {
            printf(".");
            Sleep(50);
        }
        if (i == 9)
        {
            printf("-");
            Sleep(50);
        }   
        printf("%d", nums[i]);
        Sleep(50);
    }

    (iteration >= 2) ? printf("\n%d Iterations.", iteration) : printf("\n%d Iteration", iteration);
}