#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numClasses;
    cout << "How many classes have you taken (Press enter after input): ";
    cin >> numClasses;

    vector<string> classes(numClasses);
    for(int i = 0; i < numClasses; i++){ //Loops through and stores each class in a vector
        cout << "What is class # " << (i + 1) << ": ";
        cin >> classes[i];
    }
    
    vector<int> classCredits(numClasses);
    double totalClassPoints = 0.0;

    for(int i = 0; i < numClasses; i++){ //Loops through and stores an int for the credits for each class
        cout << "How many credits is " << classes[i] << " : ";
        cin >> classCredits[i]; 
        totalClassPoints += classCredits[i] * 4;
    }

    vector<int> gpa(numClasses);
    double totalGPAPoints = 0.0;
    //Stores earned GPA for each class
    for(int i = 0; i < numClasses; i++){ //Loops through and stores an int for the gpa earned for each class
        cout << "What was your GPA earned in " << classes[i] << " : ";
        cin >> gpa[i];
        totalGPAPoints += gpa[i] * classCredits[i];
    }

    //List all classes and GPA earned
    for(int i = 0; i < numClasses; i++){
        cout << "Class: " << classes[i] << " \n\tGPA: " << gpa[i] << "\n";
    }

    //Print final GPA to terminal
    cout << "Your GPA is " << ((totalGPAPoints / totalClassPoints) * 4);
}