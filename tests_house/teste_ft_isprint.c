#include "minunit.h"
#include <ctype.h>

int	ft_isprint(int c);

MU_TEST(test_isprint_receiving_A_returns_true)
{
	// ARRANGE
	char input = 'A';
	int expected_result = isprint(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isprint(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isprint_receiving_space_returns_true)
{
	// ARRANGE
	char input = ' ';
	int expected_result = isprint(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isprint(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isprint_receiving_apito_returns_false)
{
	// ARRANGE
	char input = '\a';
	int expected_result = isprint(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isprint(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isprint_receiving_tio_returns_true)
{
	// ARRANGE
	char input = '~';
	int expected_result = isprint(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isprint(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_isprint_receiving_delete_returns_false)
{
	// ARRANGE
	char input = '127';
	int expected_result = isprint(input); // it could be any number different from 0
	int actual_result;

	// ACT
	actual_result = ft_isprint(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isprint_test_suite)
{
	MU_RUN_TEST(test_isprint_receiving_A_returns_true);
	MU_RUN_TEST(test_isprint_receiving_space_returns_true);
	MU_RUN_TEST(test_isprint_receiving_apito_returns_false);
	MU_RUN_TEST(test_isprint_receiving_tio_returns_true);
	MU_RUN_TEST(test_isprint_receiving_delete_returns_false);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_isprint_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
