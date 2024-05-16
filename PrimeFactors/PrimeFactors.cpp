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
		if (number > 1)
		{
			for (int devisor = 2; number > 1; devisor++)
			{
				while (number % devisor == 0)
				{
					result.push_back(devisor);
					number /= devisor;
				}
			}
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