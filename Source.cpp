#include "stdafx.h"
//using namespace std;
const int nMinPrime = 2;
bool F(int nNum)
{
	int b = sqrt(float(nNum));
	for (int i = nMinPrime; i <= b; ++i)
	{	 
		if (b % i == 0)
		{	
			return false;
		}
	}
	return true;
}
int main(int nArgc,char **ppArgs)
{
	const int nLimit = 10000;
	int a = 0;
	for (int i = 2; i < nLimit; ++i)
	{	
		if (F(i))
		{	
			++a;
		}
	}
	std::cout << a << std::endl;
	system("pause");
	return 0;
}
