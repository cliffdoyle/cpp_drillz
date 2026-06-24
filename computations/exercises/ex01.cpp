//Reads a string from input and then prints them on the standard output

# include <iostream>
# include <string>

int main()
{
	std::string s;

	std::cin >> s;

	for (int i=0;i<s.length();i++)
	{
		std::cout <<s[i] << " "<<static_cast<int>(s[i]) << "\n";

	}

	return 0;

}