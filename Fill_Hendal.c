#include<stdio.h>

main()
{
	char *p;
	char data[1000];
	
	p = fopen("Fill.txt","r");
	
	if(p == 0)
	{
		printf("Fill not Open");
	}
	else
	{
		//printf("Fill is Successfull.......");
		//fgets(data,buffer_size,p)
		while(fgets(data,15,p) !=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);

}
