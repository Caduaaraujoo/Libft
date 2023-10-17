#include "minunit.h"
#include <string.h>

void	ft_bzero(void *s, size_t n);

MU_TEST(test_ft_bzero_Cadu_and_two_position_tree_nulls_returns_Ca) //escop test
{
	// ARRANGE
	char *input;
	input = strdup("teste string");
	char *input2;
	input2 = strdup("teste string");

	bzero(input + 2, 3);
	ft_bzero(input2 + 2, 3);


	// ASSERT
	mu_assert_string_eq(input, input2);
}

MU_TEST(test_ft_bzero_empty_and_zero_position_tree_nulls_returns_null) //escop test
{
	// ARRANGE
	char *input;
	input = strdup("");
	char *input2;
	input2 = strdup("");

	bzero(input, 3);
	ft_bzero(input2, 3);


	// ASSERT
	mu_assert_string_eq(input, input2);
}

MU_TEST_SUITE(ft_bzero_test_suite) // arquive responsability is run test
{
	MU_RUN_TEST (test_ft_bzero_Cadu_and_two_position_tree_nulls_returns_Ca);
	MU_RUN_TEST (test_ft_bzero_empty_and_zero_position_tree_nulls_returns_null);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_bzero_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

