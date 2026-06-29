//Program that implements the sieve of erotesthenes
# include <iostream>

# include <vector>

# include <cmath>

std::vector<int> sieve_of_erotesthenes(int n)
{
	std::vector<bool> is_prime(n + 1, true);

	is_prime[0] = false;
	is_prime[1] = false;

	for (bool b : is_prime)
	{
		std::cout << "A peak inside the masking vector: " << b << "\n";
	}

	for (int i = 2;i <= std::sqrt(n);i++)
	{
		if (is_prime[i])
		{
			for (int j = i*i;j <= n;j += i)
			{
				is_prime[j] = false;

			}
		}

	}

	//Collect the prime numbers now
	std::vector<int > primes;

	for (int i = 2;i <= n;i++)
	{
		if (is_prime[i])
		{
			primes.push_back(i);
		}

	}

	return primes;


}

int main()
{
	int n = 60;
	std::vector<int> res = sieve_of_erotesthenes(n);

	for (int v : res)
	{
		std::cout << "prime no.s found: " << v << "\n";
	}

}