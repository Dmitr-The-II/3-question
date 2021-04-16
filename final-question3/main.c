// ===================================================================================
//
//  Final exam question 3
// 
//  Description: Main
//
// ===================================================================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "menu.h"

// -----------------------------------------------------------------------------------
// Function Prototypes
// -----------------------------------------------------------------------------------


// -----------------------------------------------------------------------------------
// Main: Entry-point to the application
// -----------------------------------------------------------------------------------
int main(void) {
	// sum of mins screen time and num of bytes for 4 people. 
// [0] - Billy Bob
// [1] - Sue Ellen
// [2] - Jimmy Joe
// [3] - Sally Sue
	double mins[3], screenTime[3];
	int bytes[3], choice;
	struct Phone phone[20] = { {0} };
	Main_menu(phone);
	for (int i = 0; i < 7; i++) {
		if (phone[i].name == "Billy Bob") {
			mins[0] += phone[i].callMinutes;
			screenTime[0] += phone[i].screenTime;
			bytes[0] += phone[i].dataBytes;
		}
		else if (phone[i].name == "Sue Ellen") {
			mins[1] += phone[i].callMinutes;
			screenTime[1] += phone[i].screenTime;
			bytes[1] += phone[i].dataBytes;
		}
		else if (phone[i].name == "Jimmy Joe") {
			mins[2] += phone[i].callMinutes;
			screenTime[2] += phone[i].screenTime;
			bytes[2] += phone[i].dataBytes;
		}
		else if (phone[i].name == "Sally Sue") {
			mins[3] += phone[i].callMinutes;
			screenTime[3] += phone[i].screenTime;
			bytes[3] += phone[i].dataBytes;
		}
	}
	
		printf("Select one of the following options :\n0 - Exit\n1 - Show users by call duration\n2 - Show users by data usage\n3 - Show users by screen time\n4 - Show all user data\n");
		
		while (1) {
			scanf("%d", &choice);
			switch (choice) {
			case 1:
				call_duration();
			case 2:
				data_usage();
			case 3:
				screen_time();
			case 4:
				all_user_data();
			case 0:
				break;
			default:
				printf("ERROR, please try again!\n");
			}


		}
		printf("\nGoodbye.\n");
		
}