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
		if (n == 2 || n == 3)
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