#pragma once
#include"Config.h"
#include<vector>

class Map
{
private:

	//ファイルを読み込み

	/// <summary>
	/// ロードマップ
	/// </summary>
	/// <param name="filePath">マップCSVファイルパス</param>
	/// <param name="mapDate">マップチップイメージ</param>
	/// <returns>描画判定</returns>
	bool LoadMap(const char* filePath,std::vector<std::vector<int>> &mapDate);

	/// <summary>
	/// 描画レイヤー
	/// </summary>
	/// <param name="mapDate">マップチップイメージ</param>
	void DrawLayer(const std::vector<std::vector<int>>&mapDate) const;


	/// <summary>
	/// 描画フラグ
	/// </summary>
	/// <param name="mapX">座標Ｘ</param>
	/// <param name="mapY">座標Ｙ</param>
	/// <returns>描画フラグ</returns>
	bool IsValidMapPosition(int mapX,int mapY);

	int chipImages[Config::MAP_CHIP_IMAGE_COUNT];

	//マップの内容
	std::vector<std::vector<int>> backMap;
	std::vector<std::vector<int>> baseMap;
	std::vector<std::vector<int>> nearMap;

	int mapXNum;
	int mapYNum;
	bool isInitialized;




public:

	//コンストラクタ
	Map();
	~Map();


	//画像とＣＳＶを読み込み

	/// <summary>
	/// 画像読み込み初期化
	/// </summary>
	/// <returns>初期化内容</returns>
	bool Init();

	//マップを奥から手前の順に描画
	
	/// <summary>
	/// 描画
	/// </summary>
	void Draw()const;

	//DxLib終了前に呼び出して画像などを解放
	void Finalize();


};

