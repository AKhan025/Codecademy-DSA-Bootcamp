#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double mathsGrade;
    double physicsGrade;
    double chemistryGrade;
    
    cin >> mathsGrade;
    cin >> physicsGrade;
    cin >> chemistryGrade;
    
    double avgGrade = (mathsGrade + physicsGrade + chemistryGrade) / 3;
    cout << "Final Percentage: " << fixed << setprecision(2) << avgGrade << "%" << endl;
    
    string status;
    string letterGrade;
    
    if (mathsGrade < 40 || physicsGrade < 40 || chemistryGrade < 40) {
        letterGrade = "F";
        status = "Fail";
    } else if (avgGrade >= 90) {
        letterGrade = "A";
        status = "Pass";
    } else if (avgGrade < 90 && avgGrade >= 80) {
        letterGrade = "B";
        status = "Pass";
    } else if (avgGrade < 80 && avgGrade >= 70) {
        letterGrade = "C";
        status = "Pass";
    } else if (avgGrade < 70 && avgGrade >= 60) {
        letterGrade = "D";
        status = "Pass";
    } else if (avgGrade < 60) {
        letterGrade = "F";
        status = "Pass";
    }

    cout << "Status: " << status << endl;
    cout << "Letter Grade: " << letterGrade << endl;
}
