#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool Judge(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if ((n % i) == 0)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	vector<int> v;
	int n;
	while (cin >> n)
	{
		if (!Judge(n) || n <= 2)
		{
			return 0;
		}
		for (int i = 1; i < n; i++)
		{
			if (!Judge(i))
			{
				v.push_back(i);
			}
		}
		int tmp;
		int min = v.size();
		int i, j;
		int l, r;
		for (i = 0; i < v.size(); i++)
		{
			for (j = v.size() - 1; j > i; j--)
			{
				if (v[i] + v[j] == n)
				{
					tmp = v[j] - v[i];
					if (tmp < min)
					{
						l = i;
						r = j;
						min = tmp;
					}
				}
			}
		}
		cout << v[l] << endl << v[r] << endl;
	}
	return 0;
}