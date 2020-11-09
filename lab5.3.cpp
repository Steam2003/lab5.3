#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double z(const double x);
int main()
{
	double pp, pk, v;
	int n;

	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;

	double dp = (pk - pp) / n;
	double p = pp;
	cout << "----------------------------------" << endl;
	cout << "|" << setw(5) << "p" << setw(2) << "|" << setw(10) << "v" << setw(2) << "|" << endl;
	cout << "----------------------------------" << endl;

	while (p <= pk)
	{
		v = z(p * p) + 2 * z(2 * p + p * p) + 1;

		cout << "|" << setw(5) << p << setw(2) << "|" << setw(10) << v << setw(2) << "|" << endl;
		p += dp;
	}
	return 0;
}

	double z(const double x)
	{
		if (abs(x) >= 1)
			return ((cos(2 * x) + 1) / (cos(x) + sin(x) * sin(x)));
		else
		double S;
		int k = 0;
		double a = (2 * x) / 1.;
		double S = a;
		do
		{
			k++;
			double R = (4 * x * x) / ((2 * k + 1) * 2 * k);
				a *= R;
			S += a;
		
		} while (k < 6);
		return S;
}