#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


/*functions: 


mergeSchedules(){} //takes schedule from both people & creates single schedule to find out when both persons are available.
possibleAvailabilities(){} // returns a list of time ranges when both individuals have availability
matchedAvailabilities(){} //returns the available time slots that are long enough to hold a meeting of the duration

*/

int main(){

    ifstream inputFile; 
    int durationMeeting; 
    string person1_Schedule, person2_Schedule,
        person1_DailyAvail, person2_DailyAvail;  
    


     inputFile.open ("Input.txt"); 
     if (inputFile.fail()) {
        cout << "Error opening file." << endl;
        exit(1);
    }

    cout << "Enter person1_Schedule = "; 
    getline(inputFile, person1_Schedule); 
    cout << "Enter person2_Schedule = "; 
    getline(inputFile, person2_Schedule);  
    cout << "Enter person1_DailyAvailability =  "; 
    getline(inputFile, person1_DailyAvail);
    cout << "Enter person2_DailyAvailability = "; 
    getline(inputFile, person2_DailyAvail); 
   cout << "Enter duration_of_meeting = ";
    inputFile >> durationMeeting; 

    inputFile.close(); 

    ofstream outputFile("Output.txt"); 
    if (outputFile.fail()) {
        cout << "Error opening file." << endl;
        exit(1);
    }
    //Now writing data to the file
    outputFile << "[";
    for(int i = 0; i  , i++;){

    }
    outputFile << "]"; 


    outputFile.close(); 

    return 0; 
}