#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t, c, d;
	double fin = 0,f=0;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> c >> d;
		if(d!=0)
		f = d * (5.0 / 9.0);
		fin = c + f;
		cout << "Case " << i << ": " << fixed << setprecision(2) << fin << endl;
		f = 0;
		fin = 0;
	}

	return 0;
}
