#include<iostream>
using namespace std;

class Plus{
	private:
		int i;
		
	public:
		setData()
		{
			cout << "Enter value of i : ";
			cin >> this -> i;
		}
		
		Plus operator+(Plus a)
		{
			Plus N;
			
			N.i = this -> i + a.i;
			
			return N;
		}
		
		getData()
		{
			cout << "Sum = " << this -> i;
		}
};

int main()
{
	Plus p1,p2,p3;
	
	p1.setData();
	p2.setData();
	
	p3 = p1 + p2;
	
	p3.getData();
	
	return 0;
}
