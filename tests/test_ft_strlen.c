#include "minunit.h"
#include <string.h>

size_t	ft_strlen(const char *__s);

MU_TEST(test_strlen_receiving_CADU_returns_length)
{
	// ARRANGE
	const char *input = "CADU";
	int expected_result = strlen(input);
	int actual_result;

	// ACT
	actual_result = ft_strlen(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_strlen_receiving_empty_returns_length)
{
	// ARRANGE
	const char *input = "";
	int expected_result = strlen(input);
	int actual_result;

	// ACT
	actual_result = ft_strlen(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_strlen_receiving_Jh_lES_returns_length)
{
	// ARRANGE
	const char *input = "Jh\rlES";
	int expected_result = strlen(input);
	int actual_result;

	// ACT
	actual_result = ft_strlen(input);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_strlen_test_suite)
{
	MU_RUN_TEST(test_strlen_receiving_CADU_returns_length);
	MU_RUN_TEST(test_strlen_receiving_empty_returns_length);
	MU_RUN_TEST(test_strlen_receiving_Jh_lES_returns_length);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_strlen_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
