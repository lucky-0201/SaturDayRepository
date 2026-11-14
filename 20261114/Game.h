#pragma once
#include"Circle.h"
#include"Sphere.h"

class Game
{
private:
	Circle circle;
	Sphere sphere;

public:

	//‰Šú‰»
	void Init();


	//XV

	void Update(float deltaTime);


	//•`‰æ
	void Draw();

	void Reset();
};

