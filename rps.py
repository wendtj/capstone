import random
import time

while True:
	playerChoice = input("Rock, Paper, or Scissors? (all lowercase)")
	if playerChoice!="rock" and playerChoice!="paper" and playerChoice!="scissors":
		print("you picked incorrect")
	else:

		computerChoice = random.randint(1,3)
		if computerChoice==1:
			computerChoice="rock"
		if computerChoice==2:
			computerChoice="paper"
		if computerChoice==3:
			computerChoice="scissors"

		time.sleep(0.5)
		print("Player Chose: ",playerChoice)
		time.sleep(0.5)
		print("Computer Chose: ",computerChoice)
		time.sleep(0.5)

		if playerChoice==computerChoice:
			print("tie")
		if playerChoice=="rock" and computerChoice=="paper":
			print("lose")
		if playerChoice=="paper" and computerChoice=="scissors":
			print("lose")
		if playerChoice=="scissors" and computerChoice=="rock":
			print("lose")
		if playerChoice=="rock" and computerChoice=="scissors":
			print("win")
		if playerChoice=="paper" and computerChoice=="rock":
			print("win")
		if playerChoice=="scissors" and computerChoice=="paper":
			print("win")
	
		for x in range(0,3):
			time.sleep(0.5)
			print(".")