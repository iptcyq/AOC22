#pre-processing
file = open("aoc22day1.txt",'r')
data = file.read()
file.close()

elves = data.split("\n\n")
calories = []
for elf in elves:
  calorie = elf.split("\n")
  calories.append(calorie)
  #print(calories)
  
#solution
e = []
for elf in calories:
  sum = 0
  for food in elf:
    sum += int(food)
  e += [int(sum)]
  
mostCal = 0
for i in range(3):
  mostCal += max(e)
  e.pop(e.index(max(e)))

print(mostCal)