#include<stdio.h>
int isLeapYear(int n);
int main(){
  int year,month;
  do{
  printf("Input the year: ");
  scanf("%d",&year);
  }while(year<0);
  do{
  printf("Input the month: ");
  scanf("%d",&month);
  }while(month<=0||month>12);
  if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
    printf("31 days\n");
  }
  else if(month==2){
    if(isLeapYear(year)){
      printf("29 days\n");
    }
    else{
      printf("28 days\n");
    }
  }
  else{
    printf("30 days");
  }

  
  return 0;
}
int isLeapYear(int n){
  if((n%4==0&&n%100!=0)||(n%400==0)){
    return 1;
  }
  return 0;
  
}
