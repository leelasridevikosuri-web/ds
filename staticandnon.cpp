#include<iostream>
class Test
{
	public:
	void m1()
	{
		std::cout<<"this is m1 method"<<std::endl;
	}
	
	static void m2()
	{
		std::cout<<"this is m2 method"<<std::endl;
	}
};
int main()
{
  Test* t = new Test();
  t->m1();//m1 is non staic method,call it with object
  Test::m2();
}
