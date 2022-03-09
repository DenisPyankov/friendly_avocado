#include <iostream>

class Dice {
public:
	int left;
	int right;
};

class Domino {
	int left;
	int right;
	
	void Change_Dice(Dice My, int x, int y) {
		My.left = x;
		My.right = y;
	};

	void Enemy_left(Domino now, Dice Enemy) {
		now.left = Enemy.right;
	};

	void Enemy_right(Domino now, Dice Enemy) {
		now.right = Enemy.left;
	};

	void put(Dice My, Domino now) {

		if (now.left == My.left)
			now.left = My.right;
		
		if (now.left == My.right)
			now.left = My.left;

		if (now.right == My.left)
			now.right = My.right;

		if (now.right == My.right)
			now.right = My.left;

	};

};

int main()
{
	Domino p1;
	return 0;
}