# LIBC-ASM-Functions

The objective of this project is to create a dynamic ELF library to replace (to a certain extent) the standard
C library you use every day on your system.
Thanks to the malloc project and the bootstrap, you are now able to replace some functions with your own
implementations through a dynamic library (which is called weak binding).

# How to Build

## Build

```
$> git clone https://github.com/JamsKs/LIBC-ASM-Functions.git
$> make re
$> make tests_run (for unit tests)
```
