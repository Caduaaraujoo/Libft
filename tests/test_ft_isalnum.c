#include "minunit.h"
#include <ctype.h>

int ft_isalnum(int c); // header file arquive test

MU_TEST(test_ft_isalnum_receiving_A_returns_true) //escop test
{
	// ARRANGE
	char input = 'A';
	int expected_result = isalnum(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isalnum_receiving_z_returns_true) //escop test
{
	// ARRANGE
	char input = 'z';
	int expected_result = isalnum(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isalnum_receiving_0_returns_true) //escop test
{
	// ARRANGE
	char input = 9;
	int expected_result = isalnum(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isalnum_receiving_9_returns_true) //escop test
{
	// ARRANGE
	char input = 9;
	int expected_result = isalnum(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isalnum_receiving_empty_returns_false) //escop test
{
	// ARRANGE
	char input = ' ';
	int expected_result = isalnum(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_isalnum_receiving_plus_returns_false) //escop test
{
	// ARRANGE
	char input = '+';
	int expected_result = isalnum(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isalnum(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalnum_test_suite) // arquive responsability is run test
{
	MU_RUN_TEST (test_ft_isalnum_receiving_A_returns_true);
	MU_RUN_TEST (test_ft_isalnum_receiving_z_returns_true);
	MU_RUN_TEST (test_ft_isalnum_receiving_0_returns_true);
	MU_RUN_TEST (test_ft_isalnum_receiving_9_returns_true);
	MU_RUN_TEST (test_ft_isalnum_receiving_empty_returns_false);
	MU_RUN_TEST (test_ft_isalnum_receiving_plus_returns_false);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_isalnum_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

