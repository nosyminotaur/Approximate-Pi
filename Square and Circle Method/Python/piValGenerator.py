import random
import math
import os

max_range = 100000000
square_length = 1
radius = square_length/math.sqrt(2)
#print (radius)
piNumerator = 0

random.seed(os.urandom(1024))
print ("Calculating...")

for i in range (max_range):
    random_x = random.random()
    random_y = random.random()
    #print ("Random value is: ", random_x)
    distance = math.sqrt(random_x*random_x + random_y*random_y)
    #print (distance)
    if (distance <= radius):
        piNumerator += 1

print ("Value of pi approximated: ", 8 * piNumerator / max_range)