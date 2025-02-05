#include <iostream>
using namespace std;
#include <string>

// 设计一个学生类，属性有姓名和学号
// 可以给姓名和学号赋值，可以显示学生的姓名和学号

// 设计学生类
class Student
{
public: // 公共权限
	// 属性
	string m_Name; // 姓名
	int m_Id; // 学号

	// 行为
	// 显示姓名和学号
	void showStudent() 
	{
		cout << "姓名： " << m_Name << endl;
		cout << "学号： " << m_Id << endl;
	}

	// 给姓名赋值
	void setName(string name) 
	{
		m_Name = name;
	}

};

int main100() {
	
	// 实例化
	// 创建一个具体的学生 （实例化对象）
	Student s1;
	// 给s1对象 进行属性赋值操作
	s1.m_Name = "张三";
	s1.setName("张小三");
	s1.m_Id = 88888888;

	// 显示学生信息
	s1.showStudent();


	// 创建一个具体的学生
	Student s2;	
	
	s2.m_Name = "李四";
	s2.m_Id = 66666666;
	s2.showStudent();

	system("pause");

	return 0;
}

// 类中的属性和行为，统一称为成员
// 属性又叫：   成员属性、 成员变量
// 行为又叫：	成员函数、 成员方法