#include <unistd.h>
int main(void)
{
char slt[]="salut";
printf("%d\n",my_strlen(slt));
return(0);
}
int my_strlen(const char* slt)
{
int i=0;
while (slt[i]!='\0')
{
i++;
}
return i;
}
