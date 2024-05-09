# 2. 目标代码和ISA（15分钟）

|本期版本|上期版本
|:---:|:---:
`Thu May  9 17:19:26 CST 2024` | -


## misc

```
# 32位代码
-m32

# 调用栈桢信息
-fno-asynchronous-unwind-tables
```

## 汇编代码

```bash
gcc -E test.c -o test.i
gcc -S test.i -o test.s

gcc -S test.c -o test.s
```

## 目标文件

```
gcc -c test.s -o test.o -m32
objdump -d test.o
```

* test.o中的代码从地址0开始，test中的代码从80483d4开始！