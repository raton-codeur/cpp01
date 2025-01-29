#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cerr << "usage : ./ex04 filename s1 s2" << std::endl;
	else
		std::cout << argv[1] << std::endl;
}
