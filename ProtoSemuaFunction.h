#ifndef INCLUDED
#define INCLUDED
#pragma once

#define BENAR 1
#define SALAH 0
#define BOOLS short

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



enum WIN_STATUS
{
    LOSE = 0,WIN = 1
};

enum MODE
{
    HUMAN = 1, RANDOMNUMBER , AI
};

enum GAME_LOOP
{
    QUIT = 0, PLAYING
};

struct
{
    short giliranX = 5;
    short giliranY = 4;
}user;



// File Read
void baca_ascii();

// Board Render
int* draw_board();

// Mode p2p
void p2p(const char* nama, short mode);

// Cek Menang Kalah
BOOLS WINLOST_kondisi(const int* board);

//PlayerVSAI.cpp
void PlayerVSAI(const char* nama,BOOLS mode);

//EnemyAI.cpp
void bot_main(int*& board);

#include "CekStatusMenang.cpp"
#include "FileReader.cpp"
#include "RenderBoard.cpp"

#include "p2pmode.cpp"
#include "PlayerVSAI.cpp"
#include "EnemyAI.cpp"

#endif