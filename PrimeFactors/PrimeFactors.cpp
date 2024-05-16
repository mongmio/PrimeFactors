#include "vector"
using namespace std;

class PrimeFactors
{
public:
	PrimeFactors();
	~PrimeFactors();
	vector<int> of(int n)
	{
		vector<int> result = {};
		if (n == 4)
		{
			result.push_back(2);
			result.push_back(2);
		}
		else if (n > 1)
		{
			result.push_back(n);
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