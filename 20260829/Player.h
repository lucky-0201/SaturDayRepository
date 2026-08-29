#pragma once

#include"Collisiion.h"

class Player
{
private:
	float x;
	float y;

	float velocityX;
	float velocityY;

	//ジャンプ
	bool jumpFlag;
	bool groundFlag;
	bool headHitFlag;

	//ジャンプキー
	bool previousJump;

	//アニメーション
	float animationTimer;

	int animationType;
	int animationpattern;

	//画像
	int playerImg[3 * 4];

	//コライダー
	Collision collision;//本体の当たり判定
	Collision footCollision;//足元の当たり判定
	Collision headCollision;//頭の当たり判定

public:

	void Init();

	void Update(float deltaTime);

	void Draw();

	void Finalize();

	Collision GetCollision() const;
	Collision GetFootCollision() const;
	Collision GetHeadCollision() const;

	void FixCollision(const Collision& collision);

	void SetGround(bool ground);

	void SetHeadHit(bool hit);

private:
	void Move(float deltaTime);
};