// Lab 1: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream> 
#include "Complex.h"

using std::cout; 


Complex::Complex( double real, double imaginary )
{ 
   setComplexNumber( real, imaginary ); 
} // end Complex constructor

Complex Complex::add( const Complex &right )
{
   /* Write a statement to return a Complex object. Add
      the realPart of right to the realPart of this Complex
      object and add the imaginaryPart of right to the
      imaginaryPart of this Complex object */
    Complex temp;
    temp.realPart = this->realPart + right.realPart;
    temp.imaginaryPart = this->imaginaryPart + right.imaginaryPart;
    return temp;
} // end function add

Complex Complex::subtract( const Complex &right )
{
   /* Write a statement to return a Complex object. Subtract
      the realPart of right from the realPart of this Complex
      object and subtract the imaginaryPart of right from
      the imaginaryPart of this Complex object */
    Complex temp;
    temp.realPart = this->realPart - right.realPart;
    temp.imaginaryPart = this->imaginaryPart - right.imaginaryPart;
    return temp;
} // end function subtract

void Complex::printComplex()
{
   cout << '(' << realPart << ", " << imaginaryPart << ')';
} // end function printComplex

void Complex::setComplexNumber( double rp, double ip ) 
{
   realPart = rp;
   imaginaryPart = ip;
} // end function setComplexNumber 


/*严重性	代码	说明	项目	文件	行	禁止显示状态
错误	LNK2001	无法解析的外部符号 "public: __cdecl Complex::Complex(void)" (? ? 0Complex@@QEAA@XZ)	疑难杂症	D : \VS\疑难杂症\ComplexTest.obj	1

严重性	代码	说明	项目	文件	行	禁止显示状态
错误	LNK2019	无法解析的外部符号 "public: __cdecl Complex::Complex(void)" (??0Complex@@QEAA@XZ)，函数 "public: class Complex __cdecl Complex::add(class Complex const &)" (?add@Complex@@QEAA?AV1@AEBV1@@Z) 中引用了该符号	疑难杂症	D:\VS\疑难杂症\Complex.obj	1

严重性	代码	说明	项目	文件	行	禁止显示状态
错误	LNK1120	1 个无法解析的外部命令	疑难杂症	D:\VS\疑难杂症\x64\Debug\疑难杂症.exe	1

*/

//修改  Complex() 未实现 LNK2001 解决    LNK2019 ?

//Complex::Complex():realPart(0),imaginaryPart(0)
//{
//
//}


//解释 
/*
如果是在写代码阶段就报错了（当然如果是这种情况，报错的内容也就不是这样的了，这里只是顺便提一下），那一般是因为包含目录没有设置对，
导致程序无法找到外部库的函数定义；而如果是自定义的函数找不到，则需要检查一下函数的拼写是否正确，或者函数在cpp中实现时有没有在函数名前面加上类的定义域（即类名::）。

如果是运行时报错，常见的原因是你引用了某个库的函数，然后也正确添加了它的头文件路径，vs在写代码阶段可以找到这个函数的定义，
但是，由于你没有添加或者正确设置这个库的lib或者dll路径的话，那么vs就会在运行时候报错无法解析的外部符号。库目录（lib文件目录）是在项目->属性->配置属性->VC++目录->库目录

没有包含实现该函数或者变量的源文件在项目工程中，对于不在项目工程的源文件，
编译器不会进行编译，也就相当于其中的   函数或变量    没有被实现；

一般是链接时找不到相应的函数或者变量造成的，
调用在头文件中声明的函数或者变量时导致链接时找不到，
检查头文件和源文件中定义的函数或者变量名是否一一对应。
*/