# Taking Input
n1,n2=map(int,input().split())

## Fucntion To Find Prime Number
def prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True


# Finding All Prime Number between The given range
pr = []		# To store all the prime nuber
for i in range(n1, n2 + 1):
    if prime(i) == True:
        pr.append(i)


## Make all possible unique combinations of numbers from the prime numbers list you found in step 1. 
l = []
for i in range(0, len(pr)):
    for j in range(0, len(pr)):
        if i != j:
            temp = str(pr[i]) + str(pr[j])

            l.append(temp)
l = list(set(l)) # Using This To Remove All Duplicates
l = list(map(int, l))	# Converting Back To List



#  From this new list, again find all prime numbers.

new = []
for i in l:
    if prime(i) == True:
        new.append(i)

# Find smallest (a) and largest (b) number from the 2nd generated list, also count of this list.

a = min(new)
b = max(new)
count=len(new)-2

for i in range(count):
    c = a + b
    a = b
    b = c

print(b,end="")
