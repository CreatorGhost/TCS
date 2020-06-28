'''
Taking Input
'''

cars = []
car = int(input())
for i in range(car):
    n = list(map(int, input().split()))
    cars.append(n)








'''
Finding Time At which they collide
'''

collide = []
for j in cars:
    x = j[0]
    y = j[1]
    speed = j[2]

    time = ((x * x) + (y * y)) / (speed * speed)
    collide.append(time)


"""
Counting Collision
"""



collide = sorted(collide)
# sort(collide)
i = 0
c = 0
p = 0
while i < len(collide) - 1:
    if collide[i] == collide[i + 1]:
        c += 1
        p = c + p
    else:
        c = 0
    i += 1

print(p)
