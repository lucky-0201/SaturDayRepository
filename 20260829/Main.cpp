#include<windows.h>
#include"Dxlib.h"
#include"Config.h"
#include"Player.h"
#include"Map.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
    //====================================
    // DxLib
    //====================================

    ChangeWindowMode(TRUE);

    SetGraphMode(Config::WINDOW_WIDTH,Config::WINDOW_HEIGHT,Config::COLOR_BIT);

    if (DxLib_Init() == -1)return -1;
    //====================================
    // オブジェクト
    //====================================
    Player player;
    Map map;

    player.Init();

    map.Init();
    //====================================
    // 時間
    //====================================

    int previousTime = GetNowCount();
    //====================================
    // ゲームループ
    //====================================

    while (ProcessMessage() == 0 && !CheckHitKey(KEY_INPUT_ESCAPE))
    {
        int currentTime = GetNowCount();

        float deltatime = (currentTime - previousTime)/1000.0f;
        previousTime = currentTime;
        //====================================
        // 更新
        //====================================

        player.Update(deltatime);

        //プレイヤー本体
        Colision PLAYERPLANEDESCRIPTOR 

        //====================================
        // 描画
        //====================================

        ClearDrawScreen();

        ScreenFlip();
    }

    //====================================
    // 終了
    //====================================

    DxLib_End();

    return 0;
}