#include<stdio.h>
#include<time.h>

//Write a program using structures, which asks the user to enter two time intervals in hours, minutes and seconds, 
//and then calculates the difference between the two time intervals entered by the user. 
//Use the functions given below to get the time information, print the time information and calculate the difference. 
//Type identification should be done for TIME. 
//void scanTime (TIME * t); 
//void printTime (const TIME * t); 
//void difference (TIME t1, TIME t2, TIME * diff);

struct Time{
	
	int hour;
	int minute;
	int second;
	
};

void printTime(struct Time t11,struct Time t22);
void scanTime(struct Time);
void difference(struct Time t111,struct Time t222);

void _scanTime(struct Time t,struct Time t2){
	
	
	printf("Enter a time expressed as hh:mm:ss format.\n");
    
    scanf("%02d%02d%02d",&t.hour,&t.minute,&t.second);
	
	printf("Enter a time expressed as hh:mm:ss format.\n");
	
    scanf("%02d%02d%02d",&t2.hour,&t2.minute,&t2.second);

	printTime(t,t2);
}

void printTime(struct Time t11,struct Time t22){
	
	printf("Time 1=%02d:%02d:%02d\n",t11.hour,t11.minute,t11.second);
	printf("Time 2=%02d:%02d:%02d\n",t22.hour,t22.minute,t22.second);
	difference(t11,t22);
}

void difference(struct Time t111,struct Time t222){
	
	int d_h=t111.hour-t222.hour;
	int d_m=t111.minute-t222.minute;
	int d_s=t111.second-t222.second;
	
	printf("Difference between time one and time two: %02d:%02d:%02d",d_h,d_m,d_s);
	
}
int main(){
	
    struct Time time1,time2;
    
    _scanTime(time1,time2);
    

	return 0;
}
