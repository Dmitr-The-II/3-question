#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "menu.h"

void Main_menu(struct Phone *phone) {
	// sum of mins screen time and num of bytes for 4 people. 
	// [0] - Billy Bob
	// [1] - Sue Ellen
	// [2] - Jimmy Joe
	// [3] - Sally Sue
	double mins[3], screenTime[3];
	int bytes[3];
	FILE* f;
	f = fopen("phoneln.txt", "rt");
	for(int i = 0; i < 7; i++) {
		fscanf(f, "%[^|]|%[^|]|%f|%d|%f", &phone[i].name, &phone[i].callNumber, &phone[i].callMinutes, &phone[i].dataBytes, &phone[i].screenTime);
		}
	
	/*fclose(f);
	for (int i = 0; i < 7;++i) {
		printf("\n%s ?  %s ? %2.1f ? %d ? %2.1f\n", phone[i].name, phone[i].callNumber, phone[i].callMinutes, phone[i].dataBytes, phone[i].screenTime);
	}*/
	
	//
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

	//printf("\n\n%s", phone[6].callNumber);
	//
	/*while (1) {
		for (int i = 0; i < 7; i++) {

			for (int a = 0; a < 7; a++) {
				if (phone[i].name == phone[a].name) {
					count[i]++;
				}

			}
		}
		break;
	}
	for (int i = 0; i < 7; i++) {
		printf("\n%d", count[i]);
	}*/
	


}
