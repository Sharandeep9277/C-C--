import random

scoreAtul = 0
scoreDev = 0

askSize = input()
askList = input()

#creating list from input
listItem = askList.split()

#list item to int
for i in range(len(listItem)):
   listItem[i] = int(listItem[i]) 

#choosing random number
randomNumber = random.choice(listItem)

if randomNumber % 2 == 0 :
    scoreAtul = randomNumber
    listItem.remove(randomNumber) #removing random number
    
else :
    scoreDev = randomNumber
    listItem.remove(randomNumber) #removing random number
    

#chooseing next random number
nextRandomNum = randint(randomNumber, max(listItem))

if nextRandomNum % 2 == 0 :
    scoreAtul = scoreAtul + nextRandomNum
    listItem.remove(nextRandomNum) #removing random number
        
        
else : 
    scoreDev = scoreDev + nextRandomNum
    listItem.remove(nextRandomNum) #removing random number
        



