#include<stdio.h>

int main()
{
  int A[201],N, swap;
  N= 201;
  for(int i=0; i<N; i++)
    {
      scanf("%d", &A[i]);
    }

  //calc
  for(int i=0; i<N; i++)
    {
      for(int j=N-1; j>=i+1; j--)
	{
	  if(A[j] < A[j-1])
	  {
	    swap=A[j];
	    A[j] = A[j-1];
	    A[j-1] = swap;
	  }
	}
    }

  
  printf("%d", (A[N/2]));
   }
