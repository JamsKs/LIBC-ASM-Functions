/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include <dlfcn.h>

Test(strchr_test, str_pos) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    char *(*my_strchr)(char *, int) = dlsym(hundle, "strchr");
    cr_assert_str_eq(my_strchr("Texte de test", 'd'), "de test");
}

Test(strchr_test, str_null) {
    void *hundle = dlopen("./libasm.so", RTLD_LAZY);
    char *(*my_strchr)(char *, int) = dlsym(hundle, "strchr");
    cr_assert_eq(my_strchr("Texte de test", 'b'), NULL);
}