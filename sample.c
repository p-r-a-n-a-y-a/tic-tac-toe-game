#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
######################################
#NAME == pranaya raj neupane (ESPIDER)
#
######################################
*/
//its the backup of the computer_game.c 
//TIC TAC TOE Game with computer  (FIRST game):D
char x_o[] = {'*', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void border()//Title of the game 
{
    printf("\n*******************************\n");
    printf("\tT I C    T A C    T O E\n");
    printf("*******************************\n\n");
}
//Function
void board();//Tic tac toe board
int game();
//--------Main----------
void main()
{
    int number;
    int a;
    char sign;
    do
    {
        board();//callling board
        printf("YOUR turn: ");
        scanf("%d", &number);
        sign = 'X';

        if (number == 1 && x_o[1] == '1')
        {
            x_o[1] = sign;
            x_o[5] = 'O';
        }

        else if (number == 2 && x_o[2] == '2')
        {
            x_o[2] = sign;
            x_o[3] = 'O';
        }
        else if (number == 3 && x_o[3] == '3')
        {
            x_o[3] = sign;
            x_o[2] = 'O';
        }
        else if (number == 4 && x_o[4] == '4')
        {
            x_o[4] = sign;
            x_o[7] = 'O';
        }
        else if (number == 5 && x_o[5] == '5')
        {
            x_o[5] = sign;
            x_o[1] = 'O';
        }
        else if (number == 6 && x_o[6] == '6')//FIXED
        {
            x_o[6] = sign;
            if(x_o[4]=='X')
            {
                x_o[5] = 'O';
                break;
            }
            for(int i=1;i<=9;i++)
            {
                if(x_o[i]!='X' && x_o[i]!='O')
                {
                    x_o[i]='O';
                    break;
                }
            }
        }
        else if (number == 7 && x_o[7] == '7')
        {
            x_o[7] = sign;
            x_o[4] = 'O';
        }
        else if (number == 8 && x_o[8] == '8')
        {
            x_o[8] = sign;
            x_o[9] = 'O';
        }
        else if (number == 9 && x_o[9] == '9')
        {
            x_o[9] = sign;
            x_o[8] = 'O';
        }
        else
        {
            printf("ERROR!!!\n");
        }
        a = game();

    } while (a == -1);
    board();//-----
    if (a == 1)
    {
        printf("==>YOU won\n");
    }
    else if(a == 2)
    {
        printf("==>You lose\n");
    }
    else
    {
        printf("DRAW!!!\n");
    }
}

/*function to declare the result of the game
    return 1 = Player win the game;
    return 2 = Computer win the game;
    return 0 = Draw game 
    return -1 = continue*/
int game()
{
    //****************Return 1*********************************
    if (x_o[1] == 'X' && x_o[2] == 'X' && x_o[3]=='X')
        return 1;
    else if (x_o[4] == 'X' && x_o[5] == 'X' && x_o[6]=='X')
        return 1;
    else if (x_o[7] == 'X' && x_o[8] == 'X' && x_o[9]=='X')
        return 1;
    else if (x_o[1] == 'X' && x_o[4] == 'X' && x_o[7]=='X')
        return 1;
    else if (x_o[2] == 'X' && x_o[5] == 'X' && x_o[8]=='X')
        return 1;
    else if (x_o[3] == 'X' && x_o[6] == 'X' && x_o[9]=='X')
        return 1;
    else if (x_o[1] == 'X' && x_o[5] == 'X' && x_o[9] =='X')
        return 1;
    else if (x_o[3] == 'X'&& x_o[5] == 'X' && x_o[7] =='X')
        return 1;
    //**************************return 2*************************
    else if (x_o[1] == 'O' && x_o[2] == 'O' && x_o[3]=='O')
        return 2;
    else if (x_o[4] == 'O' && x_o[5] == 'O' && x_o[6]=='O')
        return 2;
    else if (x_o[7] == 'O' && x_o[8] == 'O' && x_o[9]=='O')
        return 2;
    else if (x_o[1] == 'O' && x_o[4] == 'O' && x_o[7]=='O')
        return 2;
    else if (x_o[2] == 'O' && x_o[5] == 'O' && x_o[8]=='O')
        return 2;
    else if (x_o[3] == 'O' && x_o[6] == 'O' && x_o[9]=='O')
        return 2;
    else if (x_o[1] == 'O'&& x_o[5] == 'O' && x_o[9] =='O')
        return 2;
    else if (x_o[3] == 'O'&& x_o[5] == 'O' && x_o[7] =='O')
        return 2;
    //****************return 0 **********************************
    else if (x_o[1] != '1' && x_o[2] != '2' && x_o[3] != '3' && x_o[4] != '4' && x_o[1] != '5' && x_o[2] != '6' && x_o[7] != '7' && x_o[8] != '8' && x_o[9] != '9')
        return 0;
    //*******************return 1**********************************
    else
        return -1;
}

void board()
{
    //game board/////////////////////////////////////////////////
    system("clear");
    border();
    printf("Player 1 (X)\tComputer (O)\n\n");
    printf("\t %c | %c | %c \n", x_o[1], x_o[2], x_o[3]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n", x_o[4], x_o[5], x_o[6]);
    printf("\t---|---|---\n");
    printf("\t %c | %c | %c \n\n", x_o[7], x_o[8], x_o[9]);
}