#include "ProtoSemuaFunction.h"

// Author Lopzx
void baca_ascii()
{
    FILE* ASCII = fopen("TULISANASCII.txt","r");    //Function fopen akan me return null jika gagal klo berhasil 
    if(ASCII == NULL){                              //akan return ptr ke char ke  [0]
        printf("File Tidak Ada");
    }else{
        char baris[255];                            //Print perbaris File, \n tidak diperlukan dalam print 
        while(fgets(baris,sizeof(baris),ASCII)){    //karena fgets sudah include \n
            printf(baris);
        }
    }
}
//End Lopzx Block Of Code