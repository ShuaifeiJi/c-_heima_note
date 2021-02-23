/*
在c++中，函数形参列表中的形参是可以有默认值的

语法：
	返回值类型 函数名 (参数 = 默认值) {}
*/

#include <iostream>
using namespace std;

int func03(int a, int b = 20, int c = 30) // b已经有了默认参数10,则从这个位置开始，从左往右，必须都有默认参数
{
	return a + b + c;
}

// 如果函数的声明有默认参数，那么这个函数的实现就不能有默认参数了
int func04(int a = 10, int b = 10); // 声明，可以将函数实现写在main后边

int main95() {

	cout << func03(10) << endl; // 结果是10 + 20 + 30 = 60

	cout << func03(10, 6) << endl; // 结果是 10 + 6 +30 = 46
	cout << func04() << endl;
	system("pause");
	return 0;
}

int func04(int a, int b)  //函数实现不能有默认参数了,报错 重定义默认参数
{
	return a + b;
}

// 总结： 传了，就用传的值
//		  没传，就用默认值（缺省值）

/*
注意事项：
	若果某个位置已经有了默认参数，那么从这个位置开始，从左往右都必须有默认值

	如果函数的声明有默认参数，那么这个函数的实现就不能有默认参数了
	(声明和实现只能有一个默认参数，防止二义性)
*/