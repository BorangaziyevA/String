#include "String_.h"

void main()
{
	//String_ s("Hello");
	//s.print();
	//s.setString("Hollywood");
	//s.print();
	//s.append(" undead");
	//s.print();
	//cout <<s.equal("Hollywood undead")<<endl;

	String_ s("Hello");
	String_ s2("Bye");
	String_ s3;

	s3 = s2 = s;
	s3.print();

	system("pause");
}


//f(s);
//Передача объекта в функцию по значению
//void f(String_ st)
//{
//	st.append("!");
//}

//Инициализация при создании
//string_ s2 = s;

//const и & хорошие друзья
