//Program that finds min, max and mode of a sequence

# include <vector>
# include <map>
# include <iostream>
# include <string>

std::string max(std::vector<std::string> s)
{
	std::string max=s[0];
	for (size_t i = 0;i < s.size();i++)
	{
		if (s[i] > max)
		{
			max = s[i];
		}
	}
	return max;
}

std::string min(std::vector<std::string> s)
{
	std::string min = max(s);
	for (size_t i = 0;i < s.size();i++)
	{
		if (s[i] < min)
		{
			min = s[i];
		}
	}
	return min;
}

std::string mode(std::vector<std::string> s)
{
	//calculating mode in string
	//declare map to store string frequency

	std::map<std::string, int> m;

	for (size_t i = 0;i < s.size();i++)
	{
		m[s[i]]++;
	}
	for (auto& a : m)
	{
	std::cout << "elements in the map: " << a.first<<" Their values: "<<a.second<<"\n";
	}

	//Determine the ele with the highest frequency
	int maxi = 0;

	//for (auto& a : m)
	//{
	//	if (maxi > a.first)
	//	{
	//		maxi = a.first;
	//	}

	//}
	//Determine the mode now
	std::string mode;

	for (auto& a : m)
	{
		if (a.second > maxi)
		{
			maxi = a.second;
			mode = a.first;

		}
	}
	std::cout << "max: " <<maxi<< "\n";
	return mode;

}

int main()
{
	std::vector<std::string> input = { "vanty","cliff","zebra","cliff","cliff","kelly","collo","collo","collo","collo","collo","fred" };
	std::string res = max(input);
		std::cout << "max string: " << res << "\n";
		std::string res2 = min(input);
		std::cout << "min str: " << res2 << "\n";
		std::string modi = mode(input);
		std::cout << "mode in the sequence: " << modi << "\n";



	return 0;
}