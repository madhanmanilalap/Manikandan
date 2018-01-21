#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter value a");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
printf("Vowel");
else
printf("Consonant");
getch();
}
