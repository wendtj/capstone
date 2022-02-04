#include <iostream>
#include <random>
#include <cmath>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{	
	int computerSeed;
	cout<<"Insert number seed for the computer rng\n";
	cin>>computerSeed;
	srand(computerSeed);
		
	while (true) {
		string playerChoice;
		cout<<"Choose: rock, paper, or scissors\n";
		cin>>playerChoice;
	
		int computerChoiceInt=rand()%3;
		
		string computerChoiceStr;
		switch (computerChoiceInt){
			case 0:
			computerChoiceStr="rock";
			break;
			case 1:
			computerChoiceStr="paper";
			break;
			case 2:
			computerChoiceStr="scissors";
			break;
			default:
			computerChoiceStr="broken";
			break;
			}		
		
		cout<<"\n\nPLAYER CHOICE: "<<playerChoice<<"\n";
		cout<<"COMPUTER CHOICE: "<<computerChoiceStr<<"\n\n";
		
		if (playerChoice==computerChoiceStr) {
			cout<<"Tie";
		}
		if (playerChoice=="rock"&&computerChoiceStr=="scissors") {
		cout<<"Player win";
		}
		if (playerChoice=="paper"&&computerChoiceStr=="rock") {
		cout<<"Player win";
		}
		if (playerChoice=="scissors"&&computerChoiceStr=="paper") {
		cout<<"Player win";
		}
		if (computerChoiceStr=="rock"&&playerChoice=="scissors") {
		cout<<"Computer win";
		}
		if (computerChoiceStr=="paper"&&playerChoice=="rock") {
			cout<<"Computer win";
		}
		if (computerChoiceStr=="scissors"&&playerChoice=="paper") {
		cout<<"Computer win";
		}
		
		cout<<"\n...\n";
	}	
}		