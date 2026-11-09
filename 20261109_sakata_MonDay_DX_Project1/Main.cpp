#include <iostream>
#include <memory>
#include "Enemy_task.h"

void ShowEnemy(const Enemy_task& enemy)
{
	std::cout << "関数内のEenemyを表示する" << endl;
}

int main(void)
{
	//unique_ptrでEnemyを生成する
	std::unique_ptr<Enemy_task> enemy = std::make_unique<Enemy_task>("スライム");

	std::cout << "生成した数は" << std::endl;

	enemy->Draw();

	ShowEnemy(*enemy);

	std::cout << "関数を呼び出した後" << std::endl;
	enemy->Draw();

		return 0;
}