#define BOOST_TEST_MODULE MyModuleName
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;


BOOST_AUTO_TEST_CASE(addition_testing)
{
	
	std::istringstream xstr("1/4");
	std::istringstream ystr("1/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/2");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x + y), result);
	
}

BOOST_AUTO_TEST_CASE(subtraction_testing)
{
	std::istringstream xstr("1/2");
	std::istringstream ystr("1/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/4");


	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x - y), result);

}

BOOST_AUTO_TEST_CASE(multiple_testing)
{
	std::istringstream xstr("1/4");
	std::istringstream ystr("1/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1/16");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x * y), result);


}

BOOST_AUTO_TEST_CASE(division_testing)
{
	std::istringstream xstr("1/4");
	std::istringstream ystr("1/4");

	Rational x, y;
	xstr >> x;
	ystr >> y;

	Rational result = Rational("1");

	// Check equality of the results of two expressions
	BOOST_CHECK_EQUAL((x / y), result);
}


