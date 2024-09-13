#include <iostream>
#include <string>

using namespace std;

// Function to calculate weekly carbon emissions based on dietary choice
double calculateCarbonEmissions(string diet, int frequency) {
    double emissionFactor;
    
    // Emission factors in kg CO2e per meal (illustrative values)
    if (diet == "vegan") {
        emissionFactor = 2.9; // Approximate value for vegan diet
    } else if (diet == "vegetarian") {
        emissionFactor = 3.8; // Approximate value for vegetarian diet
    } else if (diet == "non-vegetarian") {
        emissionFactor = 5.9; // Approximate value for non-vegetarian diet
    } else {
        cout << "Invalid dietary option. Defaulting to non-vegetarian." << endl;
        emissionFactor = 5.9;
    }
    
    // Calculate weekly emissions
    return emissionFactor * frequency;
}

int main() {
    string name, gender, diet;
    int age, height, frequency;
    
    // Collect user information
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your gender: ";
    cin >> gender;
    
    cout << "Enter your height (in cm): ";
    cin >> height;
    
    cout << "Enter your dietary preference (vegan/vegetarian/non-vegetarian): ";
    cin >> diet;
    
    cout << "How often do you consume this diet in a week (number of meals): ";
    cin >> frequency;
    
    // Calculate carbon emissions
    double weeklyEmissions = calculateCarbonEmissions(diet, frequency);
    
    // Output the result
    cout << "\nHello, " << name << "!" << endl;
    cout << "Based on your dietary preference, your estimated carbon emissions for a week are: "
         << weeklyEmissions << " kg CO2e." << endl;
    
    return 0;
}
