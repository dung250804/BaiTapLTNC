#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void input(int& x, int& y)
{
	cin >> x >> y;
}

int main() 
{
	srand(time(NULL));
	int m, n, k;
	cin >> m >> n >> k;
	int a[m][n];
	if(k < 10)
	{
		int count = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				a[i][j] = 0;
			}
		}

		for(int i = 0; i < k; i++)
		{
			while(1)
			{
				int randm = rand() % ((m-1) - 0 + 1) + 0;
				int randn = rand() % ((n-1) - 0 + 1) + 0;
				if(a[randm][randn] == 0)
				{
					a[randm][randn] = 1;
					break;
				}
			}
		}
		
		int x, y;
		bool GameRunning = true;
		while(GameRunning)
		{
			input(x, y);
			if(a[x][y] == 0)
			{
				a[x][y] = 2;
			}
			else if(a[x][y] == 1)
			{
				cout << "GAME OVER!";
				GameRunning = false;
			}
			int count = 0;
			for(int i = 0; i < m; i++)
			{
				for(int j = 0; j < n; j++)
				{
					if(a[i][j] == 0)
					{
						count++;
					}
				}
			}
			if(count == 0)
			{
				cout << "VICTORY!";
				GameRunning = false;
			}
		}
	
	return 0;
	}
	
}


