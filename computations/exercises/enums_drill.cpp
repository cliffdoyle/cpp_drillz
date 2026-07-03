// Classes
#include <string>
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

class Name_pairs
{
public:
	void read_names(std::vector<std::string> &);
	void read_ages(std::vector<std::string> &);
	void print(std::vector<std::string> &);
	void sort(std::vector<std::string> &);

private:
	std::vector<std::string> name;
	std::vector<double> age;
};

void Name_pairs::read_names(std::vector<std::string> &n)
{
	for (std::string s : n)
	{
		std::cout << "names in the name_vectors: " << s << "\n";
	}
}

void Name_pairs::read_ages(std::vector<std::string> &n)
{
	int ag{};
	for (int i = 0; i < n.size(); i++)
	{
		std::cout << "Name: " << n[i] << " Kindly put your age: " << "\n";
		std::cin >> ag;
		Name_pairs::age.push_back(ag);
	}
}

void Name_pairs::sort(std::vector<std::string> &v)
{
	std::sort(v.begin(), v.end());
}

void Name_pairs::print(std::vector<std::string> &n)
{
	// std::numeric_limits(n);
	for (int i = 0; i < n.size(); i++)
	{
		// for (int j = 0; j < age.size(); j++)
		// {
		std::cout << n[i] << age[i] << "\n";
		// }
	}
}

int main()
{
	std::vector<std::string> names{"caro", "jayne", "milka", "roy"};
	Name_pairs namey;
	namey.read_ages(names);
	namey.print(names);
	namey.read_names(names);
}