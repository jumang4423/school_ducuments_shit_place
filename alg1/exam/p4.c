#include<stdio.h>
#define MAX 1000000

int main()
{
  //input
  long long int S, T,answer = 0, f=0;
  S = MAX;
  T = MAX;
  long long int fuckcoredump[MAX];
  for(long long int i=0; i<MAX-1; i++) scanf("%lld", &fuckcoredump[i]);
  return 0;
  
  int Tt[1000000];
  for(int i=0; i<T; i++) scanf("%d", &Tt[i]);

  int ans[1000000];
  //calc
  for(int i=0; i<T; i++)
    {
      for(int j=0; j<S; j++)
	{
	  if(Tt[i] == fuckcoredump[j])
	    {
	      ans[answer] = Tt[i];
	      answer+=1;
	      break;
	    }
	}
    }
  for(int i=0; i<answer; i++)
    {
      if(ans[i]>f) f = ans[i];
    }
  printf("%d\n", f);
  return 0;
  }
