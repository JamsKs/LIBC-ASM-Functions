/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <dlfcn.h>

Test(strncmp_test, lenght_compare) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    int (*my_strncmp)(char *, char *, size_t) = dlsym(hundle, "strncmp");
    cr_assert_eq(my_strncmp("hello", "hello", 6), 0);
}

Test(strncmp_test, lenght_compare_pos) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    int (*my_strncmp)(char *, char *, size_t) = dlsym(hundle, "strncmp");
    cr_assert_eq(my_strncmp("hello", "hallo", 6), 4);
}