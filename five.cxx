#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int playerNumber;
int computerNumber;
void printScore() {
	cout<<"\nPlayer number is: "<<playerNumber<<"\nComputer Number is: "<<computerNumber<<"\n\n";
}

string previousPlayerMove;
void playerMove() {
	cout<<"What is your move?\n";
	if (playerNumber%2==0) {
		cout<<"Your options are: ,half-self, ,add-one-self, or ,add-one-computer,\n(Answer must be EXACTLY as spelled in previous line)\n\n";
		cin>>previousPlayerMove;
	}
	else {
		cout<<"Your options are: ,add-one-self, or ,add-one-computer,\n(Answer must be exactly as spelled in previous line)\n\n";
		cin>>previousPlayerMove;	
	}
}

int main(int argc, char *argv[])
{
	std::this_thread::sleep_for (std::chrono::seconds(1));
	cout<<"The aim of this game is to get the opponent to 0\nIf you get 0, you lose\n\n";
	std::this_thread::sleep_for (std::chrono::seconds(5));
	cout<<"You have three play choices\nIf score is more than or equal to 5, 5 will be subtracted\n\n";
	std::this_thread::sleep_for (std::chrono::seconds(5));
	cout<<"The game has started\n";
	std::this_thread::sleep_for (std::chrono::seconds(1));
	
	playerNumber = 1;
	computerNumber = 1;
	int previousComputerMove;
	
	while (playerNumber!=0&&computerNumber!=0){
		
		printScore();
		
		playerMove();
		
		if (playerNumber%2==0&&previousPlayerMove=="half-self"){
			playerNumber=playerNumber/2;
		}
		else if (previousPlayerMove=="add-one-self"){
			playerNumber=playerNumber+1;
		}
		else if (previousPlayerMove=="add-one-computer"){
			computerNumber=computerNumber+1;
		}
		
		previousComputerMove=((playerNumber+computerNumber)*7)%3;
		switch (previousComputerMove){
			case 0:
				if (computerNumber%2==0){
					computerNumber=computerNumber/2;
				}
				else {
					computerNumber=computerNumber+1;
				}
				break;
			case 1:
				playerNumber=playerNumber+1;
				break;
			default:
				computerNumber=computerNumber+1;
		}
		
		if (computerNumber>=5){
			computerNumber=computerNumber%5;
		}
		if (playerNumber>=5){
			playerNumber=playerNumber%5;
		}
	}
	
	printScore();
	
	if (computerNumber==0){
		cout<<"\n\nPlayer won";
	}
	else {
		cout<<"\n\nComputer won";
	}
}