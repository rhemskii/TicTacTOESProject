#include "ProtoSemuaFunction.h"


//Author: Lopzx
int* board_init(){  
    puts("DRAWING...");                        
    int* d_array = (int*) malloc(9*sizeof(int));  // meng alokasikan 36 byte of memory di heap 
    for(int i = 0; i < 9; i++){                 //malloc me return pointer ke 36 memory dan casting ke int* supaya bisa
        d_array[i] = (int)'1' + i;                         //di simpan alamatnya ke int *
    }
    return d_array;                             //me return pointer
}                                               

// Author: Lopzx
int* draw_board(){
    static int* d_array = board_init();         //Local Static Pemanggilan fungsi ini tidak akan menjalankan board init lagi
    for(int i = 0; i < 3;i++){
        printf("+-----+-----+-----+\n");
        printf("|     |     |     |\n");
        printf("|  %c  |  %c  |  %c  |\n",d_array[i*3],d_array[i*3+1],d_array[i*3+2]);
        printf("|     |     |     |\n");
        printf("+-----+-----+-----+\n");
    }
    return d_array;
}