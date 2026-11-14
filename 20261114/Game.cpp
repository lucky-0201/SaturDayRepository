#include "Game.h"
#include"Config.h"

#include"Dxlib.h"


void Game::Init()
{
	circle.Init();
	sphere.Init();

	//3DƒJƒƒ‰İ’è
	SetCameraNearFar(Config::CAMERA_NEAR,Config::CAMERA_FAR);

	//“§‹“Š‰e‚Ìİ’è(‹–ìŠp60“x)
	SetupCamera_Perspective(Config::PI/30.0f);

	//ƒJƒƒ‰‚ÌˆÊ’u‚Æ’‹“_
	VECTOR cameraPosition = VGet(0.0f,0.0f,Config::CAMERA_Z);

	VECTOR cameraTrget = VGet(0.0f,0.0f,Config::CAMERA_TARGET_Z);

	SetCameraPositionAndTarget_UpVecY(cameraPosition,cameraTrget);
}

void Game::Update(float deltaTime)
{
	circle.Update(deltaTime);
	sphere.Update(deltaTime);
}

void Game::Draw() 
{
	//2D‚Ì‰~‚ğ•`‰æ
	circle.Draw();



	//3D‚Ì‹…‚ğ•`‰æ
	sphere.Draw();
}

void Game::Reset()
{
	circle.Reset();
	sphere.Reset();
}