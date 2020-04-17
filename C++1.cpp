#include<iostream>
using namespace std;
#include <string>

class Person
{
public:

	Person(string name)
	{
		this->m_Name = name;
	}

	void sayHello(Person &p)
	{
		cout << p.m_Name << " : ";
		cout << "Hello World" << endl;
	}

	string m_Name;
};

void test01()
{
	Person p("zhouyongjuan");
	p.sayHello(p);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
