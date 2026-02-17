#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    double num = 0.0f;
    printf("Choose a number: ");
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
    Sleep(125);
    system("cls");

    } while(fabs(guess != last));


    printf("Number = %.1lf\n", num);
    printf("Root = %.10lf\n", guess);
    printf("Used %d iterations", iteration);    
}