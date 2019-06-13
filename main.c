#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int you,computer;
int menu()
{
    int ch;
    printf("\n1. Select Rock");
    printf("\n2. Select Paper");
    printf("\n3. Select Scissor");
    printf("\n4. Exit");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    return(ch);
}
void setup()
{
    label:
        computer=rand()%4;
        if(computer==0)
            goto label;
        you=menu();
}
void makelogic()
{
    switch(you)
    {
        case 1: if(computer==1)
                {
                    printf("\nGame Draw");
                    printf("\nyou=rock\ncomputer=rock");
                }
                else if(computer==2)
                {
                    printf("\nComputer Won");
                    printf("\nyou=rock\ncomputer=paper");
                }
                else
                {
                    printf("\nYou Won");
                    printf("\nyou=rock\ncomputer=scissors");
                }
                break;
        case 2: if(computer==1)
                {
                    printf("\nYou Won");
                    printf("\nyou=paper\ncomputer=rock");
                }
                else if(computer==2)
                {
                    printf("\nGame Draw");
                    printf("\nyou=paper\ncomputer=paper");
                }
                else
                {
                    printf("\nComputer Won");
                    printf("\nyou=paper\ncomputer=scissors");
                }
                break;
        case 3: if(computer==1)
                {
                    printf("\nComputer Won");
                    printf("\nyou=scissor\ncomputer=rock");
                }
                else if(computer==2)
                {
                    printf("\nYou Won");
                    printf("\nyou=scissor\ncomputer=paper");
                }
                else
                {
                    printf("\nGame Draw");
                    printf("\nyou=scissor\ncomputer=scissors");
                }
                break;
        case 4: exit(0);
        default: printf("\nInvalid user choice");
    }
}
int main()
{
    while(1)
    {
        system("cls");
        setup();
        makelogic();
        getch();
    }
    return 0;
}
