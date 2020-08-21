#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
######################################
#NAME == pranaya raj neupane (ESPIDER)
#
######################################
*/
//tic tac toe game with two player
char x_o[] = {'*', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void border()
{
    printf("\n*******************************\n");
    printf("\tT I C    T A C    T O E\n");
    printf("*******************************\n\n");
}
void board();
int game();
void main()
{
    int player = 1, number;
    int a;
    char sign;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;//to choose player 1 and two
        printf("player %d turn: ", player);
        scanf("%d", &number);
        sign = (player == 1) ? 'X':'O';//to choose X and O
        if(number == 1 && x_o[1]=='1')//decision on choosing X O
            x_o[1] = sign;
        else if(number == 2 && x_o[2]=='2')//(x_o[2]=='2)its to prevent double choose of the number
            x_o[2] = sign;
        else if(number == 3 && x_o[3]=='3')
            x_o[3] = sign;
        else if(number == 4 && x_o[4]=='4')
            x_o[4] = sign;
        else if(number == 5 && x_o[5]=='5')
            x_o[5] = sign;
        else if(number == 6 && x_o[6]=='6')
            x_o[6] = sign;
        else if(number == 7 && x_o[7]=='7')
            x_o[7] = sign;
        else if(number == 8 && x_o[8]=='8')
            x_o[8] = sign;
        else if(number == 9 && x_o[9]=='9')
            x_o[9] = sign;
        else
        {
            printf("ERROR!!!\n");
            player--;//print the same player name if he/she choose non balied number
        }
        a = game();
        player++;//its chainge the player

    } while (a == -1);
    board();
    if(a==1)
    {
        printf("::!player %d won\n",player-1);//print which player won the game
    }
    else
    {
        printf("DRAW!!!\n");
    }
}

int game()//Decide if the game is still going or draw or won
{
    if (x_o[1] == x_o[2] && x_o[2] == x_o[3])
        return 1;//someone won the game 
    else if (x_o[4] == x_o[5] && x_o[5] == x_o[6])
        return 1;
    else if (x_o[7] == x_o[8] && x_o[8] == x_o[9])
        return 1;
    else if (x_o[1] == x_o[4] && x_o[4] == x_o[7])
        return 1;
    else if (x_o[2] == x_o[5]&& x_o[5] == x_o[8])
        return 1;
    else if (x_o[3] == x_o[6] && x_o[6] == x_o[9])
        return 1;
    else if (x_o[1] == x_o[5] && x_o[5] == x_o[9])
        return 1;
    else if (x_o[3] == x_o[5] && x_o[5] == x_o[7])
        return 1;
    else if (x_o[1] != '1' && x_o[2] != '2' && x_o[3] != '3' && x_o[4] != '4' && x_o[1] != '5' && x_o[2] != '6' && x_o[7] != '7' && x_o[8] != '8' && x_o[9] != '9')
        return 0;//game is draw
    else
        return -1;//continue
}

void board()
{
    system("clear");//clear teh screen //you can use cls in linux
    border();
    printf("Player 1 (X)\tPlayer 2 (O)\n\n");
    printf("\t %c | %c | %c \n",x_o[1],x_o[2],x_o[3]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n",x_o[4],x_o[5],x_o[6]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n\n",x_o[7],x_o[8],x_o[9]);
}