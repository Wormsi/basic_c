#include <unistd.h>
int my_strlen(const char* slt)
{
int lol=0;
while (slt[lol]!='\0')
{
lol++;
}
return lol;
}

void myputstr(char str[])
{
int i=0;
int lol;
lol=my_strlen(str);
write(1,str,lol);
}

int main(void)
{
myputstr("salut");
return(0);
}
