#include "Animation.h"

//===========================================
//コントラクト
//===========================================
Animation::Animation()
{
	//分割画像
	images = nullptr;
	//開始フレーム
	startFrame = 0;
	//再生フレーム数
	frameCount = 1;
	//再生速度
	speed = 10;
	//再生開始時間
	startTime = 0;
}

//===========================================
//分割画像設定
//===========================================
void Animation::SetImages(int *img)
{
	//分割の画像を取り組み
	images = img;
}

//===========================================
//アニメーション再生
//===========================================
void Animation::Play(int start,int frame,int spd)
{
	//アニメーションの開始位置設定
	startFrame = start;
	//再生するフレーム数を設定
	frameCount  = frame;
	//アニメーション速度を設定
	speed = spd;
}

//===========================================
//現在描画する画像取得
//===========================================
int Animation::GetImage(int currentTime)
{
	//===========================================
    //アニメーション番号計算
    //===========================================
	int frame = (currentTime / speed)% frameCount;
	return images[startFrame + frame];
}