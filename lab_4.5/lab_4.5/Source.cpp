#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x;
	double y;
	double R;

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if ((pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && y >= x && x >= 0) ||
			(pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && (y <= x && y <= 0 && x <= 0)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - R;
		y = 6. * rand() / RAND_MAX - R;
		if ((pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && y >= x && x >= 0) ||
			(pow(y, 2) <= (pow(R, 2) - pow(x, 2)) && (y <= x && y <= 0 && x <= 0)))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}