/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <dlfcn.h>
#include <stdlib.h>

Test(memcpy_test, memcpy_res) {
    void *handle = dlopen("./libasm.so", RTLD_LAZY);
    void *(*my_memcpy)(char *, char *, size_t) = dlsym(handle, "memcpy");
    char str[] = "bonsoir";
    char str2[] = "coucou";
    cr_assert_str_eq(my_memcpy(str, str2, 5), "coucoir");
}

Test(memcpy_test, memcpy_null) {
    void *handle = dlopen("./libasm.so", RTLD_LAZY);
    void *(*my_memcpy)(char *, char *, size_t) = dlsym(handle, "memcpy");
    char str[] = "bonsoir";
    char str2[] = "coucou";
    cr_assert_str_eq(my_memcpy(str, str2, 0), "bonsoir");
} 