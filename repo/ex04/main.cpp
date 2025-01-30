#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

static int error(std::string s)
{
	std::cerr << "error : " + s << std::endl;
	return 1;
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

int main(int argc, char **argv)
{
	if (argc != 4)
		return (error("wrong number of arguments\nusage : ./replace <filename> <s1> <s2>"));

	std::string inFileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
		return (error("s1 cannot be empty"));

	std::ifstream inFile(inFileName.c_str(), std::ios::binary);
	if (!inFile)
		return (error("cannot open file '" + inFileName + "'"));
	std::ofstream outFile((inFileName + ".replace").c_str());
	if (!outFile)
		return (error("cannot create file '" + inFileName + ".replace'"));

	std::ostringstream oss;
	oss << inFile.rdbuf();
	std::string inFileContent = oss.str();
	outFile << replace(inFileContent, s1, s2);;
}
