#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    static int tries, location, ran, ver1, ver2;
    int nums[11] = {0};
    int tamanho = sizeof(nums) / sizeof(nums[0]);
    do{
    system("cls");
    printf("0: RS\n1: DF, GO, MS, MT, TO\n2: AC, AM, AP, PA, RO, RR\n3: CE, MA, PI\n4: AL, PB, PE, RN\n5: BA, SE\n6: MG\n7: ES, RJ\n8: SP\n9: PR, SC\nLocation: ");
    scanf("%d", &location);
    }while(location < 0 || location > 9);

    system("cls");

    do
    {
        int soma = 0;
        for (int i = 0; i < 9; i++)
        { // gera os 9 digitos
            nums[i] = rand() % 10;
            // printf("%d", nums[i]);
            soma += nums[i] * (10 - i); // calcula a soma
        }

        if (soma % 11 == 0 || soma % 11 == 1)
        {
            // ver1 = 0;
            nums[9] = 0;
        }
        else
        {
            // ver1 = (11 - (soma % 11));
            nums[9] = (11 - (soma % 11));
        }

        // printf("-%d", ver1);
        soma = 0;

        for (int i = 0; i < 10; i++)
        {
            soma += nums[i] * (11 - i);
        }

        if (soma % 11 == 0 || soma % 11 == 1)
        {
            // ver2 = 0;
            nums[10] = 0;
        }
        else
        {
            // ver2 = (11 - (soma % 11));
            nums[10] = (11 - (soma % 11));
        }
        tries++;
    } while (nums[8] != location);
        system("cls");
        // printf("%d\n", ver2);

        for (int i = 0; i < tamanho; i++)
    {   
        if(i == 3 || i == 6){
            printf(".");
        }if(i == 9){
            printf("-");
        }
        printf("%d", nums[i]);
        Sleep(50);
    }
   printf("\n%d Iteration.", tries);
}