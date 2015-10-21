#include <iostream>
#include <string>
using namespace std;

class Person {
	private:
		static const int LIMIT = 25;
		string lname;
		char fname[LIMIT];
	public:
		Person() 
		{ 
			lname = "";
			fname[0] = '\0'; 
		}
		Person(const string & ln, const char * fn = "Heyyou")
		{
			int n = strlen(fn);
			if(n >= LIMIT)
			{
				n = LIMIT - 1;
			}
			for(int i = 0; i < n; i++)
			{
				fname[i] = fn[i];
			}
			fname[n] = '\0';
			lname = ln;
		}
		void Show() 
		{
			cout<<fname<<" "<<lname;
		} 
		void FormalShow()
		{
			cout<<lname<<", "<<fname;
		}
};

void main()
{
	Person p1;
	Person p2("Magical");
	Person p3("Magic", "Mike");
	p1.Show();
	p1.FormalShow();
	p2.Show();
	p2.FormalShow();
	p3.Show();
	p3.FormalShow();
}
