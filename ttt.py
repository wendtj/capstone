import time
import math
import random

def computerValid():
	computerChoice=(str(computerRow),str(computerColumn))
	computerChoice = int("".join(computerChoice))
	print(computerChoice)
	findInput("O", computerChoice)
	
def printBoard(character):
	print("^ Player '",character,"' choice")
	print(".")
	print(rowOne)
	print(rowTwo)
	print(rowThree)
	print("^ Current board ^")
	for x in range(0,2):
		time.sleep(0.5)
		print(".")
		
def findInput(character, varInput):
	if (math.floor(varInput/10))==1:
		row = (varInput%10)-1
		rowOne[row]=character
		printBoard(character)
	if (math.floor(varInput/10))==2:
		row = (varInput%10)-1
		rowTwo[row]=character
		printBoard(character)	
	if (math.floor(varInput/10))==3:
		row = (varInput%10)-1
		rowThree[row]=character
		printBoard(character)

rowOne = ["11", "12", "13"]
rowTwo = [ "21", "22", "23"]
rowThree = ["31", "32", "33"]

printBoard("X")

playerInput=0
while True:
	playerInput = input()
	if playerInput=="break":
		break
	playerInput = int(playerInput)
	findInput("X", playerInput)
	
	time.sleep(2)
	
	computerChoice=0
	while True:
		computerRow=random.randint(1,3)
		computerColumn=random.randint(1,3)
		if computerRow==1 and rowOne[computerColumn-1]!="X" and rowOne[computerColumn-1]!="O":
			computerValid()
			break
		if computerRow==2 and rowTwo[computerColumn-1]!="X" and rowOne[computerColumn-1]!="O":
			computerValid()
			break
		if computerRow==3 and rowThree[computerColumn-1]!="X" and rowOne[computerColumn-1]!="O":
			computerValid()
			break