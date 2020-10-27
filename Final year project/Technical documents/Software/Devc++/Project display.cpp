
#include <graphics.h>
#include <stdio.h>
 
main(void) 
{
    int gd = DETECT, gm;
    //detectgraph(&gd, &gm);
    int i, maxx, midy;
 
	FILE* ptr_file;
	char charr[10];
	double array2 [2];
	double array[2160];
	double test;
	double d;
	
	ptr_file = fopen("data_test.txt", "r");
	
	if(!ptr_file)
	return 1;
	
	for(int q=0; q<2160; q++)
	{
	fscanf(ptr_file,"%lf-",&d);		//numbers between - read into double and stored, need to be sent in right order
	array[q]=d;
	}
	fclose(ptr_file);

		int s;
	    /* initialize graphic mode */
    initgraph(&gd, &gm, "");

//outer walls

 	setbkcolor(LIGHTBLUE);
 	cleardevice();
 
 	circle(420,420,2);
 	circle(350,350,2);
 	for(s=0; s<2160; s=s+8)		//48x9x5
 	{
 		//circle(array[s],array[s+4],2);
	 }
 		
 	    getch();
    closegraph();
	
 	 
	return 0;

}
