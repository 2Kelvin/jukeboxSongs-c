# jukeboxSongs-c

You can read individual song characters like so: (Here I'm accessing the 3rd song's character 'l')

```c
jukeboxSongs[2][8];
```

`stdio.h` header file: gives you the **standard input/output functions**; ***printf()*** and ***scanf()***

`string.h` header file: lets you **manipulate strings** (*slice*, *search*,*copy*, *compare*...)

header files contain **all functions** of a particular section of the C library. They end with the extension `.h`

`strstr()`: search for a string inside a string. If the searchWord/searchString is found, it returns its location in the main string. If it doesn't, it returns 0 (false).

```c
strstr("biography", "graph");
```

i.e. (syntax)

```c
strstr("string", "searchWord");
```

Basic syntax of defining/ initializing an array of strings(arrays) in C:

```c
char myArray[][] = {
    //the strings go in here separated by a comma ',' per line
};
```

The first `[]` is for the main (outer) array, while the second `[]` is for the characters of each string in the array