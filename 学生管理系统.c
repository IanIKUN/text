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
void tjxsxx() ;//��Ӻ��� 
void scxsxx();//ɾ������ 
void xgxsxx();//�޸ĺ��� 
void cxxsxx();//��ѯ���� 
void xxlb();//��Ϣ�б��� 
 int main()
{ 
    jiemian(); 
	          }         
void jiemian() 
{   int a;
    printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t----��ӭ����������----\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t1.���ѧ����Ϣ\t\t2.ɾ��ѧ����Ϣ\n");
    printf("\t\t\t\t3.�޸�ѧ����Ϣ\t\t4.��ѯѧ����Ϣ\n");
    printf("\t\t\t\t5.��Ϣ�б�\n");
    printf("\t\t\t\t  ---------��������˳�ϵͳ--------\n"); 
    printf("��ѡ����Ҫʹ�õĹ���: "); 
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
    printf("����������:\n");
    scanf("%s\0",stu[m].name);
    printf("���������֤��\n");
	scanf("%s",stu[m].id);
	printf("������ѧ��\n");
    scanf("%s",stu[m].xuehao);
    printf("������ɼ�\n");
    scanf("%f",&stu[m].score);
    m++;   
}
    


 void scxsxx()
 {
 	int i=0,j=0;
 	char stuname[30]; 
 	printf("������Ҫɾ����ѧ����Ϣ��ѧ������: \n"); 
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
 printf("ɾ����ϣ�");
 }
 void xgxsxx()
 {  
    int i=0;
 	char stuname[30]; 
 	printf("������Ҫ�޸ĵ�ѧ����Ϣ��ѧ������: \n"); 
     scanf("%s",stuname);
     while(i<m)
 				{ 		  
				   if(strcmp(stu[i].name,stuname)==0)
				   {
					printf("�������µ�����: \n");
					scanf("%s",stu[i].name);
					printf("�������µ����֤��: \n");
					scanf("%s",stu[i].id);
					printf("�������µ�ѧ��: \n");
					scanf("%s",stu[i].xuehao);
					printf("�������µĳɼ�: \n");
					scanf("%f",&stu[i].score);
    }
    i++;
 } 
}
 void cxxsxx()
 { int i=0;
   char stuname[30];
 		printf("������ѧ��������\n");	
		 scanf("%s",stuname);
		while(i<m)
 				{ 		  
				   if(strcmp(stu[i].name,stuname)==0)
				   {
					printf("���֤��:%s\nѧ��:%s\n�ɼ�:%f\n",stu[i].id,stu[i].xuehao,stu[i].score);		
    }
    i++;
 }
}
 void xxlb()
 {
 	int i;
 	for(i=0;i<100;i++)
 	{   if(i<m)
 		printf("%d.����:%s\n���֤��:%s\nѧ��:%s\n�ɼ�:%f\n\n",i+1,stu[i].name,stu[i].id,stu[i].xuehao,stu[i].score);
 		else break;
	 }
 }
 
 
