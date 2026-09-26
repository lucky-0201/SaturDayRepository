#pragma once
#include"Collsion.h"
class player
{
private:
	//プレイヤーの立ち位置
	float x;
	float y;

	//プレイヤーの移動速度
	float velocityX;
	float velocityY;

	//ジャンプフラグ
	bool isjumping;

	//プレイヤーの当て理判定
	Collsion collsion;

	//足元の当たり判定
	Collsion footCollsion;

	//頭の当たり判定
	Collsion headCollision;

public:
	Player();
	~Player();
	//初期化
	
	//更新
	
	//描画
	
	//マップとの衝突判定
	
	//Collcionの取得
	
	//座標


};

