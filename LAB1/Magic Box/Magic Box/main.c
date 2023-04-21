#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
 int row,col,value;
 int size;
  printf("please enter size odd:");
  scanf("%d",&size);
  row=1;
  col=(size+1) /2;    // عشان اقدر اقولو اليعمود الي ف النص
  value=1;
 do{
    gotoxy(col*3,row);
    printf("%3d",value);
    if(value%size==0)
    row++;   //عشان انزل لتحت
    else{
    row--; //عشان امشي للجنب
    col--; //عشان اطلع فوق
        }
    if(row==0) row =size;
    if(col==0) col =size;
    value++;
 }
 while(value <= size*size);
}



COORD coord={0,0};
void gotoxy(int x, int y){
    COORD coord;    coord.X = x;    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
