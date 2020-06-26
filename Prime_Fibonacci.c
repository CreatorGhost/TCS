#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
#define PRIME 1
#define NOT_PRIME 0
#define UNIQUE 1
#define NOT_UNIQUE 0

int isPrime(int);
int combine(int,int);
int isUnique(int arr[], int size, int searchVal);

int main()
{
  int n1, n2, num, countForPrimes, countForCombi,outInd,inInd,fiboCtr;
  int *primesArr=NULL,primesArrInd;
  int *combiPrimesArr = NULL, combiPrimesArrInd;
  int combiVal, smallest, greatest;
  smallest = INT_MAX;
  greatest = INT_MIN;
  long long int term1, term2, term3;
  
  scanf("%d %d",&n1, &n2);
 
  primesArrInd = 0;
  countForPrimes = (n2 - n1 + 1)/2;
  primesArr = (int*)malloc(sizeof(int)*countForPrimes);

  for(num = n1; num<=n2; num++)
  {
    if(isPrime(num) == PRIME)
      primesArr[primesArrInd++]=num;
  }
  countForCombi = (primesArrInd*(primesArrInd - 1));
  combiPrimesArr = (int *)malloc(sizeof(int)*countForCombi);
  combiPrimesArrInd = 0;
  for(outInd = 0; outInd<primesArrInd; outInd++)
  {
    for(inInd = 0; inInd < primesArrInd; inInd++)
    {
      combiVal = combine(primesArr[outInd], primesArr[inInd]);
      	if(isPrime(combiVal) == PRIME
          && isUnique(combiPrimesArr, combiPrimesArrInd, combiVal) == UNIQUE)
        {
          if(combiVal < smallest)
            smallest = combiVal;
          if(combiVal > greatest)
            greatest = combiVal;

          combiPrimesArr[combiPrimesArrInd++] = combiVal;
        }
    }
  }

  term1=smallest;
  term2=greatest;
  term3=term1+term2;
  for(fiboCtr = 3; fiboCtr<combiPrimesArrInd; fiboCtr++)
  {
    term1=term2;
    term2=term3;
    term3=term1+term2;
  }

printf("%lld",term3);
free(primesArr);
free(combiPrimesArr);
  return 0;
}

int isPrime(int num)
{
  int checkFactor, until;

  if(num == 2 ||num ==3 || num == 5) return PRIME;
  if(num <=1||num%2==0) return NOT_PRIME;
   until = sqrt(num);
   for(checkFactor=3; checkFactor <= until; checkFactor+=2)
   	if(num % checkFactor == 0) return NOT_PRIME;

   return PRIME;
}

int combine(int num1, int num2)
{
  int power = 1, toProcess;
  toProcess = num2;
  
  while(toProcess!=0)
  {
    toProcess/=10;
    power*=10;
  }
  return num1*power + num2;
}
int isUnique(int arr[], int size, int searchVal)
{
  int ind;
  for(ind = 0; ind <size; ind++)
    if(arr[ind] == searchVal)return NOT_UNIQUE;
  return UNIQUE;
}
