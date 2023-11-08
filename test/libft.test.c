#include "minunit.h"
#include "../src/ft_strlen.c"
#include "../src/ft_memset.c"
#include "../src/ft_bzero.c"
#include "../src/ft_memcpy.c"
#include "../src/ft_memccpy.c"


MU_TEST(ft_strlen_test){mu_assert_int_eq(11, ft_strlen("Hello World\0"));}
MU_TEST(ft_memset_test){
    char str[12] = "Hello world\0";
    mu_assert_string_eq("&&&lo world", ft_memset(str, '&', 3));
    }
MU_TEST(ft_bzero_test){
    char str[12] = "Hello world\0";
    ft_bzero(str, 3);
    mu_assert_string_eq("000lo world", str);
    }
MU_TEST(ft_memcpy_test){
    char str1[12] = "Hello world\0";
    char str2[6];
    ft_memcpy(str2, str1, 5);
    mu_assert_string_eq("Hello", str2);
    }
MU_TEST(ft_memccpy_test){
    char str1[12] = "Hello world\0";
    char str2[6];
    ft_memccpy(str2, str1, 'o', 7);
    mu_assert_string_eq("Hello", str2);
    }

MU_TEST_SUITE(test_suite){
    MU_RUN_TEST(ft_strlen_test);
    MU_RUN_TEST(ft_memset_test);
    MU_RUN_TEST(ft_bzero_test);
    MU_RUN_TEST(ft_memcpy_test);
    MU_RUN_TEST(ft_memccpy_test);
}

int main() {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return MU_EXIT_CODE;
}