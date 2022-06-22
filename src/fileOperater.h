#ifndef __FILEOPERATER_H__
#define __FILEOPERATER_H__

#include <stdio.h>
#include "personData.h"
typedef unsigned int Position;

class File
{
public:
	static unsigned int numberBuffer[131072];	// ����
	static unsigned int numberCounter;			// �洢����������
private:
	FILE* data_0, * data_1;						// �����ļ���ָ��
	bool isFolderExist = false;					// �Ƿ����Ŀ���ļ���
public:
	char info;									// ���ļ��ķ���ֵ
	File();
	// �������ļ�
	int open(void);
	// ��ѧ���ż��ؽ�����
	void load(void);
	// ���ļ���ĩβ����һ������
	void append(PersonData to_append_PersonData);
	// Ѱ�������ѧ��������Ӧ������λ��
	unsigned int search(unsigned int studyNumber);
	// д��/���� һ������
	void write(PersonData to_write_PersonData, Position to_write_position);
	// ���һ������
	void empty(Position to_empty_position);
};

extern File file;

#endif // !__FILEOPERATER_H__

