#include "Circle.h"
#include"Config.h"

#include"DxLib.h"

void Circle::Init()
{
	x = 320.0f;
	y = Config::CIRCLE__STARYT_Y;
}

void Circle::Update(float deltaTime)
{
	y -= Config::CIRCLE_SPEED * deltaTime;

	if (y < Config::CIRCLE_END_Y)
	{
		Reset();
	}
}

void Circle::Draw() const
{
	DrawCircle(static_cast<int>(x),static_cast<int>(y),Config::CIRCLE_RADIUS,GetColor(100,200,255),TRUE);
}

void Circle::Reset()
{
	y = Config::CIRCLE__STARYT_Y;
}
