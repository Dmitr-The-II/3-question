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
	struct Phone phone[20] = { {0} };
	Main_menu(phone);
	
		printf("Select one of the following options :\n0 - Exit\n1 - Show users by call duration\n2 - Show users by data usage\n3 - Show users by screen time\n4 - Show all user data\n");
		
		/*while (a == 0) {
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
				a = 0;
			default:
				printf("ERROR, please try again!\n");
			}


		}*/
		printf("\nGoodbye.\n");
		
}