#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,sum;
float per;
printf("Enter the marks scored by student in all the 5 subjects -\n ");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
sum = m1+m2+m3+m4+m5;
per = sum/5.0;
printf("\nThe sum of marks is %d and the percentage is %f",sum,per);




  return 0;
}
