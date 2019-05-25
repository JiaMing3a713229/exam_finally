#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
enum LED{
	
	GREEN_ON,
	GREEN_FLASHING,
	GREEN_OFF,
	RED_ON,
	RED_OFF
};

enum LED state=GREEN_ON;
int sec=0;

void green_on(){
	if(sec==1){
		printf("ºñ¿O«G¤F\n");
	}
}
void green_flashing(){
	if(sec==1){
		printf("ºñ¿O°{¤F\n");
	}
}
void green_off(){
	if(sec==1){
		printf("ºñ¿OÃö¤F\n");
	}
}
void red_on(){
	if(sec==1){
		printf("¬õ¿O«G¤F\n");
	}
}
void red_off(){
	if(sec==1){
		printf("¬õ¿OÃö¤F\n");
	}
}
int main(void){
	
	while(true){
		switch(state){
			case GREEN_ON:
				green_on();
				if(sec>=5){
					state=GREEN_FLASHING;
					sec=0;
				}
				break;
			case GREEN_FLASHING:
				green_flashing();
				if(sec>=3){
					state=GREEN_OFF;
					sec=0;
				}
				break;
			case GREEN_OFF:
				green_off();
				state=RED_ON;
				sec=0;
				break;
			case RED_ON:
				red_on();
				if(sec>=5){
					state=RED_OFF;
					sec=0;
				}
				break;
			case RED_OFF:
				red_off();
				state=GREEN_ON;
				sec=0;
				break;
				
		}
		Sleep(1000);
		sec++;
	}
	system("pause");
	return 0;
}
