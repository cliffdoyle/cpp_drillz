# include <iostream>
# include <vector>
# include <algorithm>

void medi(std::vector<double> v)
{
	for (double temp; std::cin >> temp;)
	{
		v.push_back(temp);
		std::ranges::sort(v);
		double median;

		if (v.size() % 2 == 0)
		{
			//Average of the two midle numbers
			median = (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2;
		}
		else
		{
			//Odd scenario
			median = v[v.size() / 2];
		}
		std::cout << "the median so far: " << median << "\n";
		
	}

}

int main()
{
	std::vector<double> v;
	//for (double temp;std::cin>>temp;)
	//{
	//	v.push_back(temp);
	//	//std::cout << v;
	//	//for (double d: v)
	//	//{
	//		std::ranges::sort(v);
	//		std::cout <<"The median value is: "<<v[v.size() / 2] << "\n";
	//	//}

	//}
	medi(v);
	return 0;
}