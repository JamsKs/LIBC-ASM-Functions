/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <dlfcn.h>

Test(strlen_test, lenght_size) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    int (*my_strlen)(char *) = dlsym(hundle, "strlen");
    cr_assert_eq(my_strlen("hello"), 5);
}
