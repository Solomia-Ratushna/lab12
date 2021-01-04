#include <iostream>
using namespace std;




int main()
{
	int a, b;
	cout << "a= ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	int c = (a * a + b * b + sin(a * b)) / (1 + fabs(a * b));
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}