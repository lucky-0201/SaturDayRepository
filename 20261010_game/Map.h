#pragma once

#include<vector>
#include<string>
using namespace std;

class Map
{
private:
	//マップチップの番号
	vector<vector<int>> mapDate;//あとから配列を変えれるデータ
	//当たり判定の情報
	vector<vector<int>> hitDate;

	//マップチップの画像
	int chipImage[64];

	//マップの縦横のマスの数
	int mapWidht;
	int mapHeight;

	//マップの大きさ
	static constexpr int CHIP_SIZE = 64;

	//csvファイルの読み込み
	bool LoadCSV(const char*fileName,vector<vector<int>> &date);

public:
	/// <summary>
	/// Mapコンストラクタ
	/// </summary>
	Map();
	/// <summary>
	/// 初期化
	/// </summary>
	/// <returns></returns>
	bool Init();

	/// <summary>
	/// マップの描画 
	/// </summary>
	void Draw(float cameraX,float cameraY);
	
	//指定したマスが通行できるか調べる
	bool IsSolid(int tileX,int tileY);

	/// <summary>
	/// ワールド座標から当たり判定を調べる
	/// </summary>
	/// <param name="worldX">ワールド座標X</param>
	/// <param name="worldY">ワールド座標Y</param>
	/// <returns></returns>
	bool IsSolidAt(float worldX,float worldY);
};

