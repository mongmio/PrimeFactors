#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"

#include "vector"
using namespace std;

class PrimeFactorsTest : public testing::Test
{
protected:
	PrimeFactors primeFactor{};
};

TEST_F(PrimeFactorsTest, OfTest) {
	vector<int> expected = {};
	primeFactor.of(1);
}