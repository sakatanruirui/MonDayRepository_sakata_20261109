#pragma once
#include <string>
using namespace std;
class Enemy_task
{
private:
	string Name;
	int hp;
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name">敵の名前</param>
	Enemy_task(const string& name);
	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy_task();
	/// <summary>
	/// HPを取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHp();
	/// <summary>
	/// 敵を描画
	/// </summary>
	/// <returns>描画</returns>
	void Draw();



};