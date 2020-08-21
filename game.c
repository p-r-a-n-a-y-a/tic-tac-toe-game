#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char square[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void board();
void game();
int dicision();
void banner()
{
    printf("***************************\n");
    printf("\tTIC TAC TOE\n");
    printf("***************************\n");
}
int main()
{
    system("clear");
    game();
    return 0;
}

void game()
{
    int player = 1, choice,ans;
    char mark;

    do
    {
        board();
        player = (player % 2) ? 1 : 2;
        printf("player %d enter the number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else
        {
            printf("ERROR\n");
            player--;
        }
        ans = dicision();
        player++;
    } while (ans == -1);
    board();
    if(ans == 1)
    {
        printf("=:>PLAYER %d WIN\n",player-1);
    }
    else{
        printf("GAME DRAW\n");
    }

}

void board()
{
    system("clear");
    banner();
    printf("\nPlayer 1(X)\tPlayer 2(O)\n\n");
    printf("\t %c | %c | %c \n", square[1], square[2], square[3]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %C \n", square[4], square[5], square[6]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n", square[7], square[8], square[9]);
    printf("\n");
}

int dicision()
{
    if(square[1]==square[2] && square[2]==square[3])
        return 1;
    else if(square[4]==square[5] && square[5]==square[6])
        return 1;
    else if(square[7]==square[8] && square[8]==square[9])
        return 1;
    else if(square[1]==square[5] && square[5]==square[9])
        return 1;
    else if(square[3]==square[5] && square[5]==square[9])
        return 1;
    else if(square[1]==square[4] && square[4]==square[7])
        return 1;
    else if(square[2]==square[5] && square[5]==square[8])
        return 1;
    else if(square[3]==square[6] && square[6]==square[9])
        return 1;
//*********************************************************
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
        return 0;
    else
        return -1;

}
