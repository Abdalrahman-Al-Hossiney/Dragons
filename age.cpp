#include <iostream>
using namespace std;
int main()
{
	cout << "====================================\n";
	cout << "== Calculate Your Age Application ==\n";
	cout << "====================================\n";

	int age;
	cin >> age;
	
	int age_in_days = age * 365;
	int age_in_hours = age_in_days * 24;
	int age_in_minutes = age_in_hours * 60;

	cout << "Age in Days Is: " << age_in_days << " Days\n";
	cout << "Age in Hours Is: " << age_in_hours << " Hours\n";
	cout << "Age in Minutes Is: " << age_in_minutes << " Minutes\n";

	return 0;
}