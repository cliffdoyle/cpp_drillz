//Classes
# include <string>
# include <iostream>
# include <vector>
# include <limit>

class Name_pairs {
public:
	void read_names(vector<std::string>);
	void read_ages();
	void print();
	//void sort();
private:
	vector<std::string> name;
	vector<double> age;

};

Name_pairs::read_names(vector<std::string>& n)
{
	for (std::string s : n)
	{
		std::cout << "names in the name_vectors: " << s << "\n";
	}

}

Name_pairs::read_ages(vector<std::string>& n)
{	
	int ag{};
	for (int i = 0;i < n.size();i++)
	{
		std::cout << "Name: " << n[0] << "Kindly put your age: " << "\n";
		std::cin >> ag;
		Name_pairs::age.push_back(ag);

	}

}

Name_pairs::print(vector<std::string>& n)
{
	std::numeric_limits(n);



}