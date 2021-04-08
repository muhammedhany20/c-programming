#include <stdio.h>
#include <stdlib.h>
 struct _retire_info {
  int months;
  double contribution;
   double rate_of_return;};
typedef struct _retire_info retire_info;
void retirement (int startAge,   //in months
		 double initial, //initial savings in dollars
		 retire_info working, //info about working
		 retire_info retired) //info about being retired
{   //working time
  printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
    for (int i=1;i<=working.months;i++)
 
      {
	double increase=initial*working.rate_of_return;
	initial+=increase;
	initial+=working.contribution;
        startAge+=1;
	printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
      }
    for (int i=1;i<retired.months;i++)

      {   
	double increase=initial*retired.rate_of_return;
	initial+=increase;
	initial+=retired.contribution;
	startAge+=1;
	printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
      }
}
int main (){
  retire_info working,retired;
  working.months=489;
  working.contribution=1000;
  working.rate_of_return=0.045/12;
  retired.months=384;
  retired.contribution=-4000;
  retired.rate_of_return=.01/12;
  retirement(327,21345,working,retired);


  return 0;

}
