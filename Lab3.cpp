#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double result;
	int switch_on;

	cout << "Input variable: ";
	cin >> switch_on;

	switch (switch_on) {
	case 1: {
		double a = -0.7, b = -1.1, x = -3.5, z;

		while (x <= 1) {
			z = exp(a);

			if (x <= (5 * a))
			{
				result = 2.5 * pow(b, 2) + a * x - 4.5 * cos(x * z);
				cout << "X: " << x << ", If: 1, Result: " << result << endl;
			}
			else if (x > b)
			{
				result = pow((pow(a, 2) - 5.4 * x), 3) + log(x * z);
				cout << "X: " << x << ", If: 2, Result: " << result << endl;
			}
			else if ((5 * a < x) && (x <= b))
			{
				result = sqrt(6.5 * pow(b, 2) + (a - pow(x, 3) * z));
				cout << "X: " << x << ", If: 3, Result: " << result << endl;
			}
			x += 1.5;
		}
		break;
	}
	case 2: {
		double a = -2.1, b = 11.1, z, x = -15;

		do {
			z = exp(b);

			if (x <= (5 * a))
			{
				result = 2.5 * pow(b, 2) + a * x - 4.5 * cos(x * z);
				cout << "X: " << x << ", If: 1, Result: " << result << endl;
			}
			else if (x > b)
			{
				result = pow((pow(a, 2) - 5.4 * x), 3) + log(x * z);
				cout << "X: " << x << ", If: 2, Result: " << result << endl;
			}
			else if ((5 * a < x) && (x <= b))
			{
				result = sqrt(6.5 * pow(b, 2) + (a - pow(x, 3) * z));
				cout << "X: " << x << ", If: 3, Result: " << result << endl;
			}
			x += 5;
		} while (x <= 15);
		break;
	}
	case 3: {
		double a = 2.2, b = 23.75, z, x;

		for (x = 10; x <= 25; x += 2.5) {
			z = exp(a * b);

			if (x <= (5 * a))
			{
				result = 2.5 * pow(b, 2) + a * x - 4.5 * cos(x * z);
				cout << "X: " << x << ", If: 1, Result: " << result << endl;
			}
			else if (x > b)
			{
				result = pow((pow(a, 2) - 5.4 * x), 3) + log(x * z);
				cout << "X: " << x << ", If: 2, Result: " << result << endl;
			}
			else if ((5 * a < x) && (x <= b))
			{
				result = sqrt(abs(6.5 * pow(b, 2) + (a - pow(x, 3) * z)));
				cout << "X: " << x << ", If: 3, Result: " << result << endl;
			}
		}
		break;
	}
	default: {
		cout << "Not supported variable, try more.";
		break;
	}
	}
	cin >> switch_on;
	return 0;
}
