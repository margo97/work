#include <ctest.h>

#include <func.h>

CTEST (equation_suite, two_roots_test)
{	
	//Given 
	const double a = 2;
	const double b = 1;
	const double c = -3;
	
	double x1 = 0, x2 = 0;
	const int g = dis(a, b, c, &x1, &x2);
	
	//Wait
	const double expected_x1 = 1;
	const double expected_x2 = -1.5;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
	ASSERT_EQUAL(TWOROOTS, g);
}
	
CTEST (equation_suite, one_roots_test)
{
	//Given
	const double a = 0;
	const double b = 2;
	const double c = -4;
	
	double x1 = 0, x2 = 0;
    const int g = dis(a, b, c, &x1, &x2);

	//Wait
	const double expected_x1 = 2;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(ONEROOT, g);
}
	
CTEST(equation_suite, one_roots2_test)
{
	//Given
	const double a = 1;
	const double b = -4;
	const double c = 4;

	double x1 = 0, x2 = 0;
	const int g = dis(a, b, c, &x1, &x2);

	//Wait
	const double expected_x1 = 2;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_EQUAL(ONEROOT, g);
}

CTEST(equation_suite, noroots_test)
{
	//Given
	const double a = 3;
	const double b = -1;
	const double c = 7;

	double x1 = 0, x2 = 0;
	const int g = dis(a, b, c, &x1, &x2);

	//Wait
	ASSERT_EQUAL(ROOT_NO, g);
}	
	
CTEST(equation_suite, inv_arg_test)
{
	//Given
	const double a = 0;
	const double b = 0;
	const double c = 7;

	double x1 = 0, x2 = 0;
	const int g = dis(a, b, c, &x1, &x2);

	//Wait
	ASSERT_EQUAL(BAD_ARG, g);
}
	 