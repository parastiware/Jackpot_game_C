#include<stdio.h>
#include <windows.h>
#include"mmsystem.h"
#include<time.h>
#include<conio.h>
#include <string.h>
#define ENTER 13
#define BKSP 8



int main() {
	PlaySound(TEXT("name.wav"),NULL,SND_SYNC);
	char pass[20],ch,c,pw[20]="system of a down";
    int start,cherry=2,apple=5,mango=10,pineapple=15,orange=40,melon=30,fbar=50,hbar=100,bet,guess,coins=20,jackpot,i,won,ntimes,get_result;
    int j=0,status;
    int arr[8]={2,5,10,15,40,30,50,100};
    printf("\t\t Full screen Recommended for better experience!!!");
    getch();
 printf("\nEnter password:\n");
while(1){

ch=getch();
if(ch==ENTER){
    pass[j]='\0';
    break;
}
else if(ch==BKSP){
if (j>0)
    {
j--;
    printf("\b \b");
continue;
}}
pass[j]=ch;

j++;
printf("*");
}

if ((strcmp(pass,pw)==0))

{
      printf("\nNamaste!");
        printf("\nEnter Required coins:\t");
       scanf("%d",&coins);
      system("cls");
   }
  else {
    printf("\nWrong password!\n Activating Guest mode............Press enter key....");
    getch();

  }
  system("cls");
  printf("1=How to play \n 2= Play\n");
  scanf("%d",&start);
  while(start!=2){
        system("cls");
    printf("\n First You are given 20 coins if you are guest.\n Then bet some coins on particular fruit\n The jackpot is then started! ");
    printf("\n If your selection is right then you will be given respective coins as bonus \n else the bet amount is deducted\n  Enjoy!");
printf("\nExample of selection:\n1=cherry(2)\nHere 1 is the number you can select cherry and 2 is the coins you can get if you won.\nEnjoy Playing jackpot!");
getch();
   system("cls");
   printf("\t1=How to play \n\n\t2= Play\n");
  scanf("%d",&start);
  }
  do{
    while(coins>0){
      status=1;
  system("cls");
  printf("\t Your Total coins=%d",coins);
  printf("\n\n1=cherry(2) \t2=apple(5) \t3=mango(10) \t4=pine apple(15) \t5=orange(40) \t6=melon(30) \t7=50 bar(50)\t8=100 bar(100)");
   printf("\n\nCherry(2)");//1,6,11,15,18,22
     printf("\npineapple(15)");//4
   printf("\napple(5)");//2
  printf("\nMango(10)");//3
  printf("\nMelon(30)");//6
  printf("\nCherry(2)");//1
  printf("\nFifty Bar!(50)");//7
  printf("\napple(5)");//2
   printf("\nMango(10)");//3
  printf("\npineapple(15)");//4
  printf("\nCherry(2)");//1
  printf("\nMelon(30)");//6
   printf("\nMango(10)");//3
  printf("\napple(5)");//2
  printf("\nCherry(2)");//1
  printf("\nHundred Bar!!!(100)");//8
   printf("\nMango(10)");//3
   printf("\nCherry(2)");//1
   printf("\npineapple(15)");//4
  printf("\norange(40)");//5
  printf("\nMelon(30)");//6
   printf("\nCherry(2)");//1
    printf("\napple(5)\n");//2

    printf("\n\n Enter your choice:\t");

    scanf("%d",&guess);
     while (guess>8 || guess<0 ){
        printf("Invalid choice!\n Retype Your choice.\t");
         scanf("%d",&guess);
     }
     if (guess==0){


        printf("\nChecking jackpot without any selection will cost 5 coinS!");
         bet=5;
           while (guess==0 && coins<5){
                printf("\nInsufficient Coins! ");
                printf("\nRe enter choice:\t");
                scanf("%d",&guess);
                 printf("\n Enter coins:\t");
                 scanf("%d",&bet);

            } }
     else{
    printf("\n Enter coins:\t");
    scanf("%d",&bet);}
    while (bet>coins || bet<0 || bet==0){
        printf("You cant bet larger than your total coins!\n Re enter coins\t");
        scanf("%d",&bet);
    }

    printf("\n Press enter for jackpot");
  getch();
	
jackpot=(rand()%23)+1;
for (i=1;i<=5;i++){
  printf("\n\nCherry(2)");
  system("cls");
  printf("\n\n\npineapple(15)");//2
  system("cls");
   printf("\n\n\n\napple(5)");//3
   system("cls");
  printf("\n\n\n\n\nMango(10)");//4
  system("cls");
  printf("\n\n\n\n\n\nMelon(30)");//5
  system("cls");
  printf("\n\n\n\n\n\n\nCherry(2)");//6
  system("cls");
  printf("\n\n\n\n\n\n\n\nFifty Bar!(50)");//7
  system("cls");
  printf("\n\n\n\n\n\n\n\n\napple(5)");//8
  system("cls");
   printf("\n\n\n\n\n\n\n\n\n\nMango(10)");//9
   system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\npineapple(15)");//10
  system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//11
  system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\nMelon(30)");//12
  system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nMango(10)");//13
   system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\napple(5)");//14
  system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//15
  system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHundred Bar!!!(100)");//16
  system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMango(10)");//17
   system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//18
   system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\npineapple(15)");//19
   system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\norange(2)");//20
  system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMelon(30)");//21
  system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//22
   system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\napple(5)\n");//23
    system("cls");
}



PlaySound(TEXT("coin.wav"),NULL,SND_SYNC); // do some tasks unrelated to result    


  
//mod

   printf("\n\nCherry(2)");//1
  if(jackpot==1)break; system("cls");
  printf("\n\n\npineapple(15)");//2
if(jackpot==2)break; system("cls");
   printf("\n\n\n\napple(5)");//3
  if(jackpot==3)break;system("cls");
  printf("\n\n\n\n\nMango(10)");//4
if(jackpot==4)break;system("cls");
  printf("\n\n\n\n\n\nMelon(30)");//5
 if(jackpot==5)break;system("cls");
  printf("\n\n\n\n\n\n\nCherry(2)");//6
if(jackpot==6)break;system("cls");
  printf("\n\n\n\n\n\n\n\nFifty Bar!(50)");//7
if(jackpot==7)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\napple(5)");//8
if(jackpot==8)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\nMango(10)");//9
if(jackpot==9)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\npineapple(15)");//10
 if(jackpot==10)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//11
  if(jackpot==11)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\nMelon(30)");//12
 if(jackpot==12)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\nMango(10)");//13
  if(jackpot==13)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\napple(5)");//14
  if(jackpot==14)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//15
  if(jackpot==15)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nHundred Bar!!!(100)");//16
  if(jackpot==16)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMango(10)");//17
if(jackpot==17)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//18
   if(jackpot==18)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\npineapple(15)");//19
if(jackpot==19)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\norange(2)");//20
 if(jackpot==20)break;system("cls");
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMelon(30)");//21
  if(jackpot==21)break;system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCherry(2)");//22
if(jackpot==22)break;system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\napple(5)\n");//23
   if(jackpot==23)break;system("cls");
  }
  if(jackpot==1 || jackpot==6 || jackpot==11 || jackpot==15 || jackpot==18 || jackpot==22){
    jackpot=1;}
 else if(jackpot==2 || jackpot==10 || jackpot==19 ){
    jackpot=4;}
else if(jackpot==3 || jackpot==8 || jackpot==14 || jackpot==23){
    jackpot=2;}
   else  if(jackpot==5 || jackpot==12 || jackpot==21){
    jackpot=6;}
  else   if(jackpot==4 || jackpot==9 || jackpot==13 || jackpot==17){
    jackpot=3;}
 else    if(jackpot==20){
    jackpot=5;}
  else   if(jackpot==16){
    jackpot=8;}
   if(guess==jackpot)
          {
           status=0;
           }
             won=bet*arr[guess-1];
   if (status==0){
     coins=coins+won;
        guess=jackpot;
     printf("\nYou won %d coins",won);
     	PlaySound(TEXT("won.wav"),NULL,SND_SYNC);
  }


  if(status==1)
  {
    printf("\nYou loose Rs. %d",bet);
    coins=coins-bet;
  }



  getch();
  system("cls");
}
while(coins>0);
  getch();
	return 0;
}
