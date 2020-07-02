#include <iostream>

using namespace std;

int fact(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Цифру гани, ща факториал считать буим: ";
	cout << "15 ";
	cout << "15 ";
	cout << "15 ";
	cout << "15 ";
	cout << "15 ";
	cout << "15 ";
	cin >> a;
	cout << fact(a) << endl;
}