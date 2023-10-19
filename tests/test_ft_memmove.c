#include "minunit.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

MU_TEST(test_ft_memmove_receiving_dest_src_returns_comp_memove_and_ft_memmove) //escop test
{
	char *src;
    char *dest;

	char *dest2;
	char *src2;

    char *str = strdup("KJDHIOFJKLFPJKJKFREPJOREPJOFR");
	char *str2 = strdup("KJDHIOFJKLFPJKJKFREPJOREPJOFR");

    src = &str[8];
    dest = &str[5];
	memmove(dest, src, 5);

	src2 = &str2[8];
    dest2 = &str2[5];
	ft_memmove(dest2, src2, 5);

	mu_assert_string_eq(dest, dest2);
}

MU_TEST_SUITE(ft_memmove_test_suite) // arquive responsability is run test
{
	MU_RUN_TEST (test_ft_memmove_receiving_dest_src_returns_comp_memove_and_ft_memmove);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_memmove_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

