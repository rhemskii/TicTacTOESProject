#include "ProtoSemuaFunction.h"

// Harap baca file   BacaSebelumMulai.txt  sebelum menulis code

void start();

int main(){
start();
}

void start(){
// Author: Lopzx
    system("cls");     //Clear Console Bekas Compile dan Linking
    baca_ascii();      // Definisi Function ada di FileReader.cpp Singkatnya untuk load ascii art
    puts("");
    puts("");
    char nama[101];
    short mode = 0;
    puts("Masukkan Nama  [Max : 101 Char (Include Spasi)] : ");
    scanf("%[^\n]",nama);
    getchar();
    BOOLS STATUS = BENAR;
    while(STATUS)
    {
        puts("Pilih MODE : ");
        puts("[1] Player VS Players (Split Screen)");
        puts("[2] Player VS AI(Lebih Bagus *Sedikit* ) (Split Screen)");
        scanf("%hd", &mode);
        if(mode == HUMAN || mode == RANDOMNUMBER || mode == AI){
            STATUS = SALAH;
        }else{
            printf("\n\n\nError! : Masukkan angka 1-3\n");
            while(getchar() != '\n');       //Jaga-Jaga Jika Player Input String. Mencegah Infinite LOOP
        }                                
    }
    // End Lopzx Block of Code
    baca_ascii();
    printf("\n\n");
    
    // Author: Vaness
    switch(mode)
    {
        case 1:
            system("cls");
            p2p(nama,mode);
            break;
        case 2:
            puts("P vs AI (Lebih Advance sedikit)");
            PlayerVSAI(nama,mode);
            break;
    }
        
    
    puts("EXIT PROGRAM!");
    system("pause"); // Untuk Sementara Pause Auto Closing .exe
	}
