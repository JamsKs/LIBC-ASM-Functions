/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <dlfcn.h>
#include <stdlib.h>

Test(memset_test, memset_res) {
    void *handle = dlopen("./libasm.so", RTLD_LAZY);
    void *(*my_memset)(char *, int, size_t) = dlsym(handle, "memset");
    char str[] = "bonjour";
    cr_assert_str_eq(my_memset(str, 'a', 5), "aaaaaur");
}

Test(memset_test, memset_test_null) {
    void *handle = dlopen("./libasm.so", RTLD_LAZY);
    void *(*my_memset)(char *, int, size_t) = dlsym(handle, "memset");
    char str[] = "hello";
    cr_assert_str_eq(my_memset(str, 'a', 0), "hello");
}