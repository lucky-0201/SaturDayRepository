#pragma once

class Sphere
{
private:
	int x;
	int y;
	int z;



public:
	void Init();

	void Update(float deltaTime);

	void Draw()const;

	void Reset();
};

