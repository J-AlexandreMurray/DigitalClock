/* This is an application to illustrate a working, usable digital clock 
and starts from the entered time continuously. */

/*  */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>

using namespace std;   // I want to attempt changing this at a later point to prevent falling into bad practice habits with excessive use. 

// Main code

int main()
{
	system("color 5F");  // Need to figure out better  foreground and background color scheme
	
	// Input from user to set current time parameters
	int hour, min, sec;
	cout << setw(70)
	        << "*Please enter current time*\n";
	cout << "HH - ";
	cin >> hour; 
	
	cout << "MM - ";
	cin >> min;
	
	cout << "SS - ";
	cin >> sec;
	
	// Foreground and Background color for the second screen
	system("color 5F");
	
	// This will handle incorrect time parameters
	if (hour > 23) {
		cout << "That is incorrect";
	}
	if (min > 60) {
		cout << "That is incorrect";
	}
	if (sec > 60)  {
		cout << "That is incorrect";
	}
	
	// This is for any other case than what does not pass the suitable parameters
	else {
		while (1)
			// Run indefinitely
		{
			// Console is cleared
			system("cls");
			
			// Time Shown
			for (hour; hour < 24; hour++) {
				for (min; min < 60; min++) {
					for (sec; sec < 60; sec++) {
						system("cls");
						
						//  Output HH:MM:SS  columns
						cout << "\n\n\n\n============"
						              "======================="
									  "===================="
									  "Current Time = "
								<< hour << ":" << min << ":"
								<< sec
								<< "Hrs====================="
								     "========================"
									 "========";
						Sleep (1000);    //	We use this here to pause for approximately 1 second
					}
					sec = 0;
				}
			    min = 0;	
			}						 
	    }
	}
}	
	

