#include <stdio.h> 
#include <string.h>
int m=0;
struct 
{
	char name[30];
	char id[19];
	char xuehao[13];
	float score; 
}stu[100];
void jiemian();
void tjxsxx() ;//添加函数 
void scxsxx();//删除函数 
void xgxsxx();//修改函数 
void cxxsxx();//查询函数 
void xxlb();//信息列表函数 
 int main()
{ 
    jiemian(); 
	          }         
void jiemian() 
{   int a;
    printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t----欢迎进入主界面----\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t1.添加学生信息\t\t2.删除学生信息\n");
    printf("\t\t\t\t3.修改学生信息\t\t4.查询学生信息\n");
    printf("\t\t\t\t5.信息列表\n");
    printf("\t\t\t\t  ---------按任意键退出系统--------\n"); 
    printf("请选择你要使用的功能: "); 
    scanf("%d",&a);
    switch(a)
	{
		case 1:tjxsxx();jiemian();break;
		case 2:scxsxx();jiemian();break;
		case 3:xgxsxx();jiemian();break;
		case 4:cxxsxx();jiemian();break;
		case 5:xxlb();jiemian();break;
		default:break;
	}	
}
void tjxsxx()
{   
    printf("请输入姓名:\n");
    scanf("%s\0",stu[m].name);
    printf("请输入身份证号\n");
	scanf("%s",stu[m].id);
	printf("请输入学号\n");
    scanf("%s",stu[m].xuehao);
    printf("请输入成绩\n");
    scanf("%f",&stu[m].score);
    m++;   
}
    


 void scxsxx()
 {
 	int i=0,j=0;
 	char stuname[30]; 
 	printf("请输入要删除的学生信息的学生姓名: \n"); 
     scanf("%s",stuname);
     while(i<m)
 				{ 		  
				   if(strcmp(stu[i].name,stuname)==0)
				   {
				   	j=i;
				   	while(j<m)
				   	{
						stu[j]=stu[j+1];
					j++;
				}
				m--;
    } 
    i++;
 } 
 printf("删除完毕！");
 }
 void xgxsxx()
 {  
    int i=0;
 	char stuname[30]; 
 	printf("请输入要修改的学生信息的学生姓名: \n"); 
     scanf("%s",stuname);
     while(i<m)
 				{ 		  
				   if(strcmp(stu[i].name,stuname)==0)
				   {
					printf("请输入新的姓名: \n");
					scanf("%s",stu[i].name);
					printf("请输入新的身份证号: \n");
					scanf("%s",stu[i].id);
					printf("请输入新的学号: \n");
					scanf("%s",stu[i].xuehao);
					printf("请输入新的成绩: \n");
					scanf("%f",&stu[i].score);
    }
    i++;
 } 
}
 void cxxsxx()
 { int i=0;
   char stuname[30];
 		printf("请输入学生姓名：\n");	
		 scanf("%s",stuname);
		while(i<m)
 				{ 		  
				   if(strcmp(stu[i].name,stuname)==0)
				   {
					printf("身份证号:%s\n学号:%s\n成绩:%f\n",stu[i].id,stu[i].xuehao,stu[i].score);		
    }
    i++;
 }
}
 void xxlb()
 {
 	int i;
 	for(i=0;i<100;i++)
 	{   if(i<m)
 		printf("%d.姓名:%s\n身份证号:%s\n学号:%s\n成绩:%f\n\n",i+1,stu[i].name,stu[i].id,stu[i].xuehao,stu[i].score);
 		else break;
	 }
 }
 
 
