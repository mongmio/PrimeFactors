#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"

#include "vector"
using namespace std;

class PrimeFactorsTest : public testing::Test
{
protected:
	PrimeFactors primeFactor{};
};

TEST_F(PrimeFactorsTest, Of1Test) {
	vector<int> expected = {};
	primeFactor.of(1);
}

TEST_F(PrimeFactorsTest, Of21Test) {
	vector<int> expected = {2};
	primeFactor.of(2);
}