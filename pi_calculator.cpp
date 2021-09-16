using namespace std;
#include <iostream>


int HowManyTerms(){
	int terms;
	cout <<  '\n' <<"How many terms do you want to use to calculate your pi?: ";
	cin >> terms;
	return terms;
}

float CalculatePi(int terms){
	float numerator = 4;
	float denominator = 1;
	float pi = 4;
	if (terms == 1){
		return pi;
	}
	for (int i = 1; i<terms; i++){
		denominator += 2; 
		numerator = (numerator * -1);
		pi += numerator/denominator;
	}
	return pi;
}

int main(){
	int terms;
	float pi;
	char anotherPI;
	cout << "Welcome to Atobiloye Olayinka PI Estimator." << endl;
	do{
	terms = HowManyTerms();
	pi = CalculatePi(terms);
	cout << "The value of PI for that amout of terms is " << pi << endl;
	cout << "Do you wish to estimate another value of PI? Enter Y or y for Yes: ";
	cin >> anotherPI;
	cout <<  endl << '\n';
	}while (anotherPI == 'Y' || anotherPI == 'y');
}