#include<stdio.h>
#include<graphics.h>
#include<string.h>
struct ad
{
     char name[30];
     char phone[15];
    char disease[30];
    int age;
    int cabin;
} x[100];
char f2[10];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void write();
void edit();
void del();
void show();
int main()
{
    int c,i,q,m,n;
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "../bgi");
    setbkcolor(RED);
    read();
    setcolor(YELLOW);
    settextstyle(7,0,4);
    outtextxy(30,0,"HOSPITAL MANAGEMENT SYSTEM");
    setfillstyle(LINE_FILL,LIGHTGRAY);
    bar(100,150,205,400);
    bar(210,80,415,400);
    bar(420,150,525,400);
    bar(70,400,555,440);
    setfillstyle(LINE_FILL,BROWN);
    bar(260,230,370,400);
   setfillstyle(LINE_FILL,WHITE);
   bar(295,100,330,170);
   bar(275,120,350,150);
   setfillstyle(LTBKSLASH_FILL,BROWN);
   bar(110,170,145,195);
   bar(160,170,195,195);
   bar(110,215,145,240);
   bar(160,215,195,240);
   bar(110,260,145,285);
   bar(160,260,195,285);
   bar(110,305,145,330);
   bar(160,305,195,330);
   bar(430,170,465,195);
   bar(480,170,515,195);
   bar(430,215,465,240);
   bar(480,215,515,240);
   bar(430,260,465,285);
   bar(480,260,515,285);
   bar(430,305,465,330);
   bar(480,305,515,330);
   outtextxy(230,175,"HOSPITAL");
   getch();
   cleardevice();
   outtextxy(30,0,"HOSPITAL MANAGEMENT SYSTEM");
   setfillstyle(LINE_FILL,LIGHTGREEN);
   bar(250,50,550,350);
   setfillstyle(LTBKSLASH_FILL,GREEN);
   bar(300,100,500,300);
   setfillstyle(LINE_FILL,WHITE);
   bar(380,150,420,250);
   bar(350,175,450,225);
   setcolor(WHITE);
   outtextxy(315,250,"HOSPITAL");
   settextstyle(0,0,2);
    printf("\n\n\n\n");
    while(c!=6)
    {

	printf("   **Enter your choice**\n\n   1. Add Information\n   2. View Information\n   3. Search\n   4. Edit Information\n   5. Delete Information\n   6. Exit\n\n   Option=");
	scanf("%d",&c);//choice for option
	fflush(stdin);//making it clear
	if(c==1)//add
	{
	    system("cls");
	    add();
	}
	else if(c==2)//view
	{
	    system("cls");
	    view();
	}
	else if(c==3)//search
	{
	    system("cls");
	    search();
	}
	else if(c==4)//edit
	{
	    system("cls");
	    edit();
	}
	else if(c==5)//delete
	{
	    system("cls");
	    del();
	}
	else if(c==6)
	{

	    write();
	    return 0;
	}
	else
	{
	    system("cls");
	    printf("\n\nInvalid input , try again by using valid inputs");
	}
	printf("\n\n");
    }
    getch();
    closegraph();
    return 0;
}
void add()
{
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "../bgi");
    setbkcolor(MAGENTA);
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
	printf("\n");
	fflush(stdin);
	printf("Enter patient's Name = ");
	gets(x[i].name);
	fflush(stdin);
	printf("Enter disease = ");
	scanf("%[^\n]s",x[i].disease);
	fflush(stdin);
	printf("\nEnter the age = ");
	scanf("%d",&x[i].age);
	fflush(stdin);
	printf("Enter cabin no = ");
	scanf("%d",&x[i].cabin);
	fflush(stdin);
	printf("Enter phone number = ");
	scanf("%[0-9]s",x[i].phone);
	fflush(stdin);
	printf("\n");
	j++;
	a++;
	num++;
    }
}
void view()
{
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "../bgi");
    setbkcolor(BLUE);
    for(i=0; i<num; i++)
    {
	printf("\n");
	printf("Serial Number=%d\n",i);
	printf("Name = ");
	puts(x[i].name);
	printf("Disease = %s\n",x[i].disease);
	printf("Cabin no = %d\nPhone number = %10s\nAge=%d",x[i].cabin,x[i].phone,x[i].age);
	printf("\n\n");
    }
}
void edit()
{
    int q,p;
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "../bgi");
    setbkcolor(RED);
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin\n5.Phone no.\n");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=5)
    {
	printf("Enter the serial no of that patient= (0 - %d)=",num-1);
	scanf("%d",&p);//serial number
	if(p<num)
	{
	    if(q==1)
	    {
		fflush(stdin);
		printf("Enter the new name=");
		gets(x[p].name);

	    }
	    else if(q==2)
	    {
		fflush(stdin);
		printf("Enter the new Disease=");
		gets(x[p].disease);
	    }
	    else if(q==3)
	    {
		fflush(stdin);
		printf("Enter the new Age=");
		scanf("%d",&x[p].age);
	    }

	    else if(q==4)
	    {
		fflush(stdin);
		printf("Enter the new Cabin no=");
		scanf("%d",&x[p].cabin);
	    }

	    else if(q==5)
	    {
		fflush(stdin);
		printf("Enter the new Phone no =");
		scanf("%s",x[p].phone);
	    }
	}
	else
	{
	    printf("\n\nInvalid Serial \nTry Again !!\n\n");
	}
    }
    else
    {
	printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void search()
{
     int s,h,f;
    char u[100];
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "../bgi");
    setbkcolor(DARKGRAY);

    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Cabin no.\n5.Phone no.\n6.Age\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
	printf("Enter Serial number of the patient=");
	scanf("%d",&s);
	if(s<num)
	{
	    printf("\n");
	    printf("Serial Number=%d\n",s);
	    printf("Name = ");
	    puts(x[s].name);
	    printf("Disease = ");
	    puts(x[s].disease);
	    printf("Cabin no = %d\nPhone number = %s\nAge = %d",x[s].cabin,x[s].phone,x[s].age);
	    printf("\n\n");
	}
	else
	    printf("\n\nNot Found\n\n");
    }
    else if(h==2)//problem is here.........
    {
	int f=1;
	fflush(stdin);
	printf("Enter your name=");
	gets(u);
	fflush(stdin);
	for(g=0; g<num; g++)
	{
	    if(strcmp(u,x[g].name)==0)
	    {
		printf("\n");
		printf("Serial Number=%d\n",g);
		printf("Name = ");
		puts(x[g].name);
		printf("Disease = ");
		puts(x[g].disease);
		printf("Cabin no = %d\nPhone number = %s\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
		printf("\n\n");
		f=0;

	    }
	}
	if(f==1)
	    printf("\nNot Found\n");



    }
    else if(h==3)
    {
	int f=1;
	fflush(stdin);
	printf("Enter Disease = ");
	gets(u);
	fflush(stdin);
	for(g=0; g<num; g++)
	{
	    if(strcmp(u,x[g].disease)==0)
	    {
		printf("\n");
		printf("Serial Number=%d\n",g);
		printf("Name = ");
		puts(x[g].name);
		printf("Disease = ");
		puts(x[g].disease);
		printf("Cabin no = %d\nPhone number = %s\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
		printf("\n\n");
		f=0;
	    }


	}
	if(f==1)
	    printf("\nNot Found\n");


    }
    else if(h==4)
    {
	int f=1;
	printf("Enter Cabin number = ");
	scanf("%d",&f);
	for(g=0; g<num; g++)
	{
	    if(f==x[g].cabin)
	    {
		printf("\n");
		printf("Serial Number=%d\n",g);
		printf("Name = ");
		puts(x[g].name);
		printf("Disease = ");
		puts(x[g].disease);
		printf("Cabin no = %d\nPhone number = %s\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
		printf("\n\n");
		f=0;
	    }

	}
	if(f==1)
	    printf("Not Found\n\n");

    }
    else if(h==5)
    {
	int f=1;
	printf("Enter Phone number = ");
	scanf("%[0-9]s",f2);
	for(g=0; g<num; g++)
	{
	  if(strcmp(f2,x[g].phone)==0)
	    {
		printf("\n");
		printf("Serial Number=%d\n",g);
		printf("Name = ");
		puts(x[g].name);
		printf("Disease = ");
		puts(x[g].disease);
		printf("Cabin no = %d\nPhone number = %s\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
		printf("\n\n");
		f=0;
	    }

	}
	if(f==1)
	    printf("Not Found");
    }
    else if(h==6)
    {
	int f=1;
	printf("Enter Age = ");
	scanf("%d",&f);
	for(g=0; g<num; g++)
	{
	    if(f==x[g].age)
	    {
		printf("\n");
		printf("Serial Number=%d\n",g);
		printf("Name = ");
		puts(x[g].name);
		printf("Disease = ");
		puts(x[g].disease);
		printf("Cabin no = %d\nPhone number = %s\nAge = %d",x[g].cabin,x[g].phone,x[g].age);
		printf("\n\n");
		f=0;
	    }

	}
	if(f==1)
	    printf("Not Found\n\n");

    }
    else
	printf("\n\nInvalid input\n\n");




}
void del()
{
    int f,h;
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "../bgi");
    setbkcolor(BROWN);
    //int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
	printf("What do you want ?\n");
	printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Cabin\n6.Remove phone number\nOption = ");
	scanf("%d",&h);
	if(h==1)
	{
	    while(f<num)
	    {
		strcpy(x[f].name,x[f+1].name);
		strcpy(x[f].disease,x[f+1].disease);
		x[f].age=x[f+1].age;
		x[f].cabin=x[f+1].cabin;
		strcpy(x[f].phone,x[f+1].phone);
		f++;
	    }
	    num--;
	}
	else if(h==2)
	{
	    strcpy(x[f].name,"Cleared");

	}
	else if(h==3)
	{
	    strcpy(x[f].disease,"Cleared");
	}
	else if(h==4)
	{
	    x[f].age=0;
	}
	else if(h==5)
	{
	    x[f].cabin=0;
	}
	else if(h==6)
	{
	    strcpy(x[i].phone," ");
	}

    }
    else
	printf("\n\nInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("new2.txt","r");
    if(fp == NULL)
    {
	//create empty file, so that we can open it
	//in the next execution of this program
	fp = fopen("new2.txt","w");
	fclose(fp);
	printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("new2.txt","w");
    if(fp == NULL)
    {
	printf("Error");
	exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}