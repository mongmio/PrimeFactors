#include "pch.h"
#include "../PrimeFactors/PrimeFactors.cpp"

#include "vector"
using namespace std;

TEST(PrimeFactorsTest, OfTest) {
	PrimeFactors primeFactor{};
	vector<int> expected = {};
	primeFactor.of(1);
}