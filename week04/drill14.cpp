#include "std_lib_facilities.h"

class B1{
public:
	virtual void pvf() = 0;
	virtual void vf(){cout<<"B1::vf()\n";}
	void f(){cout <<"B1::f()\n";}


};
class D1:public B1 {
public:
	void pvf() override {cout<<"D1::pvf()\n";}
	void vf() override{cout<<"D1::vf()\n";}
	void f(){cout<<"D1::v()\n";}

	
};
class D2: public D1{
public:
	void pvf()  {cout<<"D2::pvf\n";}
};
class B2{
public: 
	virtual void pvf()=0;
};
class D21: public B2{
public:
	string s="Smth";
	void pvf() override {cout<<s<<'\n';}
};
class D22:public B2{
public: 
	int i=6;
	void pvf() override {cout<<i<<endl;}
};
void f(B2& b2){
	b2.pvf();
}


int main()
{
	//1.
	//B1 baba;
	//baba.vf();
	//baba.f();
	//baba.pvf();
	//2.
	D1 d;
	d.vf();
	d.f();
	d.pvf();
	//3.
	B1 &b2=d;
	b2.vf();
	b2.f();
	
	D2 d2;
	d2.f();
	d2.vf();
	d2.pvf();

	D21 d21;
	D22 d22;
	f(d21);
	f(d22);


}