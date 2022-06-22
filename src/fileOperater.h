#ifndef __FILEOPERATER_H__
#define __FILEOPERATER_H__

#include <stdio.h>
#include "personData.h"
typedef unsigned int Position;

class File
{
public:
	static unsigned int numberBuffer[131072];	// 缓存
	static unsigned int numberCounter;			// 存储的数据条数
private:
	FILE* data_0, * data_1;						// 两个文件的指针
	bool isFolderExist = false;					// 是否存在目标文件夹
public:
	char info;									// 打开文件的返回值
	File();
	// 打开两个文件
	int open(void);
	// 将学工号加载进缓存
	void load(void);
	// 在文件的末尾增加一条数据
	void append(PersonData to_append_PersonData);
	// 寻找输入的学工号所对应的数据位置
	unsigned int search(unsigned int studyNumber);
	// 写入/覆盖 一条数据
	void write(PersonData to_write_PersonData, Position to_write_position);
	// 清空一条数据
	void empty(Position to_empty_position);
};

extern File file;

#endif // !__FILEOPERATER_H__

