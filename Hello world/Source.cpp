#include <iostream>
#include <string>

int main()
{
	const std::string hello = "Hello world";
	std::string sb = hello.substr(4, 3);
	std::cout << sb;
	getchar();
	getchar();
}