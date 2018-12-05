#include <iostream>
#include <string>

using namespace std;

int main()
{
	int currDay, currMon, currYear, bDay, bMonth, bYear;
	
	cout << "Enter current day, month and year: " << endl;
	cin >> currDay >> currMon >> currYear;
	cout << "Enter birthday, birth month and birth year: " << endl;
	cin >> bDay >> bMonth >> bYear;
	/*currDay = 25, currMon = 11, currYear = 2018;
	bDay = 2, bMonth = 1, bYear = 1994;*/

	//Assuming every month is of 30 days
	
	if(currMon >= bMonth){
		if(currDay >= bDay){
			cout << "Age in years: " << currYear - bYear << endl;
			cout << "Age in months: " << currMon - bMonth << endl;
			cout << "Age in days: " << currDay - bDay << endl;
		}
		else{
			cout << "Age in years: " << currYear - bYear << endl;
			cout << "Age in months: " << (currMon - bMonth) - 1 << endl;
			cout << "Age in days: " << (30 - bDay) + currDay << endl;
		}
	}
	else{
		if(currDay >= bDay){
			cout << "Age in years: " << (currYear - bYear) - 1 << endl;
			cout << "Age in months: " << (12 - bMonth) + currMon << endl;
			cout << "Age in days: " << currDay - bDay << endl;
		}
		else{
			cout << "Age in years: " << (currYear - bYear) - 1 << endl;
			cout << "Age in months: " << (12 - bMonth) + (currMon - 1) << endl;
			cout << "Age in days: " << (30 - bDay) + currDay << endl;
		}

	}

	system("pause");
	return 0;
}