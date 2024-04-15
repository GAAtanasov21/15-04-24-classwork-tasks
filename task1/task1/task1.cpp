#include <iostream>
using namespace std;

class Fact
{
private:
	int num;

public:
	Fact(int newNum)
	{
		num = newNum;
	}
	int getFact()
	{
		int factoriel = 1;
		for (int i = num; i > 0; i--)
		{
			factoriel *= i;
		}
		return factoriel;
	}
};

int main()
{
	int num;
	cin >> num;
	Fact factoriel(num);
	cout << factoriel.getFact();
}