#include <iostream>
constexpr int MULTIPLIER(int x, int y) {
	return x * y;
}

int main(void)
{
	int a;
	int b;
	std::cout << "Entrez une valeur :" << std::endl;
	std::cin >> a;
	std::cout << "Entrez une autre valeur :" << std::endl;
	std::cin >> b;
	std::cout << MULTIPLIER(a + 1, b + 1) << std::endl;

	constexpr int c = MULTIPLIER(3, 4);
	std::cout << "3 * 4 = " << c << std::endl;
}
