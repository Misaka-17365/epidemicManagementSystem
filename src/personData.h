#pragma once
#ifndef __PERSONDATA_H__
#define __PERSONDATA_H__

#define MALE 0
#define FEMALE 1

using namespace std;

typedef struct 
{
	short year;
	char month;
	char day;
}Date;

class PersonData
{
private:
	unsigned int studynumber;		//ѧ����
	char ID[20];					//���֤��
	Date birth;						//��������
	char phone[16];					//�绰����
	char telephone[16];				//��ϵ�绰
	char qinshuphone[16];			//�����绰
	wchar_t qinshuname[8];			//��������
public:
	unsigned long number;			//���
	Date Newdate;					//�ϱ�����
	float temperature;				//����
	wchar_t name[8];				//����
	bool sex;						//�Ա�		MALE or FEMALE
	wchar_t job[64];				//������
	wchar_t nation[4];				//����
	wchar_t nativeplace[32];		//����
	wchar_t workplace[64];			//���ڵ�λ
	wchar_t wenhua[16];				//�Ļ��̶�
	wchar_t marry[16];				//����
	wchar_t livingcity[16];			//��ס����
	wchar_t street[32];				//�ֵ�
	wchar_t community[32];			//����
	wchar_t doornumber[32];			//���ƺ�
	wchar_t health[32];				//����״��
	bool Dsymptom;					//�Ƿ���Σ���� true or false
	wchar_t symptom[32];			//֢״
	wchar_t toucher[32];			//�Ӵ���
	wchar_t filler[32];				//�Ӵ���
	Date filldate;					//��д����
	wchar_t note[16];				//��д����
	wchar_t gelizhuangtai[16];		//����״̬
	wchar_t gelidian[32];			//���������
	Date watchdate;					//��ʼ�۲�����
	wchar_t watchlevel[32];			//��ʼ�۲�ָ��
	Date overdate;					//����۲�����
	wchar_t overlevel[32];			//����۲�ָ��
	wchar_t hospital[64];			//��ҽ���
	unsigned long paichanumber;		//�Ų���Ա���
	wchar_t charger[8];				//������
	char chargerphone[16];			//�����˵绰
	Date testdate;					//��д����
	wchar_t testresult[16];			//�����
	wchar_t testwhere[32];			//������
	bool zhushe;					//�Ƿ�ע������     true or false
	Date zhushedate;				//ע������
	wchar_t zhushetype[16];			//ע������
	wchar_t zhushewhere[32];		//ע�����

	static unsigned int whole;				//�Ų�������
	static unsigned int yiqing;				//��У������
	static unsigned int wuyiqing;			//��У������
	static unsigned int all;				//��У������
	static unsigned int back;				//��У������
	static unsigned int backyiqing;			//��У������
	static unsigned int backwuyiqing;		//��У������
	static unsigned int alltoucher;			//�Ӵ�������
	static unsigned int toucherhave;		//�Ӵ���Ա����������
	static unsigned int other;				//����������
	static unsigned int otherhot;			//������������
	static unsigned int Qmale;				//ѧУ��ְ��ȷ����������
	static unsigned int Qfemale;			//ѧУ��ְ��ȷ��Ů������
	static unsigned int	Qyoung;				//ȷ��������
	static unsigned int Qmiddle;			//ȷ��������
	static unsigned int Qold;				//ȷ��������
	static unsigned int yisi;				//���Ƹ�Ⱦ����
	static unsigned int Ymale;				//��������
	static unsigned int Yfemale;			//����Ů��
	static unsigned int Yyoung;				//����������
	static unsigned int Ymiddle;			//����������
	static unsigned int Yold;				//����������
public:
	PersonData()
	{
		studynumber = 0;
		ID[0] = 0;
		birth = { 0,0,0 };
		phone[0] = 0;
		telephone[0] = 0;
		qinshuphone[0] = 0;
		qinshuname[0] = 0;

		number = 0;
		Newdate = { 0,0,0 };
		temperature = .0;
		name[0] = 0;

	}
};

/*
void EpidemicManagement(fstream);//ʦ��Ա���������
void EpidemicDetection(fstream);//ʦ��Ա��������
void EpidemicStatistics(fstream);//�������ͳ��
void EpidemicControl(fstream);//ѧУ������ع���
*/

#endif