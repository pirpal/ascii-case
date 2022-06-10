ASCII CASE
---------------

Basic C functions to manage basic ASCII letters (A-Z and a-z) case

+ `is_lower(char) -> bool`
+ `is_upper(char) -> bool`
+ `lowercase(char) -> char`
+ `uppercase(char) -> char`
+ `togglecase(char) -> char`


## Run example


```sh
$ make
gcc -g -Wall -Wextra -std=c11 -pedantic main.c ascii_case.c -o PROG

$ ./PROG
Original string: 'fRODO sAM gANDALF gOLLUM'
Toggle case: 'Frodo Sam Gandalf Gollum'
```
