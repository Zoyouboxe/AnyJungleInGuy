#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main()
{   
    setlocale(LC_ALL, "Portuguese_Brazil");

    float WalletCash = 10000.00f;
    float Balance = 10000.00f;
    float WithdrawalValue = 0.0f;
    float DepositValue = 0.0;
    int opt = 0;
    char persistence = 'y';

    while(persistence == 'y' || persistence == 'Y')
    {
        int dowhile = 0;

        do{
        printf("Welcome to the bank!\n\n");
        printf("1. Check balance\n");
        printf("2. Whitdrawal\n");
        printf("3. Deposit\n\n");
        printf("Chose an option:\n");
        scanf("%d", &opt);
        if(opt < 0 || opt > 3){
            dowhile = 0;
            printf("Invalid Operation!");
            Sleep(1500);
            system("cls");
        }else{
            dowhile = 1;
        }
        }while(dowhile == 0);
        switch(opt)
        {
            case 1:
                system("cls");
                printf("Balance: %.2f$\n", Balance);
                printf("Wallet: %.2f$", WalletCash);
                Sleep(3000);
                system("cls");
                break;
            case 2:{
                char persistence = 'y';
                while(persistence == 'y')
                {
                system("cls");
                printf("Type in the value of the Withdrawal: ");
                scanf(" %f", &WithdrawalValue);
                    if(WithdrawalValue > Balance){
                        printf("Insuficient Funds!");
                        Sleep(1500);
                    }else if(WithdrawalValue <= 0){
                        printf("Invalid Value!");
                        Sleep(1500);
                    }else{
                        Balance = Balance - WithdrawalValue;
                        WalletCash = WalletCash + WithdrawalValue;
                        printf("Successfull operation!\n");
                        persistence = 'n';
                        Sleep(1500);
                        system("cls");
                    }         
                }
                break;
                }
            case 3: {
                char persistence = 'y';
                while(persistence == 'y')
                {
                system("cls");
                printf("Type in the value of the deposit: ");
                scanf(" %f", &DepositValue);
                    if(DepositValue > WalletCash){
                        printf("Insuficient Funds!");
                        Sleep(1500);
                    }else if(DepositValue <= 0){
                        printf("Invalid Value!");
                        Sleep(1500);
                    }else{
                        Balance = Balance + DepositValue;
                        WalletCash = WalletCash - DepositValue;
                        printf("Successfull operation!\n");
                        persistence = 'n';
                        Sleep(1500);
                        system("cls");
                    }         
                }
                break;
                }
            default:
                printf("\nOp��o invalida!\n");
                Sleep(1500);
                system("cls");
                break;
        }

    //persistence = 'n';
    printf("Do you wish to make another operation? (Y/N) \n");
    scanf(" %c", &persistence);
    system("cls");
    }

    //que merda era pra ser isso?
}