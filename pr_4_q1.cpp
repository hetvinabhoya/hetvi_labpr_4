#include<iostream>
using namespace std;

class Message{
	private:
		string a = "Hello";
		string b;
		
	public:
		
		print()
		{
			cout << this -> a << endl;
		}
		
		print(string b)
		{
			cout << this -> a << "," << b;
		}
	
};

int main()
{
	string b;
	
	    cout << "Enter Message : ";
		cin >> b;
	
	Message H;
	
	H.print();
	H.print(b);
	
	return 0;
}
