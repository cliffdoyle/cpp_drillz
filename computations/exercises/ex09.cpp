# include <iostream>


void printy(int& x)
{
	x+=6;
	std::cout << "modified arg by the func: " <<x<< "\n";
}

int main()
{
	int xx{};
	std::cout << "initial val of xx: " <<xx<< "\n";
	printy(xx);
	std::cout << "the current value of xx: " << xx << "\n";

}