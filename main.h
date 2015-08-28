#include"graphics.h"

int user_counting;                               //������ʾ��ǰ��¼���û����
extern mouse_msg m;								 //�洢�����Ϣ			

bool IsVisitor;									
bool IsUser;
bool IsAdmin;									//���鲼��ֵ�����жϵ�¼��ݣ��ο͡��û�������Ա��

void CloseAllSwitch();							//�������жϵ�¼��ݵĿ��عر�
void LoadData();								//���ļ��ж�ȡ����
void SaveData();								//�����ݴ����ļ�
extern void mainmenu();							//������ӿ�

void mainpart();
void Booking(int choice);
void CheckingSituation(int choice);
void ResetPassword();                       //��������
void RunTimebooking(int choice);			//��ʱ���Ԥ������
void UserMessage();							//�鿴�û���Ϣ
void Adminmain();							//����Ա����ӿ�
void Adminpart();							//����Ա������
void CalculateRatio();                       //��������ݵĵ�ǰԤ����
void Calculate_time();						 //���㲻ͬ�����ڲ�ͬʱ��������
void sortplace(int choice);							//�Գ�����Ϣ����ָͬ���������

double TimeRatio[7][4];                      //��Ų�ͬ�����ڲ�ͬʱ��������ʵļ�����
double Ratio[7];                             //��ǰ�����ݵ�Ԥ����
double TotalRatio;							 //��ǰ��Ԥ����



struct sort_Place
{
	char name[20];
	double result1;       //����ӭ�̶�����
	double result2;	      //���������� 
	
	
}sortPlace[7];                 //�����Գ��������Ϣ��������

struct Place
{
	int used_num;
	int money;
	int timebooking[4];
	int men;
	int women;
}place[7];              //������Ϣ



struct UserPlace
{
	int timeNum[4];
};                        //����ͨ���û������û�Ԥ���ĳ�����Ϣ

struct User
{
	int count;
	int sex;
	int age;
	char ID[20];
	char password[20];
	char name[20];

	int total_num;
	struct UserPlace place[7];

	void copy(struct User temp)
	{
		sex=temp.sex;
		age=temp.age;
		strcpy(ID,temp.ID);
		strcpy(password,temp.password);
		strcpy(name,temp.name);
	}//��temp�ṹ������Ϣȫ����������ǰ�ṹ��
}user[100];                             //�û���Ϣ

typedef struct
{
	char password[20];
}admin;//����Ա����

void Denglu();
void Zhuce();
void Visitor();