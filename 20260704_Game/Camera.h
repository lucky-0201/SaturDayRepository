#pragma once
class Camera
{
private:
	//the x position of the camera
	float x;
public:
	Camera();

	void Update();

	float GetX() const;

};

