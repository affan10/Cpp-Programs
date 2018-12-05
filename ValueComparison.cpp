#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1 = 1000, num2 = 91, num3 = 2;
	if(num1 < num2){
		if(num1 < num3){
			cout << num1;
		}
	}
	else if(num2 < num3){
		cout << num2;
	}
	else if(num3 < num1){
		cout << num3;
	}

	cout << endl;

	system("pause");
	return 0;
}