// Jovanni Sanchez
// Lab 2
// September 17, 2024

#include <iostream>
#include <string>
using namespace std;

int main(){
    string cerealName; // This will be used to store the cereal's name
    int cerealCalories; // This will be used to store the cereal's calories
    double cerealOunces; // This will be used to store the cereal's ounces

    // Get user input to find out the cereal's name
    cout << "What is the name of your cereal?: ";
    cin >> cerealName;

    // Get user input to find out the cereal's name
    cout << "How many ounces of cereal do you have?: ";
    cin >> cerealOunces;

    // Get user input to find out the cereal's name
    cout << "How many calories are in one serving?: ";
    cin >> cerealCalories;
    cout << "\n"; // An enter to make the output look pretty

    cout << "One serving of " << cerealName << " is " << cerealOunces << " ounces and has ";
    cout << cerealCalories << " calories per ounces." << "\n";

    //This is the start of part 2
    int desiredCalories; // This will be used to store the desired calories
    const double CALORIE2OUNCE_CONVERSION_RATE = 0.004571; // This wont change, so its a const. 
    // There is 0.004571 ounces/calorie. 

    // Get user input to how many calories are desired in order to 
    // Divide it by the convertion rate in order to get ounces
    cout << "How many calories of " << cerealName << " are you willing to eat today?: ";
    cin >> desiredCalories;
    cout << "This is how many ounces you should eat if you want " << desiredCalories;
    cout << " calories: " << desiredCalories * CALORIE2OUNCE_CONVERSION_RATE << " ounces";                                                    

    return 0;
}