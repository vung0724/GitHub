#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  int i;
  int n = 5;
  
  int childpid;

  for (i = 0; i < n ; i++)
  {

      childpid = fork();
      if(childpid == 0)
         fprintf(stderr,"i = %d, childpid = %d. This is process %ld with child %ld\n",i,childpid,(long)getpid(),(long)getpid());
      else break;
  }
  fprintf(stderr,"i = %d , childpid = %d . This is process %ld with parent %ld\n",i,childpid,
  (long)getpid(),(long)getpid());

  return 0;
}
