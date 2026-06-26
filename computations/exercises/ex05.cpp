//Program that computes prime numbers between 1 and 100

# include <iostream>

# include <vector>

# include <cmath>


bool is_prime(int n)
{
	for (int i = 2;i <= std::sqrt(n);i++)
	{
		std::cout << "current n: " <<n<<" current i: "<<i<<"\n";
		if (n % i == 0)
		{
			return false;
		}
		//else if (n % i != 0)
		//{
		//	return true
		//}

	}
	return true;
}

int main()
{
	std::vector <int> primes;

	for (int i = 2;i < 100;i++)
	{
		if (is_prime(i))
		{
			primes.push_back(i);
		}
	}

	for (int i = 0;i < primes.size();i++)
	{
		std::cout << "prime numbers found: " << primes[i] << "\n";
	}

	return 0;
}