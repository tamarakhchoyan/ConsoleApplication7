#include <iostream>
int main()
{
	unsigned int x, y, x1, y1, x2, y2;
	std::cin >> x1 >> x >> x2;
	std::cin >> y1 >> y >> y2;
	if(x1>x && x>x2 && y1>y && y>y2)
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}