#include "minunit.h"
#include <ctype.h>

int ft_isalpha(int c);

MU_TEST(test_isalpha_receiving_A_returns_true)
{
	// ARRANGE
	char input = 'A';
	int expected_result = isalpha(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_Exclamation_returns_false)
{
	// ARRANGE
	char input = '1';
	int expected_result = isalpha(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_empty_returns_false)
{
	// ARRANGE
	char input = ' ';
	int expected_result = isalpha(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isalpha_receiving_z_returns_true)
{
	// ARRANGE
	char input = 'z';
	int expected_result = isalpha(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isalpha(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalpha_test_suite)
{
	MU_RUN_TEST(test_isalpha_receiving_A_returns_true);
	MU_RUN_TEST(test_isalpha_receiving_Exclamation_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_empty_returns_false);
	MU_RUN_TEST(test_isalpha_receiving_z_returns_true);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
