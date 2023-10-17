#include "minunit.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n); // header file arquive test

MU_TEST(test_ft_memcpy_receiving_CADU_and_TESTee_returns_equals_str) //escop test
{
	// ARRANGE
	char *str1;
	str1 = strdup("TESTee");

	char *str2;
	str2 = strdup("CADU");

	ft_memcpy(str2, str1, 3);

	char *str3;
	str3 = strdup("CADU");
	memcpy(str3, str1, 3);

	// ASSERT
	mu_assert_string_eq(str2, str3);
}

MU_TEST(test_ft_memcpy_receiving_empty_and_TESTee_returns_equals_str) //escop test
{
		// ARRANGE
	char *str1;
	str1 = strdup("TESTee");

	char *str2;
	str2 = strdup("");

	ft_memcpy(str2, str1, 3);

	char *str3;
	str3 = strdup("");
	memcpy(str3, str1, 3);

	// ASSERT
	mu_assert_string_eq(str2, str3);
}

MU_TEST(test_ft_memcpy_receiving_Cadu_and_empty_returns_equals_str) //escop test
{
		// ARRANGE
	char *str1;
	str1 = strdup("");

	char *str2;
	str2 = strdup("Cadu");

	ft_memcpy(str2, str1, 3);

	char *str3;
	str3 = strdup("Cadu");
	memcpy(str3, str1, 3);

	// ASSERT
	mu_assert_string_eq(str2, str3);
}

MU_TEST(test_ft_memcpy_receiving_empty_and_empty_returns_equals_str) //escop test
{
		// ARRANGE
	char *str1;
	str1 = strdup("");

	char *str2;
	str2 = strdup("");

	ft_memcpy(str2, str1, 3);

	char *str3;
	str3 = strdup("");
	memcpy(str3, str1, 3);

	// ASSERT
	mu_assert_string_eq(str2, str3);
}


MU_TEST_SUITE(ft_memcpy_test_suite) // arquive responsability is run test
{
	MU_RUN_TEST (test_ft_memcpy_receiving_CADU_and_TESTee_returns_equals_str);
	MU_RUN_TEST (test_ft_memcpy_receiving_empty_and_TESTee_returns_equals_str);
	MU_RUN_TEST (test_ft_memcpy_receiving_Cadu_and_empty_returns_equals_str);
	MU_RUN_TEST (test_ft_memcpy_receiving_empty_and_empty_returns_equals_str);
}

int main(int argc, char *argv[])
{
	MU_RUN_SUITE(ft_memcpy_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

