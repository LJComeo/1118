#include <iostream>
#include <map>
#include <set>
using namespace std;

/*
template <class T1,class T2>
struct pair
{
	typedef T1 first_type;
	typedef T2 second_type;

	T1 first;
	T2 second;
	pair()
		: first(T1()),
		second(T2())
	{}

	pair(const T1&a, const T2& b)
		:first(a),
		second(b)
	{}
};
*/
int t2()
{
	int n;
	cin >> n;
	multiset<int> data;
	multiset<int> ::iterator is;
	int sum = 0;
	int i;
	int tmp;
	for (i = 0; i < n; i++)
	{
		cin >> tmp;
		data.insert(tmp);
	}
	
	while (data.size() > 1)
	{
		tmp = 0;
		is = data.begin();
		tmp += *is;
		data.erase(is);

		is = data.begin();
		tmp += *is;
		data.erase(is);

		data.insert(tmp);
		sum += tmp;
	}
	cout << sum;
	return 0;
}