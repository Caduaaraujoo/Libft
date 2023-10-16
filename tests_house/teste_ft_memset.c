#include "minunit.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

MU_TEST(test_memset_receiving_CADU_and_B_returns_new_value)
{
	// ARRANGE
	char input[5] = "CADU";
	int	n = 'B';
	size_t amount = 2;
	void *expected_result = memset(input + 1, n, amount);
	void *actual_result;

	// ACT
	actual_result = ft_memset(input + 1, n, amount);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST(test_memset_receiving_number_and_7_returns_new_value)
{
	// ARRANGE
	int	input[5] = {2, 4, 5, 8, 9};
	int	n = 40;
	size_t amount = 2;
	void *expected_result = memset(input + 1, n, amount);
	void *actual_result;

	// ACT
	actual_result = ft_memset(input + 1, n, amount);

	// ASSERT
	mu_assert_string_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_memset_test_suite)
{
	MU_RUN_TEST(test_memset_receiving_CADU_and_B_returns_new_value);
	MU_RUN_TEST(test_memset_receiving_number_and_7_returns_new_value);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_memset_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
