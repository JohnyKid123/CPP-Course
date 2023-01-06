#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
 
void gotoxy(int x, int y)
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 
 
COORD pos;
 
pos.X = x;
pos.Y = y;
 
SetConsoleCursorPosition(hConsole,pos);
}
 
int main(){
 
int a,b,c,d,e;
 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
gotoxy(20,12); cout << "Enter Number : ";
cin >>a;
 
gotoxy(20,16);
 
if (a==0){
switch (a)
case 0:
cout << " zero";}
 
 
e=a/1000;
 
if (e>=1 && e<10){
 
switch (e){
case 1:
cout << "one thousand "; break;
case 2:
cout << "two thousand "; break;
case 3:
cout << "three thousand "; break;
case 4:
cout << "four thousand "; break;
case 5:
cout << "five thousand "; break;
case 6:
cout << "six thousand "; break;
case 7:
cout << "seven thousand "; break;
case 8:
cout << "eight thousand "; break;
case 9:
cout << "nine thousand "; break;}
 
e=e*1000;}

a=a-e;
d=a/100;
 
if (d>=1 && d<10){
 
switch (d){
case 1:
cout << "one hundred "; break;
case 2:
cout << "two hundred "; break;
case 3:
cout << "three hundred "; break;
case 4:
cout << "four hundred "; break;
case 5:
cout << "five hundred "; break;
case 6:
cout << "six hundred "; break;
case 7:
cout << "seven hundred "; break;
case 8:
cout << "eight hundred "; break;
case 9:
cout << "nine hundred "; break;}
 
d=d*100;}
 
a=a-d;
b=a/10;
 
if (b>=2 && b<10){
 
switch (b){
case 2:
cout << "twenty"; break;
case 3:
cout << "thirty"; break;
case 4:
cout << "fourty"; break;
case 5:
cout << "fifty"; break;
case 6:
cout << "sixty"; break;
case 7:
cout << "seventy"; break;
case 8:
cout << "eighty"; break;
case 9:
cout << "ninety"; break;}
 
 
b=b*10;}
  
c=a-b;
 
if (c>=1 && c<10){
 
switch (c){
case 1:
cout << " one"; break;
case 2:
cout << " two"; break;
case 3:
cout << " three"; break;
case 4:
cout << " four"; break;
case 5:
cout << " five"; break;
case 6:
cout << " six"; break;
case 7:
cout << " seven"; break;
case 8:
cout << " eight"; break;
case 9:
cout << " nine"; break;}
}
 
if (a>=10 && a<20){
 
switch (a){
case 10:
cout << "ten"; break;
case 11:
cout << "eleven"; break;
case 12:
cout << "twelve"; break;
case 13:
cout << "thirteen"; break;
case 14:
cout << "fourteen"; break;
case 15:
cout << "fifteen"; break;
case 16:
cout << "sixteen"; break;
case 17:
cout << "seventeen"; break;
case 18:
cout << "eighteen"; break;
case 19:
cout << "nineteen"; break;}
}
getch ();
}
