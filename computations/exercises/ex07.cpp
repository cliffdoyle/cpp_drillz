//Program that finds mode 
# include <iostream>

# include <vector>

# include <limits>

# include <map>

 int modesy(std::vector<int> n)
{
	std::map<int, int> m;
	for (int i = 0;i < n.size();i++)
	{
		//int j=0
		m[n[i]]++;

	}

	int max = std::numeric_limits<int>::lowest();
	//double min = std::numeric_limits<double>::max();

	for (auto &a : m)
	{
		if (a.second > max)
		{
			max = a.second;
		}

		std::cout << "Elements in the m map: " << a.first <<" values in the map: "<<a.second<<"\n";
		std::cout << "max is: " << max << "\n";
	}

	for (auto& a : m)
	{
		if (a.second == max)
		{
			return a.first;
		}
	}
}

int main()
{

	std::vector<int> res = { 1,1,2,3,4,4,4,4,8 };
	int res2 = modesy(res);
	std::cout<<"The mode is: "<<res2 << "\n";
	return 0;


}