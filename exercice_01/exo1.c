#include <unistd.h>
int main(void)
{
int x=42;
char y='A';
int l[4];
l[0]=42;
l[1]=43;
l[2]=44;
l[3]='\0';
char k[3];
k[0]='y';
k[1]='o';
k[2]='\n';
float z=3.14;
write(1,k,3);
return(0);
}
