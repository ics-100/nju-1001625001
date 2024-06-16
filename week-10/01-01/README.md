# [10.1.1]--可执行文件生成过程概述（19分钟）

|本期版本|上期版本
|:---:|:---:
`Sun Jun 16 09:49:15 CST 2024` | -

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