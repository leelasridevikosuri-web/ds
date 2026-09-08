#include<iostream>
class parent
{
	public:void publicfunc()
		{
			std::cout<<"this is publicfunc"<<std::endl;
		}
	protected:void protectedfunc()
		{
			std::cout<<"this is protecfunc"<<std::endl;
		}
	private:void privatefunc()
		{
			std::cout<<"this is privatfunc"<<std::endl;
		}
		
	public:void m2()
	{
	 privatefunc();
	}
	
};
class child : public parent
{
	public:void m1()
	{
		protectedfunc();
	}
	
};
int main()
{
	child* c = new child();
	c->publicfunc();
	c->m1();
	parent* p = new parent();
	p->m2();
}
