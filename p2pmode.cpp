#include "ProtoSemuaFunction.h"

// Author: Vaness
void p2p(const char* nama, short mode)
{
    BOOLS programstatus = 1;
    int WSX = 0;
    int WSY = 0;
    char yn = 'n';
    while(programstatus){
        int* globalboard;
        printf("%s",nama);
        switch(mode)
        {
            case 1:
                puts("P vs P");
                break;
            case 2:
                puts("P vs AI (Random Number AI");
                break;
            case 3:
                puts("P vs AI (Lebih Advance sedikit)");
        }
        BOOLS InsideGameLoop = 1;
        while(InsideGameLoop){    //gameloop infinite sampai keluar dari permainan
            int* board = draw_board();
            globalboard = board;
            printf("\n\n");
            for(int i = 0; i < 2; i++){
                system("cls");
                draw_board();
                printf("GILIRAN : \n X = %d \n Y = %d \n",user.giliranX,user.giliranY);
                printf("\n\nAvaible Box : \n");
                for(int k = 1; k <= 9; k++){
                    if(board[k-1] != 'Y' && board[k-1] != 'X'){
                        printf("%d ",k);
                    }
                    if(k % 3 == 0){
                        puts("");
                    }
                }
                if(i == 0){
                    puts("Giliran X : ");
                    int pick;
                    do{
                        scanf("%d",&pick);
                    }while(board[pick-1] == 'Y' || board[pick-1] == 'X');
                    board[pick-1] = (int) 'X';
                    user.giliranX--;
                }else if( user.giliranY != 0 ){
                    puts("Giliran Y : ");
                    int pick;
                    do{
                        scanf("%d",&pick);
                    }while(board[pick-1] == 'Y' || board[pick-1] == 'X');
                    board[pick-1] = (int) 'Y';
                    user.giliranY--;
                }
                puts("CHECKING CONDITION...");
                BOOLS wl_cond = WINLOST_kondisi(board);
                if(wl_cond == (BOOLS) 1){
                    puts("PLAYER X MENANG!");
                    WSX++;
                    InsideGameLoop = 0;
                    break;
                }else if(wl_cond == (BOOLS) 2){
                    puts("PLAYER Y MENANG!");
                    WSY++;
                    InsideGameLoop = 0;
                    break;
                }else if(wl_cond == (BOOLS) 3){
                    puts("DRAW!");
                    InsideGameLoop = 0;
                    break;
                }
            }
        }
        draw_board();
        printf("Total menang X = %d\n", WSX);
        printf("Total menang Y = %d\n", WSY);
        puts("LAGI ?  y/n");
        getchar();
        scanf("%c", &yn);
        if(yn == 'n'){
            programstatus = 0;
            break;
        }else if(yn == 'y'){
            for(int i = 0; i < 9; i++){
            globalboard[i] = '1' + i;
        }
        user.giliranX = 5;
        user.giliranY = 4;
        }
    }
}
