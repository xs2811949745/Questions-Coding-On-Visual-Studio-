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


/*������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
����	LNK2001	�޷��������ⲿ���� "public: __cdecl Complex::Complex(void)" (? ? 0Complex@@QEAA@XZ)	������֢	D : \VS\������֢\ComplexTest.obj	1

������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
����	LNK2019	�޷��������ⲿ���� "public: __cdecl Complex::Complex(void)" (??0Complex@@QEAA@XZ)������ "public: class Complex __cdecl Complex::add(class Complex const &)" (?add@Complex@@QEAA?AV1@AEBV1@@Z) �������˸÷���	������֢	D:\VS\������֢\Complex.obj	1

������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
����	LNK1120	1 ���޷��������ⲿ����	������֢	D:\VS\������֢\x64\Debug\������֢.exe	1

*/

//�޸�  Complex() δʵ�� LNK2001 ���    LNK2019 ?

//Complex::Complex():realPart(0),imaginaryPart(0)
//{
//
//}


//���� 
/*
�������д����׶ξͱ����ˣ���Ȼ�����������������������Ҳ�Ͳ����������ˣ�����ֻ��˳����һ�£�����һ������Ϊ����Ŀ¼û�����öԣ�
���³����޷��ҵ��ⲿ��ĺ������壻��������Զ���ĺ����Ҳ���������Ҫ���һ�º�����ƴд�Ƿ���ȷ�����ߺ�����cpp��ʵ��ʱ��û���ں�����ǰ�������Ķ����򣨼�����::����

���������ʱ����������ԭ������������ĳ����ĺ�����Ȼ��Ҳ��ȷ���������ͷ�ļ�·����vs��д����׶ο����ҵ���������Ķ��壬
���ǣ�������û����ӻ�����ȷ����������lib����dll·���Ļ�����ôvs�ͻ�������ʱ�򱨴��޷��������ⲿ���š���Ŀ¼��lib�ļ�Ŀ¼��������Ŀ->����->��������->VC++Ŀ¼->��Ŀ¼

û�а���ʵ�ָú������߱�����Դ�ļ�����Ŀ�����У����ڲ�����Ŀ���̵�Դ�ļ���
������������б��룬Ҳ���൱�����е�   ���������    û�б�ʵ�֣�

һ��������ʱ�Ҳ�����Ӧ�ĺ������߱�����ɵģ�
������ͷ�ļ��������ĺ������߱���ʱ��������ʱ�Ҳ�����
���ͷ�ļ���Դ�ļ��ж���ĺ������߱������Ƿ�һһ��Ӧ��
*/