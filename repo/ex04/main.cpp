#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

static void error(std::string s)
{
	std::cerr << s << std::endl;
	exit(1);
}

static std::string getFileContent(const std::string& filename)
{
	std::ifstream		f;
	std::ostringstream	oss;

	f.open(filename.c_str(), std::ios::binary);
	if (!f)
		error("cannot open file");
	oss << f.rdbuf();
	return oss.str();
}

static std::string replace(const std::string& s, const std::string& s1, const std::string& s2)
{
	std::string	result;
	size_t		i;
	size_t		j;

	i = 0;
	while ((j = s.find(s1, i)) != std::string::npos)
	{
		result.append(s, i, j - i);
		result.append(s2);
		i = j + s1.size();
	}
	result.append(s, i, s.size() - i);
	return result;
}

static void createOutputFile(const std::string& inputFilename, const std::string& content)
{
	std::ofstream f((inputFilename + ".replace").c_str());
	f << content;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		error("usage : ./replace filename s1 s2");

	std::string inputFilename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
		error("s1 cannot be empty");

	std::string inputFileContent = getFileContent(inputFilename);
	std::string outputFileContent = replace(inputFileContent, s1, s2);
	createOutputFile(inputFilename, outputFileContent);
}
