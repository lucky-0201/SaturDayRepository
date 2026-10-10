#include"DxLib.h"

int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	ChangeWindowMode();
	while (ProcessMessage == 0 && CheckHitKey(KEY_INPUT_ESCAPE))
	{
		DxLib_Init();
	}

	DxLib_End();
	return 0;
}