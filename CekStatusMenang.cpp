#include "ProtoSemuaFunction.h"

// Author: Lopzx
BOOLS WINLOST_kondisi(const int* board){
    //Kondisi = 1 == X menang
    //Kondisi = 2 == Y Menang
    BOOLS kondisi = 0;
    for(int i = 0; i < 3; i++){
        if(board[i*3] == 'X' && board[i*3+1] == 'X' && board[i*3+2] == 'X' 
        || board[i] == 'X' && board[i+3] == 'X' && board[i+6] == 'X'){
            kondisi = 1;
            return kondisi;
        }
    }
    if(board[0] == 'X' && board[4] == 'X' && board[8] == 'X'){
        kondisi = 1;
        return kondisi;
    }else if(board[2] == 'X' && board[4] == 'X' && board[6] == 'X'){
        kondisi = 1;
        return kondisi;
    }
    for(int i = 0; i < 3; i++){
        if(board[i*3] == 'Y' && board[i*3+1] == 'Y' && board[i*3+2] == 'Y' 
        || board[i] == 'Y' && board[i+3] == 'Y' && board[i+6] == 'Y'){
            kondisi = 2;
            return kondisi;
        }
    }
    if(board[0] == 'Y' && board[4] == 'Y' && board[8] == 'Y'){
        kondisi = 2;
        return kondisi;
    }else if(board[2] == 'Y' && board[4] == 'Y' && board[6] == 'Y'){
        kondisi = 2;
        return kondisi;
    }

    if(user.giliranX == 0 && user.giliranY == 0){
        kondisi = 3;
        return kondisi;
    }
    return kondisi;
}