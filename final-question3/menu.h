#ifndef MENU_
#define MENU_
 struct Phone {
	char name[15];
	char callNumber[11];
	float callMinutes;
	int dataBytes;
	float screenTime;

};
void Main_menu(struct Phone *phone);
#endif MENU_