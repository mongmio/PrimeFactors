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
		if (n == 2)
		{
			result.push_back(2);
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