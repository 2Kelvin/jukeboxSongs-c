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


