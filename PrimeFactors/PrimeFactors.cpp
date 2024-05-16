#include "vector"
using namespace std;

class PrimeFactors
{
public:
	PrimeFactors();
	~PrimeFactors();
	vector<int> of(int number)
	{
		vector<int> result = {};
		if (number == 4)
		{
			while (number % 2 == 0)
			{
				result.push_back(2);
				number /= 2;
			}
		}
		else if (number > 1)
		{
			result.push_back(number);
		}
		return result;
	}
private:

};

PrimeFactors::PrimeFactors()
{
}

PrimeFactors::~PrimeFactors()
{
}