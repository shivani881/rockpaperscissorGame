#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
char systemchoice(){
int num;
srand(time(NULL));
num = rand()%3+1;
if(num==1){
return 'r';
}
else if(num==2){
return 'p';
}
else{
return 's';
}
}
//Winner function
 void Winner(char user , char system){
 if(user == system){
 printf("\n ** Tie **");
 }
  else if(system == 'r'){
       if(user == 'p'){
       printf("\n ** User Win **");
       }
       else if(user == 's'){
       printf("\n  ** System Win **");
       }
    }
    else if(system == 's'){
       if(user == 'r'){
       printf("\n ** User Win **");
       }
       else if(user == 'p'){
       printf("\n  ** System Win **");
       }
    }
  else if(system == 'p'){
       if(user == 'r'){
       printf("\n ** System Win **");
       }
       else if(user == 's'){
       printf("\n  ** User Win **");
       }
    }
    else{
    printf("\n Something Wrong in your Game");
    }
}

void main(){
char user,system,ch;
clrscr();
while(1){
clrscr();
printf("*** Welcome to Rock , Paper & Scissor Game ***");
printf("\n Here, Rock = 'r', Paper = 'p' & Scissor = 's'");
//User Turn
printf("\nTell me your choice ");
fflush(stdin);
scanf("%c" ,&user);
while(user!='r' && user!='p' && user!='s'){
printf("\n please choose valid option :");
fflush(stdin);
scanf("%c" , &user);
}
if(user=='r'){
printf("\n user choose Rock");
}
  else if(user=='p'){
  printf("\n user choose Paper");
  }
else{
  printf("\n user choose Scissor");
}
//System Turn
system = systemchoice();
if(system == 'r'){
printf("\n system choose Rock");
}
else if(system == 'p'){
printf("\n system choose paper");
}
else{
printf("\n system choose scissor");
}
//Winner?
Winner(user,system);
printf("\n Do you want to play again?");
printf("\n IF yes then type 'y' or IF no then type 'n': ");
fflush(stdin);
scanf("%c" , &ch);
if(ch=='y')
{
}
else if(ch=='n'){
break;
}
else{
printf("\n Your choice does not match correctly :(");
break;
}
getch();
}//end of loop
getch();
}