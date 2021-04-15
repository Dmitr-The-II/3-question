#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "menu.h"

void Main_menu(struct Phone *phone) {
	
	int count[7];
	FILE* f;
	f = fopen("phoneln.txt", "rt");
	for(int i = 0; i < 7; i++) {
		fscanf(f, "%[^|]|%[^|]|%f|%d|%f", &phone[i].name, &phone[i].callNumber, &phone[i].callMinutes, &phone[i].dataBytes, &phone[i].screenTime);
		}
	
	fclose(f);
	for (int i = 0; i < 7;++i) {
		printf("\n%s ?  %s ? %2.1f ? %d ? %2.1f\n", phone[i].name, phone[i].callNumber, phone[i].callMinutes, phone[i].dataBytes, phone[i].screenTime);
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
