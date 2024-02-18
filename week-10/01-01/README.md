
预处理

```
gcc -E hello.c -o hello.i
cpp hello.c > hello.i
```

编译

```
gcc -S hello.i -o hello.s
cc1 hello.c
```

汇编

```
gcc -c hello.s -o hello.o
as hello.s -o hello.o
``` 

链接

```
gcc -static -o myproc main.o test.o
ld -static -o myproc main.o test.o
```