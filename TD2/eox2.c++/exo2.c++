#include <iostream>
#include <iomanip>
using namespace std;
constexpr int MULTIPLIER(int x, int y) {
	return x * y;
}

int main(void) {
	int a;
	cout << "La table de multiplication de :" << endl;
	cin >> a;

	while (a <= 0 || a > 9) {
		cout << "Je veux entre 1 et 9 ! : " << endl;
		cin >> a;
	}

	for (int i = 0; i <= 10; i++) {
		cout << "Resultat de " << a << "*" << i << " = " << a*i << endl;
	}
}