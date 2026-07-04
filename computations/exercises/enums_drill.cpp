// Classes
#include <string>
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <map>

class Name_pairs
{
public:
	void read_names();
	void read_ages();
	void print();
	void sort();

private:
	std::vector<std::string> name;
	std::vector<double> age;
	std::map<std::string, int> data;
};

void Name_pairs::read_names()
{
	// for (std::string s : n)
	// {
	// 	std::cout << "names in the name_vectors: " << s << "\n";
	// }

	std::cout << "Kindly enter names: " << "\n";
	for (std::string s; std::cin >> s;)
	{
		if (s == "0")
			break;
		name.push_back(s);
	}
}

void Name_pairs::read_ages()
{
	double ag{};
	for (int i = 0; i < name.size(); i++)
	{
		std::cout << "Name: " << name[i] << " Kindly put your age: " << "\n";
		std::cin >> ag;
		Name_pairs::age.push_back(ag);
	}

	for (int i = 0; i < name.size(); i++)
	{
		// for(int j=0;j<age.size();j++)
		// {
		data[name[i]] = age[i];
		// }
	}

	for (auto &[name, ages] : data)
	{
		std::cout << "data in the map: " << name << " " << ages << "\n";
	}
}

void Name_pairs::sort()
{
	// std::sort(name.begin(), name.end());
	// int i = 0;
	// for (auto &[name, ages] : data)
	// {
	// 	// std::cout << "data in the map: " << name << " " << ages << "\n";
	// 	// for(int i=0;i<age.size();i++)
	// 	// {
	// 	age[i] = ages;
	// 	i++;

	// 	// }
	// 	// age.push_back(ages);
	// }
	for (size_t i = 0; i < name.size(); i++)
	{
		for (size_t j = i + 1; j < name.size(); j++)
		{
			if (name[j] < name[i])
			{ // name[i], name[j] = name[j], name[i];
				std::swap(name[j], name[i]);
				std::swap(age[j], age[i]);
			}
		}
	}
}

void Name_pairs::print()
{
	// std::numeric_limits(n);
	for (int i = 0; i < name.size(); i++)
	{
		// for (int j = 0; j < age.size(); j++)
		// {
		std::cout << name[i] << age[i] << "\n";
		// }
	}

	for (int i : age)
	{
		std::cout << "data in the age vector: " << i << "\n";
	}
}

int main()
{
	// std::vector<std::string> names{"jayne", "milka", "roy", "caro", "alphy"};

	Name_pairs namey;
	namey.read_names();
	namey.read_ages();
	namey.sort();
	namey.print();
}