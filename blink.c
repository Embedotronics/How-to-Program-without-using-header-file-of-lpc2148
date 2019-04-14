#define DDR0     (*((volatile unsigned long *) 0xE0028008))
#define PORT0SET (*((volatile unsigned long *) 0xE0028004))
#define PORT0CLR (*((volatile unsigned long *) 0xE002800C))

void delay(unsigned char);


int main()
{
	DDR0 |= (1<<20);    //0000 0000 0000 0000 ....... 1000
	for(;;)
		{
		PORT0SET |=(1<<20); 
		delay(100);
		PORT0CLR |=(1<<20); 
		delay(100);
	  }
}
void delay(unsigned char t)
{
	unsigned int i,j;
	for(i=0;i<t;i++)
	for(j=0;j<=4000;j++) ;
}
