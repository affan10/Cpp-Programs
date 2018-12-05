#include <iostream>

using namespace std;

int main(){
	
	cout << "Welcome to my restaurant!" << endl << endl << "Enter 1 for Chinese" << endl << "Enter 2 for Continental" << 
		endl << "Enter 3 for Seafood" << endl;
	int userInput;
	cin >> userInput;

	if(userInput == 1){
		char opt = 'a';
		double bill = 0;
		int userChoice;
		char quit;

		while(opt != 'q'){
			cout << "Welcome to Chinese Menu!" << endl << "Enter 1 for Chopsuey Rs. 20" << endl << "Enter 2 for Manchurian Rs. 30" << 
				endl << "Enter 3 for Chilli Dry Rs. 25" << endl;

			cin >> userChoice;
			cout << endl;

			if(userChoice == 1){
				bill += 20;
			}
			else if(userChoice == 2){
				bill += 30;
			}
			else{
				bill += 25;
			}

			cout << "Press q to exit or any other to select another dish: ";
			cin >> quit;

			if(quit == 'q'){
				bill += bill * 0.05;
				cout << endl << "Your bill is: Rs. " << bill << " including 5% tax" << endl << "Have a nice meal!" << endl << endl;
				system("pause");
				return 0;
			}
			else
			{
				continue;
			}
		}

	}
	else if(userInput == 2){
		char opt = 'a';
		double bill = 0;
		int userChoice;
		char quit;

		while(opt != 'q'){
			cout << "Welcome to Continental Menu!" << endl << "Enter 1 for Boneless Handi Rs. 35" << endl << "Enter 2 for Chicken Karahi Rs. 15" << 
				endl << "Enter 3 for Chicken Biryani Rs. 10" << endl;

			cin >> userChoice;
			cout << endl;

			if(userChoice == 1){
				bill += 35;
			}
			else if(userChoice == 2){
				bill += 15;
			}
			else{
				bill += 10;
			}

			cout << "Press q to exit or any other to select another dish: ";
			cin >> quit;

			if(quit == 'q'){
				bill += bill * 0.05;
				cout << endl << "Your bill is: Rs. " << bill << " including 5% tax" << endl << "Have a nice meal!" << endl << endl;
				system("pause");
				return 0;
			}
			else
			{
				continue;
			}
		}
	}

	else if(userInput == 3){
		char opt = 'a';
		double bill = 0;
		int userChoice;
		char quit;

		while(opt != 'q'){
			cout << "Welcome to Seafood menu!" << endl << "Enter 1 for Fish and Chips Rs. 45" 
				<< endl << "Enter 2 for Prawn Chopsuey Rs. 50" << endl << "Enter 3 for Fish Salad Rs. 40" << endl;

			cin >> userChoice;
			cout << endl;

			if(userChoice == 1){
				bill += 45;
			}
			else if(userChoice == 2){
				bill += 50;
			}
			else{
				bill += 40;
			}

			cout << "Press q to exit or any other to select another dish: ";
			cin >> quit;

			if(quit == 'q'){
				bill += (bill * 0.05);
				cout << endl << "Your bill is: Rs. " << bill << " including 5% tax" << endl << "Have a nice meal!" << endl << endl;
				system("pause");
				return 0;
			}
			else
			{
				continue;
			}
		}
	}
	else{
		cout << "Not in menu!" << endl << endl;
	}

	system("pause");
	return 0;
}