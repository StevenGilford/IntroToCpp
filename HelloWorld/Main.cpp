#include <iostream>

void PrintHelloWorld()
{
	std::cout << "Hello world!";
}
int main()
{
	PrintHelloWorld();
	std::cout << "And hello to the solar system!";
	PrintHelloWorld();
	std::cout << "And hello to the Milky Way galaxy!";
	PrintHelloWorld();
	system("pause");
	return 0;
}