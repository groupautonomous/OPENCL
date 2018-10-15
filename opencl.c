#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
long int x,y,central,n,iterations;
float diffusion;
x=strtol(argv[2],NULL,10);
y=strtol(argv[3],NULL,10);
int size=sizeof(argv)/sizeof(argv[0]);
for (int i=0;i<size;i++)
{
	if(argv[i][2]=='i')
		central=strtol((strtok(argv[i],"-i")),NULL,10);
	if(argv[i][2]='d')
		diffusion=strtof((strtok(argv[i],"-d")),NULL,10);
	if(argv[i][2]=='n')
		iterations=strtol((strtok(argv[i],"-n")),NULL,10);
}
printf("%ld %ld %ld %ld %ld",x,y,central,diffusion,iterations);
printf("%s",argv[2]);
}
