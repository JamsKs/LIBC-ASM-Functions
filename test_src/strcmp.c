/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <dlfcn.h>

Test(strcmp_test, lenght_compare) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    int (*my_strcmp)(char *, char *) = dlsym(hundle, "strcmp");
    cr_assert_eq(my_strcmp("hello", "hello"), 0);
}

Test(strcmp_test, lenght_compare_pos) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    int (*my_strcmp)(char *, char *) = dlsym(hundle, "strcmp");
    cr_assert_eq(my_strcmp("hello", "hallo"), 4);
}