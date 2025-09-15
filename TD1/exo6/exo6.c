#include <stdio.h>
int main()
{
	/*int x = 14, y = 13;
	if (x > y)
	{
		if (x < 20)
		{
			x -= 10;
		}
		else
		{
			x += 10;
		}
	}
	printf("%d\n", x);
	return 0;*/

	// Le premier programme imprime "4"

	/*int x = 4, y = 3;
	x = x + y;
	y = x - y;
	printf("%d\n", y);
	return 0;*/

	// Le deuxième programme imprime "4"

	int x = 0, y = 100;
	while (x * x <= y)
	{
		x += 1;
	}
	return 0;
	// Le dernier programme va retourner 0 dès que x^2 <= 100, dans notre exemple, x est 10


}
