# include <iostream>

# include <vector>

# include <limits>

int main()
{
	std::vector<double> v;
		//sum of all the input distances
		double sum{};
	for (double temp;std::cin >> temp;)
	{
		//push the data in the vector
		v.push_back(temp);
		//sum += v[temp];

	}
	double max=std::numeric_limits<double>::lowest();
	double min=std::numeric_limits<double>::max();
	for (double d:v)
	{
		sum += d;

		if (d > max)
		{
			max = d;
		}

		if (d < min)
		{
			min = d;
		}


		}
		std::cout << "smallest distance: " << min << "\n";
		std::cout << "largest distance: " << max << "\n";
		std::cout << "sum of all data points: " << sum << "\n";

}