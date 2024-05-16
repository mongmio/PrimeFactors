#include "vector"
using namespace std;

class PrimeFactors
{
public:
	PrimeFactors();
	~PrimeFactors();
	vector<int> of(int number)
	{
		int devisor = 2;
		vector<int> result = {};
		if (number == 4)
		{
			while (number % devisor == 0)
			{
				result.push_back(devisor);
				number /= devisor;
			}
		}
		else if (number == 6)
		{
			while (number % devisor == 0)
			{
				result.push_back(devisor);
				number /= devisor;
			}
			devisor++;
			while (number % devisor == 0)
			{
				result.push_back(devisor);
				number /= devisor;
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