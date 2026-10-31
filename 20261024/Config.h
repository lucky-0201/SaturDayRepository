#pragma once


//ゲーム設定値をまとめるファイル
//数値やファイルパスを変更するときは、ここを確認します。



namespace Config
{
	//マップチップ画像の設定
	constexpr int MAP_CHIP_SIZE = 64;
	constexpr int MAP_CHIP_IMAGE_COLOMNS = 16;
	constexpr int MAP_CHIP_IMAGE_ROWS = 4;
	constexpr int MAP_CHIP_IMAGE_COUNT = MAP_CHIP_IMAGE_COLOMNS * MAP_CHIP_IMAGE_ROWS;

	//マップの描画開始位置
	constexpr int MAP_DRAW_ORIGIN_X = 0;
	constexpr int MAP_DRAW_ORIGIN_Y = 0;

	//CSVの値
	constexpr int MAP_EMPTY = 0;

	//マップファイル
	constexpr char MAP_CHIP_IMAGE_PATH[] = "deta/Island .png";
	constexpr char MAP_HIT_CSV_PATH[] = "deta/island_hit.csv";
	constexpr char MAP_BACK_CSV_PATH[] = "deta/island_back.csv";
	constexpr char MAP_BASE_CSV_PATH[] = "deta/island_base.csv";
	constexpr char MAP_NEAR_CSV_PATH[] = "deta/island_near.csv";







}