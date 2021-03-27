#include "std_lib_facilities.h"
#undef vector

struct Person
{
	Person(string first_name, string second_name,int age){
		if (age<0||age>150)error("Ilyen nincs");
		else m_age=age;

	string forbidden {";:\"'[]*&^%$#@!"};
	

	for(auto c:forbidden)
	{
		if(first_name.find(c)!= string::npos)
		{
			error("Nem megfelel\n");
		}
	}
		for(auto c:forbidden)
	{
		if(second_name.find(c)!= string::npos)
		{
			error("Nem megfelel\n");
		}
	}
	m_first_name=first_name;
	m_second_name=second_name;
}
	int age() 		const{ return m_age;}
	string first_name() const {return m_first_name;}
	string second_name() const {return m_second_name;}
	string name () 	const{ return m_first_name+" "+m_second_name;}

private:
	string m_first_name;
	string m_second_name;
	int m_age;

};
ostream& operator<<(ostream &c, Person p)
{
	c<<p.name()<<" "<<p.age()<<'\n';
	return c;
}


istream& operator>>(istream &i, Person &p)
{
	string tmp_first_name;
	string tmp_second_name;
	int tmp_age;
	i>>tmp_first_name>>tmp_second_name>>tmp_age;

	p= Person{tmp_first_name,tmp_second_name,tmp_age};
	return i;
}
int main()
{
	Person buffer {" ", " ", 0};
	std::vector<Person> person_vec;

	while(cin>>buffer){
		person_vec.push_back(buffer);
	}


	for(auto i:person_vec)
	{
		cerr<<i;
	}


/*	Person goofy{"Jenő","Ferenc", 65};
	cin>>goofy;
	stringstream sstream;
	sstream<<goofy;

	Person goofy2{"Valaki","Random" ,66};
	sstream>>goofy2;



	cout<<goofy;
	cout <<goofy2;
//	cout<<sstream.str();*/
}