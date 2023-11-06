#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


/*functions: 


mergeSchedules(){} //takes schedule from both people & creates single schedule to find out when both persons are available.
possibleAvailabilities(){} // returns a list of time ranges when both individuals have availability
matchedAvailabilities(){} //returns the available time slots that are long enough to hold a meeting of the duration

*/

int main(){

    ifstream inputFile("Input.txt");
    ofstream outputFile("Output.txt"); 
    int durationMeeting = 0; 
    string person1_Schedule, person2_Schedule,
        person1_DailyAvail, person2_DailyAvail;  


    if (!inputFile.is_open()) {
    cerr << "Error opening the input file." << endl;
    return 1;
}


    getline(inputFile, person1_Schedule); 
    getline(inputFile, person1_DailyAvail);
    getline(inputFile, person2_Schedule);  
    getline(inputFile, person2_DailyAvail); 
    inputFile >> durationMeeting; 

   /* for(int numTestCases = 0; numTestCases < 10; numTestCases++){





    }

*/

    if (outputFile.fail()) {
        cout << "Error opening file." << endl;
        exit(1);
    }
    //Now writing data to the file
    outputFile << "[";
    outputFile << "]"; 

    inputFile.close(); 
    outputFile.close(); 

    cout << "person1_Schedule = " << person1_Schedule << endl;
    cout << "person1_DailyAct = " << person1_DailyAvail << endl;
    cout << "person2_Schedule = " << person2_Schedule << endl;
    cout << "person2_DailyAct = " << person2_DailyAvail << endl;
    cout << "duration_of_meeting = " << durationMeeting << endl;


    return 0; 
}

