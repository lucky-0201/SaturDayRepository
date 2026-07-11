#include "Game.h"
#include"Config.h"
#include"Dxlib.h"

void Game::Init()
{
    //===========================================
    //分割画像のよみこみ
    //===========================================
    LoadDivGraph("image/AnimationPlayer1.png",
        Config::PLAYER_TOTAL_FREAMES,
        Config::PLAYER_COL,
        Config::PLAYER_ROW,
        Config::PLAYER_WIDHT,
        Config::PLAYER_HEIGT,
        images);
    //===========================================
    //アニメーションに分割画像を設定
    //===========================================
    animations.SetImages(images);

    currentAnime = AnimationType::Idle;
    PlayerAnimation(currentAnime);
    oldSpace = false;
}

void Game::Update()
{
    //===========================================
    //フレームマネージャー更新
    //===========================================
    frameManager.Update();
    //===========================================
    //スペースキーの押下判定
    //===========================================
    bool nowSpace = (CheckHitKey(KEY_INPUT_SPACE));

    //===========================================
    //スペースキーが押された瞬間にアニメーションを切り替える
    //===========================================
    if (nowSpace && !oldSpace)
    {
        switch (currentAnime)
        {
        case AnimationType::Idle:
            currentAnime = AnimationType::Walk;
            break;
        case AnimationType::Walk:
            currentAnime = AnimationType::Run;
            break;
        case AnimationType::Run:
            currentAnime = AnimationType::Jump;
            break;
        case AnimationType::Jump:
            currentAnime = AnimationType::Idle;
            break;
        default:
            break;
        }

        //===========================================
        //アニメーション切替
        //===========================================
        PlayerAnimation(currentAnime);
    }
    //===========================================
    //前回のスペースキーの状態を更新
    //===========================================
    oldSpace = nowSpace;
}

void Game::Draw()
{
      DrawGraph(Config::PLAYER_DRAW_X,
        Config::PLAYER_DRAW_Y,
        animations.GetImage(frameManager.GetFrameCounter()),
        TRUE);

      DrawFormatString(20,20,GetColor(255,255,255),
        "Frame :%d",frameManager.GetFrameCounter());

}

void Game::PlayerAnimation(AnimationType type)
{
    int row = static_cast<int>(type);

    int startFrame = row * Config::PLAYER_COL;

    int speed = Config::IDLE_SPEED;

    switch (type)
    {
    case AnimationType::Idle:
        speed = Config::IDLE_SPEED;
        break;
    case AnimationType::Walk:
        speed = Config::WALK_SPEED;
        break;
    case AnimationType::Run:
        speed = Config::RUN_SPEED;
        break;
    case AnimationType::Jump:
        speed = Config::JUMP_SPEED;
        break;
    default:
        break;
    }

    animations.Play(startFrame, Config::PLAYER_COL, speed);
}