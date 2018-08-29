# 第2章 变量和基本类型
## 练习 2.1
>类型int、long、long long和short的区别是什么？无符号类型和带符号类型的区别是什么？float和double类型的区别是什么？
## 练习 2.2
>计算按揭贷款时，对于利率、本金和付款分别应选择哪种数据类型？说明你的理由。
## 练习 2.3
>读程序写结果。
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u <<std::endl;
std::cout << u - i <<std::endl;
```
## [练习 2.4](https://github.com/LuckyGan/CppPrimer/blob/master/ch02/ex2_04.cc)
## 练习 2.5
>指出下述字面值的数据类型并说明每一组内几种字面值的区别：
```cpp
(a) 'a', L'a', "a", L"a"
(b) 10, 10u, 10L, 19uL, 012, 0xC
(c) 3.14, 3.14f, 3.14L
(d) 10, 10u, 10., 10e-2
```
## 练习 2.6
>下面两组定义是否有区别，如果有，请叙述之：
```cpp
int month = 9, day = 7;
int month = 09, day = 07;
```
## 练习 2.7
>下述字面值表示何种含义？它们各自的数据类型是什么？
```cpp
(a) "Who goes with F\145rgus?\012"
(b) 3.14e1L
(c) 1024f
(d) 3.14L
```
## [练习 2.8](https://github.com/LuckyGan/CppPrimer/blob/master/ch02/ex2_08.cc)
## 练习 2.9
>解释下面定义的含义。对于非法的定义，请说明错在何处并将其改正。
```cpp
(a) std::cin >> int input_value;
(b) int i = { 3.14 };
(c) double salary = wage = 9999.99;
(d) int i = 3.14;
```
## 练习 2.10
>下面变量的初值是什么？
```cpp
std::string global_str;
int global_int;
int main() {
    int local_int;
    std::string local_str;
}
```
## 练习 2.11
>指出下面的语句是声明还是定义：
```cpp
(a) extern int ix = 1024;
(b) int iy;
(c) extern int iz;
```
## 练习 2.12
>请指出下面的名字中哪些是非法的：
```cpp
(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;
```
## 练习 2.13
>下面程序中j的值是多少？
```cpp
int i = 42;
int main() {
    int i = 100;
    int j = i;
}
```
## 练习 2.14
>下面的程序合法吗？如果合法，它将输出什么？
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
    sum += i;
std::cout << i << " " << sum << std::endl;
```
## 练习 2.15
>下面的哪个定义是不合法的？为什么？
```cpp
(a) int ival = 1.01;
(b) int &rval1 = 1.01;
(c) int &rval2 = ival;
(d) int &rval3;
```
## 练习 2.16
>考察下面的所有赋值然后回答：哪些赋值是不合法的？为什么？哪些赋值是合法的？它们执行了什么样的操作？
```cpp
int i = 0, &r1 = i;      double d = 0, &r2 = d;
(a) r2 = 3.14159;
(b) r2 = r1;
(c) i = r2;
(d) r1 = d;
```
## 练习 2.17
>执行下面的代码段将输出什么结果？
```cpp
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
## [练习 2.18](https://github.com/LuckyGan/CppPrimer/blob/master/ch02/ex2_18.cc)
## 练习 2.19
>说明指针和引用的主要区别。
## 练习 2.20
>请叙述下面这段代码的作用。
```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```
## 练习 2.21
>请解释下述定义。在这些定义中有非法的吗？如果有，为什么？
```cpp
int i = 0;
(a) double *dp = &i;
(b) int *ip = i;
(c) int *p = &i;
```
## 练习 2.22
>假设p是一个int型指针，请说明下述代码的含义。
```cpp
if (p)  //...
if (*p) //...
```
## 练习 2.23
>给定指针p，你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路；如果不能，也请说明原因。
## 练习 2.24
>在下面这段代码中为什么p合法而lp非法？
```cpp
int i = 42;  void *p = &i;  long *lp = &i;
```
## 练习 2.25
>说明下面变量的类型和值。
```cpp
(a) int *ip, i, &r = i;
(b) int i, *ip = 0;
(c) int *ip, ip2;
```
## 练习 2.26
>下面哪些句子是合法的？如果有不合法的句子，请说明为什么？
```cpp
(a) const int buf;
(b) int cnt = 0;
(c) const int sz = cnt;
(d) ++cnt; ++sz;
```
## 练习 2.27

## 练习 2.28
## 练习 2.29
## 练习 2.30
>对于下面的这些语句，请说明对象被声明成了顶层const还是底层const?
```cpp
const int v2 = 0;    int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
## 练习 2.31
>假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现。
```cpp
r1 = r2;
p1 = p2; p2 = p1;
p1 = p3; p2 = p3;
```
## 练习 2.32
>下面的代码是否合法？如果合法，请设法将其修改正确。
```cpp
int null = 0, *p = null;
```
## 练习 2.33
## 练习 2.34
## 练习 2.35
## 练习 2.36
## 练习 2.37
## 练习 2.38
## [练习 2.39](https://github.com/LuckyGan/CppPrimer/blob/master/ch02/ex2_39.cc)
## 练习 2.40
## 练习 2.41
## 练习 2.42
