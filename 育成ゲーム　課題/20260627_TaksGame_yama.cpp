#include"DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//‰ŠúÝ’è
	ChangeWindowMode(TRUE);
	SetGraphMode(800, 600, 32);
	SetDrawScreen(DX_SCREEN_BACK);
	if (DxLib_Init() == -1){return -1;}

	//‰æ‘œ‚Ì•”‰®
	int image1 = LoadGraph("img/P1.png");
	int image2 = LoadGraph("img/P2.png");
	int image3 = LoadGraph("img/P3.png");
	//•Ï”
	int oldKey = 0;
	int count = 0;
	
	//ƒQ[ƒ€ƒ‹[ƒv
	while (ProcessMessage()== 0 && CheckHitKey(KEY_INPUT_ESCAPE)== 0)
	{
		ClearDrawScreen();

		int key = CheckHitKey(KEY_INPUT_RETURN);
		
		if (key == 1 && oldKey == 0)
		{
			count++;
		}
		oldKey = key;

		//ˆê’è‰ñ”“ü—Í‚µ‚½‚ç‰æ‘œ•Ï‰»
		if (count >= 3)
		{
			image1 = image2;
		}
		if (count >= 8)
		{
			image2 = image3;
		}
		//‰æ‘œ•`‰æ
		DrawRotaGraph(400, 300, 0.5, 0, image1, true);
		ScreenFlip();
	}
	DxLib_End();
	return 0;
}