#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/homework/02_expressions/expressions.h" 

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("TEST GET SALES TAX")
{
	REQUIRE(get_sales_tax_amount(10) == .675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("TEST TIP AMOUNT")
{
	REQUIRE(get_tip_amount(15, 20) == 3);
	REQUIRE(get_tip_amount(20, 20) == 4);
}