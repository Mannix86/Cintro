#include <stdio.h>

int main(){
double pi = 3.14; //1.
double ans1 = 0.0;
double x = 5;
double y = 9;
double z = 13;
double ans3 = 0;
double ans5 = 0;
double ans6 = 0;
float ans7 = 0;
float ans8 = 8;
int num1 = 3;
int num2 = 4;
int num3 = 5;
int num4 = 4;
int num5 = 22;
int num6 = 7;
int ans2 = 0;
int intx = 5;
int inty = 9;
int intz = 13;
int radius = 7;
int radius1 = 9;
int ans4 = 0;
int intz = 1234;
const char* str1 = "cake";
char char1 = ' ';
char char2 = ' ';
char char3 = ' ';
char char4 = ' ';




//2.
ans1 = pi*num1*num2;

printf("Section 2 = %f\n", ans1);

//3.
ans2 = num3 % num4;
printf("Section 3: is 5 mod 4 = %d\n", ans2);

//4.
// Part A created above
ans3 = z/y*x; //part b
printf("Section 4.B: %f\n", ans3);

ans4 = intz/inty*intx; // part c
printf("Section 4.c: %i\n", ans4);

//5.
ans5 = radius * radius * pi;
printf("Section 5: Area of circle with a radius of 7 = %f\n", ans5);

//6.
ans6 = radius1*radius1*radius1*pi*num2/num3;
printf("The volume of a sphere with radius 9 = %.2f\n", ans6);

//7.
ans7 = num5 / num6;

//8.
ans8 = pi-ans7;

//12.
char1 = str1[0];
char2 = str1[1];
char3 = str1[2];
char4 = str1[3];
printf("cake reversed = %c %c %c %c \n" , char4, char3, char2, char1);

//notes
double res = 0;
int one1 = 4, two2 = 10;

res = two2 / (double)one1;
printf("%d / %d = %.2f\n",two2 , one1, res);
//notes


//13.














}
