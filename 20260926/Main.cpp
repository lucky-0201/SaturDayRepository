#include"DxLib.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	ChangeWindowMode(TRUE);

	//SetGraphMode();

	if (DxLib_Init() == -1)return -1;

	while (ProcessMessage() == 0&&!CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClearDrawScreen();

		ScreenFlip();
	}

	DxLib_End();

	return 0;
}