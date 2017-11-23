#include <iostream>

#define max(a,b) a>b?a:b

using namespace std;

int main()
{
	int c[6][11];//购物车容量是由0——11
	int w[] = {0,2,5,4,2,3};//物品编号是从1开始的
	int v[] = {0,6,3,5,4,6};
	int W = 10;
	int wi = 0;

	for (int i = 0; i < 5; i++)
	{
		c[0][i] = 0;
		c[i][0] = 0;
	}

	for (int i = 1; i < 6; i++)//物品编号
	{
		for (int j = 1; j <= W; j++)//购物车容量
		{
			if (j < w[i])
				c[i][j] = c[i - 1][j];
			else
				c[i][j] = max(c[i-1][j],c[i-1][j-w[i]]+v[i]);
			
		}
	}
	cout << "the max value:" << c[5][10] << endl;
//构造最优解

	return 0;
}