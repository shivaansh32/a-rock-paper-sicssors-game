#include<iostream>
#include<ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void showwinner(char player,char computer);

int main(){
 char player;
 char computer;
   player= getuserchoice();
    std::cout<<"You have chosen :";
   showchoice(player);
   std::cout<<'\n';
   computer=getcomputerchoice();
   std::cout<<"computer have chosen :";
   showchoice(computer);
   std::cout<<'\n';
   std::cout<<"************";
   std::cout<<'\n';
   showwinner(player,computer);
   
    return 0;
}
 char getuserchoice(){
    char player;
   do 
   {
     std::cout<<"what is your choice\n";
     std::cout<<"1. 'r' for rock \n";
     std::cout<<"2.'p' for paper\n";
     std::cout<<"3.'s ' for sissor\n";
     std::cin>>player;
    
   } while (player!='r'&& player!='s'&& player!='p');
   return player;
     }


void showchoice(char choice){
    
    switch (choice)
    {
    case 'r' :std::cout<<"Rock";
        break;
      case 'p': std::cout<<"Paper";
      break;
      case 's': std::cout<<"sissors";
    break;
    default: std::cout<<"error!";
    }
}
 char getcomputerchoice(){
    srand(time(0));
     int num =rand()%3+1;

     switch(num){
        case 1: return 'r';
        break;
        case 2: return 's';
        break;
        case 3: return 'p';
        break;
        default: std::cout<<"yoou have  an err or in the program";
     }
 }
 void showwinner(char player,char computer){
    switch(player){
        case 'r': if(computer=='r'){
            std::cout<<"its a tie'\n'";
        }
            else if(computer=='p'){
                std::cout<<"you win'\n'";
            }
            else{
                std::cout<<"you lost'\n";
            }
            break;
        case 's': if(computer=='r'){
            std::cout<<"its a lost'\n'";
        }
            else if(computer=='p'){
                std::cout<<"you win'\n'";
            }
            else{
                std::cout<<"its a tie'\n";
            }
            break;
        case 'p': if(computer=='r'){
            std::cout<<"it a won'\n'";
        }
            else if(computer=='p'){
                std::cout<<"its a tie'\n'";
            }
            else{
                std::cout<<"you lost'\n";
            }
            break;
            }
        }
    
 

  