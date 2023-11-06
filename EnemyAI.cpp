#include "ProtoSemuaFunction.h"

// Author: Lopzx
void bot_main(int*& board){
    for(int i = 0; i < 3; i++){
        if(board[i*3+1] == 'Y'){
            if(board[i*3] == 'Y' && board[i*3+2] != 'Y' && board[i*3+2] != 'X' ){
                board[i*3+2] = 'Y';
                user.giliranY--;
                return;
            }else if(board[i*3+2] == 'Y' && board[i*3] != 'Y' && board[i*3] != 'X'){
                board[i*3] = 'Y';
                user.giliranY--;
                return;
            }
        }
        if(board[i+3] == 'Y'){
            if(board[i] == 'Y' && board[i+6] != 'Y' && board[i+6] != 'X'){
                board[i+6] = 'Y';
                user.giliranY--;
                return;
            }else if(board[i+6] == 'Y' && board[i] != 'Y' && board[i] != 'X'){
                board[i] = 'Y';
                user.giliranY--;
                return;
            }
        }
        if(board[i*3+1] != 'Y' && board[i*3+1] != 'X'){
            if(board[i*3] == 'Y' && board[i*3+2] == 'Y'){
                board[i*3+1] = 'Y';
                user.giliranY--;
                return;
            }
        }
        if(board[i+3] != 'Y' && board[i+3] != 'X'){
            if(board[i] == 'Y' && board[i+6] == 'Y'){
                board[i+3] = 'Y';
                user.giliranY--;
                return;
            }
        }
    }

    if(board[4] == 'Y'){
        for(int i = 0,temp = 4; i < 4; i++,temp--){
            (2*temp == 4)? temp--: temp;
            (i*2 == 4)? i++:i;
            if(board[i*2] == 'Y' && board[2*temp] != 'Y' && board[2*temp] != 'X'){
                board[2*temp] = 'Y';
                user.giliranY--;
                return;
            }
        }
    }
    //Ngecek secara vertikal dan horizontal
    //Mengecek Apakah Player Akan Menang
    //Jika sudah 2 baris X ,mencegah player menang
    for(int i = 0; i < 3; i++){
        if(board[i*3+1] == 'X'){
            if(board[i*3] == 'X' && board[i*3+2] != 'Y'){
                board[i*3+2] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }else if(board[i*3+2] == 'X' && board[i*3] != 'Y'){
                board[i*3] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
        if(board[i+3] == 'X'){
            if(board[i] == 'X' && board[i+6] != 'Y'){
                board[i+6] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }else if(board[i+6] == 'X' && board[i] != 'Y'){
                board[i] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
        if(board[i*3+1] != 'X' && board[i*3+1] != 'Y'){
            if(board[i*3] == 'X' && board[i*3+2] == 'X'){
                board[i*3+1] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
        if(board[i+3] != 'X' && board[i+3] != 'Y'){
            if(board[i] == 'X' && board[i+6] == 'X'){
                board[i+3] = 'Y';
                puts("Canceling Your Win");
                user.giliranY--;
                return;
            }
        }
    }

    if(board[4] == 'X'){
        for(int i = 0,temp = 4; i < 4; i++,temp--){
            (2*temp == 4)? temp--: temp;
            (i*2 == 4)? i++:i;
            if(board[i*2] == 'X' && board[2*temp] != 'Y'){
                board[2*temp] = 'Y';
                user.giliranY--;
                return;
            }
        }
    }


    // ALGO LAMA
    //Memilih Jalur

    // for(int i = 0; i < 3; i++){
    //     if(board[i*3+1] == 'Y' || board[i*3+1] != 'X'){
    //         if(board[i*3] != 'Y' && board[i*3] != 'X'){
    //             board[i*3] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }else if(board[i*3+2] != 'Y' && board[i*3+2] != 'X'){
    //             board[i*3+2] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }
    //     }
    //     if(board[i+3] == 'Y' || board[i+3] != 'X'){
    //         if(board[i] != 'Y' && board[i] != 'X'){
    //             board[i] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }else if(board[i+6] != 'Y' && board[i+6] != 'X'){
    //             board[i+6] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }
    //     }
    //     if(board[i*3+1] != 'Y' && board[i*3+1] != 'Y'){
    //         if(board[i*3] == 'Y' && board[i*3+2] == 'Y' && board[i*3+2] == 'X'){
    //             board[i*3+1] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }
    //     }
    //     if(board[i+3] != 'Y' && board[i+3] != 'Y'){
    //         if(board[i] == 'Y' && board[i+6] == 'Y' && board[i+6] == 'X'){
    //             board[i+3] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }
    //     }
    // }

    // if(board[4] == 'Y' || board[4] != 'X'){
    //     for(int i = 0,temp = 4; i < 4; i++,temp--){
    //         (2*temp == 4)? temp--: temp;
    //         (i*2 == 4)? i++:i;
    //         if(board[i*2] == 'Y' && board[2*temp] != 'Y' && board[2*temp] != 'X'){
    //             board[2*temp] = 'Y';
    //             user.giliranY--;
    //             return;
    //         }
    //     }
    // }


    static int barisbot[3] = {0,0,0};
    //Jika 1 Maka cari baris baru
    //Jika 0 Beri tanda Y
    BOOLS flag = 1;
    puts("TressHOLD 1");
    for(int i = 0; i < 3;i++){
        int holder = barisbot[i];
        int count = 0;
        if(board[holder] == 'X'){
            count++;
            flag = 1;
        }
        if (count == 0)
        {
            flag = 0;
        }
        
    }
    puts("TressHOLD 2");
    if(flag){
        //Find new Path
        for(int i = 0; i < 3; i++){
            if(board[i*3] != 'X' && board[i*3+1] != 'X' && board[i*3+2] != 'X'){
                barisbot[0] = i*3;
                barisbot[1] = i*3+1;
                barisbot[2] = i*3+2;
                break;
            }else if(board[i] != 'X' && board[i+3] != 'X' && board[i+6] != 'X'){
                barisbot[0] = i;
                barisbot[1] = i+3;
                barisbot[2] = i+6;
                break;
            }else if(board[0] != 'X' && board[4] != 'X' && board[8] != 'X'){
                barisbot[0] = 0;
                barisbot[1] = 4;
                barisbot[2] = 8;
                break;
            }else if(board[2] != 'X' && board[4] != 'X' && board[6] != 'X'){
                barisbot[0] = 2;
                barisbot[1] = 4;
                barisbot[2] = 6;
                break;
            }
        }
    }
    puts("TressHOLD 3");
    for(int i = 0; i < 3; i++){
        int holder = barisbot[i];
        if(board[holder] != 'X' && board[holder] != 'Y'){
            board[holder] = 'Y';
            user.giliranY--;
            return;
        }
    }
    puts("TressHOLD 4");
}

