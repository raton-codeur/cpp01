#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

static void error(std::string s)
{
	std::cerr << s << std::endl;
	exit(1);
}

static std::string getFileContent(const std::string& filename)
{
	std::ifstream		f;
	std::ostringstream	oss;

	f.open(filename, std::ios::binary);
	if (!f)
		error("cannot open file");
	oss << f.rdbuf();
	return oss.str();
}

static std::string replace(const std::string& s, const std::string& s1, const std::string& s2)
{
	std::ostringstream	oss;
	size_t				pos = 0;

	while ((pos = s.find(s1, pos)) != std::string::npos)
	{
		std::cout << "found at " << pos << std::endl;
		oss << s.substr(0, pos) << s2;
		
		pos++;
	}
	(void)s2;
	return oss.str();
}

int main(int argc, char **argv)
{
	std::string	inputFilename;
	std::string	outputFilename;
	std::string	inputFileContent;
	std::string	outputFileContent;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
		error("usage: ./ex04 filename s1 s2");

	inputFilename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	outputFilename = inputFilename + ".replace";
	inputFileContent = getFileContent(inputFilename);
	outputFileContent = replace(inputFileContent, s1, s2);

	std::cout << "input file content :" << std::endl;
	std::cout << inputFileContent << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "output file content :" << std::endl;
	std::cout << inputFileContent << std::endl;
}
