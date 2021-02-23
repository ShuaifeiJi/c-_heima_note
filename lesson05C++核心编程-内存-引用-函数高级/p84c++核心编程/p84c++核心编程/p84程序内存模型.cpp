/*
C++核心编程
主要讲解面向对象编程技术，探讨c++的核心和精髓
*/

/*
内存的分区模型：
1、代码区：		存放函数体的二进制代码，由操作系统进行管理
2、全局区：		存放全局变量、静态变量、常量
3、栈区：		由编译器自动分配释放，存放函数的参数值，局部变量等
4、堆区：		由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
*/

/*
内存四区存在的意义：
	不同区域存放的数据，赋予不同的生命周期，给我们更大的灵活编程
*/

/*
程序运行前：
	在程序编译后，生成了exe可执行程序，
	未执行该程序前分为两个区域（代码区、全局区）
	程序运行后，才会有（栈区和堆区）

	代码区：
		1、cpu执行的机器指令
		2、代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
			（比如多次点击这个exe，都会执行内存中同样区域的代码）
		3、代码区是只读的，使其只读的原因是防止程序意外地修改了它的指令
			（比如运行exe后，二进制代码不能改，比如把银币改成金币）

	全局区：
		存放全局变量、静态变量
		全局区还包含常量区， 字符串常量和其他常量也存放在此
		【这个区域的数据，在程序结束后，由操作系统释放】


*/