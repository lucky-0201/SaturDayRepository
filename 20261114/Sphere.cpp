#include "Sphere.h"
#include"Config.h"

#include"DxLib.h"

void Sphere::Init()
{
	x = Config::SPHERE_X;
	y = 0.0f;
	z = Config::SPHERE_START_Z;
}

void Sphere::Update(float deltaTime)
{
	z -= Config::CIRCLE_SPEED * deltaTime;

	if (z < Config::SPHERE_END_Z)
	{
		Reset();
	}
}

void Sphere::Draw() const
{
	VECTOR position;

	position.x = x;
	position.y = y;
	position.z = z;

	DrawSphere3D(position,Config::SPHERE_RADIUS,32,GetColor(255,150,80),GetColor(255,255,255),TRUE);
}

void Sphere::Reset()
{
	z - Config::SPHERE_START_Z;
}