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
	unsigned int studynumber;		//学工号
	char ID[20];					//身份证号
	Date birth;						//出生日期
	char phone[16];					//电话号码
	char telephone[16];				//联系电话
	char qinshuphone[16];			//亲属电话
	wchar_t qinshuname[8];			//亲属姓名
public:
	unsigned long number;			//编号
	Date Newdate;					//上报日期
	float temperature;				//体温
	wchar_t name[8];				//姓名
	bool sex;						//性别		MALE or FEMALE
	wchar_t job[64];				//身份类别
	wchar_t nation[4];				//民族
	wchar_t nativeplace[32];		//籍贯
	wchar_t workplace[64];			//所在单位
	wchar_t wenhua[16];				//文化程度
	wchar_t marry[16];				//婚姻
	wchar_t livingcity[16];			//居住城市
	wchar_t street[32];				//街道
	wchar_t community[32];			//社区
	wchar_t doornumber[32];			//门牌号
	wchar_t health[32];				//健康状况
	bool Dsymptom;					//是否有危机感 true or false
	wchar_t symptom[32];			//症状
	wchar_t toucher[32];			//接触者
	wchar_t filler[32];				//接触者
	Date filldate;					//填写日期
	wchar_t note[16];				//填写日期
	wchar_t gelizhuangtai[16];		//隔离状态
	wchar_t gelidian[32];			//隔离点名称
	Date watchdate;					//开始观察日期
	wchar_t watchlevel[32];			//开始观察指标
	Date overdate;					//解除观察日期
	wchar_t overlevel[32];			//解除观察指标
	wchar_t hospital[64];			//就医情况
	unsigned long paichanumber;		//排查人员编号
	wchar_t charger[8];				//负责人
	char chargerphone[16];			//负责人电话
	Date testdate;					//填写日期
	wchar_t testresult[16];			//检测结果
	wchar_t testwhere[32];			//检测机构
	bool zhushe;					//是否注射疫苗     true or false
	Date zhushedate;				//注射日期
	wchar_t zhushetype[16];			//注射种类
	wchar_t zhushewhere[32];		//注射机构

	static unsigned int whole;				//排查总人数
	static unsigned int yiqing;				//来校有疫情
	static unsigned int wuyiqing;			//来校无疫情
	static unsigned int all;				//来校总人数
	static unsigned int back;				//回校总人数
	static unsigned int backyiqing;			//回校有疫情
	static unsigned int backwuyiqing;		//回校无疫情
	static unsigned int alltoucher;			//接触总人数
	static unsigned int toucherhave;		//接触人员有疫情人数
	static unsigned int other;				//其他总人数
	static unsigned int otherhot;			//其他发热人数
	static unsigned int Qmale;				//学校教职工确诊男性人数
	static unsigned int Qfemale;			//学校教职工确诊女性人数
	static unsigned int	Qyoung;				//确诊年轻人
	static unsigned int Qmiddle;			//确诊中年人
	static unsigned int Qold;				//确诊老年人
	static unsigned int yisi;				//疑似感染人数
	static unsigned int Ymale;				//疑似男生
	static unsigned int Yfemale;			//疑似女生
	static unsigned int Yyoung;				//疑似年轻人
	static unsigned int Ymiddle;			//疑似中年人
	static unsigned int Yold;				//疑似老年人
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
void EpidemicManagement(fstream);//师生员工疫情管理
void EpidemicDetection(fstream);//师生员工核酸检测
void EpidemicStatistics(fstream);//疫情防控统计
void EpidemicControl(fstream);//学校疫情防控管理
*/

#endif