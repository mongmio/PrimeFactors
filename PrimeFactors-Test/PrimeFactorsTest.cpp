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
	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFactorsTest, Of21Test) {
	vector<int> expected = {2};
	primeFactor.of(2);
	EXPECT_EQ(expected, primeFactor.of(2));
}

TEST_F(PrimeFactorsTest, Of31Test) {
	vector<int> expected = { 3 };
	primeFactor.of(3);
	EXPECT_EQ(expected, primeFactor.of(3));
}

TEST_F(PrimeFactorsTest, Of41Test) {
	vector<int> expected = { 2, 2 };
	primeFactor.of(4);
	EXPECT_EQ(expected, primeFactor.of(4));
}
