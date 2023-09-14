#include <iostream>;
using namespace std;
int main() {
	char gender;
	int weight;
	int height;
	int age;
	float BMR;
	bool gender_validity;
	string title;
	char run_again;
	float chocolate_qty;
	gender_validity = false;


	do {
		cout << "Welcome to my BMR Calculator";
		while (!gender_validity) {
			cout << "Input M for male and F for female" << endl;
			cin >> gender;
			if (gender == 'M') {
				title = "Sir";
				gender_validity = true;
			}
			else if (gender == 'F') {
				title = "Madam";
				gender_validity = true;
			}
			else {
				cout << "That was not a correct character. Please input M for male or F for female" << endl;
			}
		}
		cout << "Thank you for your input, " << title << endl;
		cout << "Please input your weight in pounds, " << title << endl;
		cin >> weight;
		cout << "Thank you," << title << "You listed your weight as" << weight << "pounds" << endl;
		cout << "Please input your height in inches" << endl;
		cin >> height;
		cout << "You listed your height as " << height << " inches" << endl;
		cout << "Please input your age " << endl;
		cin >> age;
		cout << "You listed your age as " << age << " years young." << endl;
		if (gender == 'M') {
			BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
		}
		else if (gender == 'F') {
			BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
		}
		cout << "Your BMR is " << BMR << endl;
		chocolate_qty = BMR / 230;
		cout << "You can maintain your weight after eating " << chocolate_qty << " chocolate bars, " << title;
		cout << "Would you like to use this calculator again? Y for yes, N for no" << endl;
		cin >> run_again;
		if (run_again != 'Y' && run_again != 'y' && run_again != 'n' && run_again != 'N') {
			cout << "That is not a valid response, please answer Y or N" << endl;
		}
	} while (run_again == 'Y' || run_again == 'y');
	cout << "Thank you for using my calculator!" << endl;
	return 0;
}