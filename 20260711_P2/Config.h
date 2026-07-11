#pragma once

namespace Config
{
	//===========================================
	//Window setting
	//===========================================
	//ウィンドウのサイズ
	constexpr int WINDOW_WIDTH = 1920;
	constexpr int WINDOW_HEIGHT = 1080;
	//表示するＸ，Ｙ座標
	constexpr int PLAYER_DRAW_X = 96;
	constexpr int PLAYER_DRAW_Y = 96;

	//===========================================
	//player setting
	//===========================================

	//1駒のさいず
	constexpr int PLAYER_WIDHT = 210;
	constexpr int PLAYER_HEIGT = 220;
	//分割数
	constexpr int PLAYER_COL = 7;
	constexpr int PLAYER_ROW = 4;
	//総フレーム数
	constexpr int PLAYER_TOTAL_FREAMES = PLAYER_COL * PLAYER_ROW;

	//===========================================
	//アニメーション速度
	//===========================================
	constexpr int IDLE_SPEED = 10;
	constexpr int WALK_SPEED = 7;
	constexpr int RUN_SPEED = 8;
	constexpr int JUMP_SPEED = 6;


}