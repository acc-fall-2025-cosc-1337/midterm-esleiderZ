#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test sales commission calculations")
{
    REQUIRE(get_sales_commission(100) == Approx(5).epsilon(0.01));
    REQUIRE(get_sales_commission(750) == Approx(45).epsilon(0.01));
    REQUIRE(get_sales_commission(1100) == Approx(77).epsilon(0.01));
    REQUIRE(get_sales_commission(1750) == Approx(140).epsilon(0.01));
}