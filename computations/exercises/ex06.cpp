#include <iostream>

#include <cmath>

#include <vector>

bool is_prime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }

    for (int i = 2; i <= std::sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> sieve_of_eratosthenes(int n)
{
    std::vector<int> res={};
    std::vector<int> res2={};

    for(int i=2;i<=n;i++)
    {
        // if (is_prime(i))
        // {

        // }
        res2.push_back(i);

    }

    for(int i=2;i<=n;i++)
    {

    }
    
    for (int j=0;j<res2.size();j++)
    {
        int i=0;
        if(is_prime(res2[j]))
        {
            while(i < res2.size())
            {
                if(res2[j] % i==0)
                {

                }
            }
        }
        
    }
}


int main()
{

    return 0;
}