#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "memory address of string : " << &string << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "string : " << string << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;
}
