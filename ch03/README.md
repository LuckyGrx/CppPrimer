# 第3章 字符串、向量和数组
## [练习 3.1](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_01_a.cc)
## [练习 3.2](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_02.cc)
## 练习 3.3
>请说明string类的输入运算符和getline函数分别是如何处理空白字符的。
## [练习 3.4](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_04.cc)
## [练习 3.5](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_05.cc)
## [练习 3.6](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_06.cc)
## [练习 3.7](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_07.cc)
## [练习 3.8](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_08.cc)
## 练习 3.9
>下面的程序有何作用？它合法吗？如果不合法，为什么？
```cpp
string s;
cout << s[0] << endl;
```
## [练习 3.10](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_10.cc)
## 练习 3.11
>下面的范围for语句合法吗？如果合法，c的类型是什么？
## 练习 3.12
>下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于不正确的，说明其错误的原因。
## 练习 3.13
>下列的vector对象各包含了多少各元素？这些元素的值分别是多少？
## [练习 3.14](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_14.cc)
## [练习 3.15](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_15.cc)
## [练习 3.16](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_16.cc)
## [练习 3.17](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_17.cc)
## 练习 3.18
>下面的程序合法吗？如果不合法，你准备如何修改？
## 练习 3.19
>如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法。哪种方法更好呢？为什么？
## [练习 3.20](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_20.cc)
## 练习 3.20
## [练习 3.21](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_21.cc)
## [练习 3.22](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_22.cc)
## [练习 3.23](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_23.cc)
## [练习 3.24](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_24.cc)
## [练习 3.25](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_25.cc)
## 练习 3.26
>在100页的二分搜索中，为什么用的是mid=beg+(end-beg)/2，而非mid=(beg+end)/2;
## 练习 3.27
>假设txt_size是一个无参数的函数，它的返回值是int。请回答下列哪个定义是非法的？为什么？
```cpp
unsigned buf_size = 1024;
(a) int ia[buf_size];
(b) int ia[4 * 7 - 14];
(c) int ia[txt_size()];
(d) char st[11] = "fundamental";
```
## 练习 3.28
>下列数组中的元素是什么？
```cpp
string sa[10];
int ia[10];
int main(){
	string sa2[10];
	int ia2[10];
}
```
## 练习 3.29
>相对于vector来说，数组有哪些缺点，请列举一些。
## 练习 3.30
>指出下面代码中的索引错误。
```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for(size_t ix = 1;ix <= array_size; ++ix)
	ia[ix] = ix;
```
## [练习 3.31](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_31.cc)
## [练习 3.32](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_32.cc)
## 练习 3.33
>对于104页的程序来说，如果不初始化scores将会发生什么？
## 练习 3.34
>假定p1和p2指向同一个数组中的元素，则下面程序的功能是什么？什么情况下该程序是非法的？
```cpp
p1 += p2 - p1;
```
## [练习 3.35](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_35.cc)
## [练习 3.36](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_36.cc)
## [练习 3.37](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_37.cc)
## 练习 3.38
>在本节中我们提到，将两个指针相加不但是非法的，而且也没什么意义。请问为什么两个指针相加没什么意义？
## [练习 3.39](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_39.cc)
## [练习 3.40](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_40.cc)
## [练习 3.41](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_41.cc)
## [练习 3.42](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_42.cc)
## [练习 3.43](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_43.cc)
## [练习 3.44](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_44.cc)
## [练习 3.45](https://github.com/LuckyGan/CppPrimer/blob/master/ch03/ex3_45.cc)
