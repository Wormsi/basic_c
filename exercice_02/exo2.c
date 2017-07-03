#include <unistd.h>
int main(void)
{
int i=9;
char p=i+48;
write(1,&p,1);
write(1,"\n",1);
return(0);
}
