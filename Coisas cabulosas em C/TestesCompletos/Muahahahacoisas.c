#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <time.h>

int main()
{
    // Versão, variavel de loop e time.

    char on = 'Y';

    printf("C version: %ld // C23\n", __STDC_VERSION__);

    // Loop

    while (on == 'y' || on == 'Y')
    {

        // Menu Principal
        char menuascii[250] = "#####  #####  #####  #####  #####  #####\n#      #   #    #    #      #   #  #    \n#      #   #    #    #####  #####  #####\n#      #   #    #        #  #   #      #\n#####  #####  #####  #####  #   #  #####\n";
        int opt = 0;
        for (int i = 0; menuascii[i] != '\0'; i++)
        {
            printf("%c", menuascii[i]);
            Sleep(1);
        }

        printf("\n0. Sair");
        printf("\n1. Repetidor de String\n");
        printf("2. Somatorio\n");
        printf("3. Fibonacci\n");
        printf("4. Calculadora de circulo\n");
        printf("5. Calculadora\n");
        printf("6. Calculadora de Raiz\n");
        printf("\nSelecione uma opcao: ");
        scanf(" %d", &opt);
        system("cls");

        // Switches

        switch (opt)
        {
        case 0:
            exit(0);
        case 1: // String Repeater
        {
            printf("  #--------------#     \n");
            printf("   \\            /     \n");
            printf("    \\.         /      \n");
            printf("     \\...  .. /       \n");
            printf("      \\..... /        \n");
            printf("String \\... /         \n");
            printf("       /  . \\ Repeater\n");
            printf("      / .    \\        \n");
            printf("     /    .   \\       \n");
            printf("    /...   ....\\      \n");
            printf("   /............\\     \n");
            printf("  #--------------#     \n");
            char str[50] = "";
            int num = 0;

            printf("\nDigite uma string: ");
            scanf(" %49[^\n]", str);
            printf("\nDigite um numero: ");
            scanf(" %d", &num);
            system("cls");

            // Cerebro

            for (int i = 1; i <= num; i++)
            {
                printf("%s %d\n", str, i);
            }
            break;
        }
        case 2: // Somatorio
        {
            printf("888888888888888888\n");
            printf("88               8\n");
            printf(" 88               \n");
            printf("  88              \n");
            printf("   88             \n");
            printf("    88            \n");
            printf("     88 Somatorio \n");
            printf("    88            \n");
            printf("   88             \n");
            printf("  88              \n");
            printf(" 88               \n");
            printf("88              8 \n");
            printf("888888888888888888\n");
            printf("\n");
            int x = 0;
            int sum = 0;

            printf("\nDigite um numero para o somatorio: ");
            scanf("%d", &x);

            for (int i = 0; i <= x; i++)
            {
                sum = sum + i;

                system("cls");
                printf("Somando %d\n", i);
            }

            system("cls");
            printf("Somatorio: %d\n", sum);
            break;
        }
        case 3: // Fibonacci
        {
            int times = 0;
            unsigned long long A = 0;
            unsigned long long B = 1;
            unsigned long long sum = 0;
            int num = 0;

            while (num == 0)
            {
                printf("#######################################################\n");
                printf("#                          ##################         #\n");
                printf("#                ##########                  ###      #\n");
                printf("#       #########     Fibonacci                 ##    #\n");
                printf("# ######                           ###        ##     #\n");
                printf("##                                    #######         #\n");
                printf("#######################################################\n");

                // system("cls");
                printf("\nFibonacci: ");
                scanf("%d", &times);
                times++;
                if (times < 96 && (times)-1 > 0)
                {
                    num = 1;
                    break;
                }
                else
                {
                    num = 0;
                    printf("Numero fora do intervalo: (1 <= x <= 94)\n");
                    Sleep(1000);
                    system("cls");
                }
            }

            for (int i = 1; i < times; i++)
            {
                system("cls");
                printf("%d Fib = %llu", i, A);
                sum = A + B;
                A = B;
                B = sum;
            }
            break;
        }
        case 4: // CircleCalc
        {

            const double PI = 3.1415926535897932384;
            float radius = 0.0f;
            float area = 0.0f;
            float areasup = 0.0f;
            float vol = 0.0f;

            printf("Raio (em cm): ");
            scanf("%f", &radius);

            area = pow(radius, 2) * PI;
            areasup = 4 * PI * pow(radius, 2);
            vol = 4.0 / 3.0 * PI * pow(radius, 3);

            printf("\nArea: %.2f cm quadrados", area);
            printf("\nArea Superficial da esfera: %.2f cm quadrados", areasup);
            printf("\nVolume: %.2f cm cubicos", vol);
            break;
        }
        case 5: // Calc
        {
            double num1 = 0;
            double num2 = 0;
            double ans = 0;
            int operation = 0;

            printf(">----------------------------------------<\n");
            printf("Calculadora Incrivelmente util e Complexa\n");
            printf(">----------------------------------------<\n\n");
            printf("Digite um numero: ");
            scanf("%lf", &num1);
            printf("\n1 -> +\n2 -> -\n3 -> *\n4 -> /\n5 -> ^\n6 -> sqrt\nOperacao: ");
            scanf("%d", &operation);

            if (operation == 6)
            {
                ans = sqrt(num1);
            }
            else
            {
                printf("Digite outro numero: ");
                scanf("%lf", &num2);

                switch (operation)
                {
                case 1:
                    ans = num1 + num2;
                    break;
                case 2:
                    ans = num1 - num2;
                    break;
                case 3:
                    ans = num1 * num2;
                    break;
                case 4:
                    ans = num1 / num2;
                    break;
                case 5:
                    ans = pow(num1, num2);
                }
            }
            printf("%.2lf", ans);
            break;

            break;
        }
        case 6: // Root
        {
            double num = 0.0f;
            printf("Escolha um Número: ");
            scanf(" %lf", &num);
            double guess = num / 2;
            int iteration = 0;
            double last = 0.0f;

            do
            {
                last = guess;
                guess = (guess + (num / guess)) / 2;
                iteration++;
                printf("%lf", guess);
                Sleep(1);
                system("cls");

            } while (guess != last);

            printf("Init var = %.2lf\n", num);
            printf("Root = %.10lf\n", guess);
            printf("i = %d", iteration);
            break;
        }
        default:
            printf("Coisa invalida");
        }

        printf("\n\nGostaria de realizar mais uma operacao? Y/N: ");
        scanf(" %c", &on);
        system("cls");
    }
}