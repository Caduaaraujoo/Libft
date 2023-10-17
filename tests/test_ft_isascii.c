#include "minunit.h"
#include <ctype.h>

int ft_isascii(int c); // header file arquive test

MU_TEST(test_ft_namefunction_receiving_NULL_returns_true) //escop test
{
	// ARRANGE
	char input = '\0';
	int expected_result = __isascii(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isascii(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_namefunction_receiving_delete_returns_true) //escop test
{
	// ARRANGE
	char input = 127;
	int expected_result = __isascii(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isascii(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_namefunction_receiving_space_returns_true) //escop test
{
	// ARRANGE
	char input = ' ';
	int expected_result = __isascii(input); // expected value of correct output
	int actual_result;

	// ACT
	actual_result = ft_isascii(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_ft_namefunction_receiving_cedilha_returns_false) //escop test
{
	// ARRANGE
	char *input = "ç";
	// int expected_result = isascii(*input); // expected value of correct output
	// int actual_result;

	// // ACT
	// actual_result = ft_isascii(*input);

	// ASSERT
	mu_assert_int_eq(__isascii(*input), ft_isascii(*input));
}

MU_TEST_SUITE(ft_namefunction_test_suite) // arquive responsability is run test
{
	MU_RUN_TEST(test_ft_namefunction_receiving_NULL_returns_true);
	MU_RUN_TEST(test_ft_namefunction_receiving_delete_returns_true);
	MU_RUN_TEST(test_ft_namefunction_receiving_space_returns_true);
	MU_RUN_TEST(test_ft_namefunction_receiving_cedilha_returns_false);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_namefunction_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

