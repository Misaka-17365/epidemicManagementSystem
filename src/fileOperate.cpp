#include <io.h>
#include <stdlib.h>
#include <direct.h>
#include "fileOperater.h"


unsigned int File::numberBuffer[131072];
unsigned int File::numberCounter;


File::File()
{
	info = this->open();
	if (0 != info)
	{
		return;
	}
	this->load();
}

/*
*	int open(void) 返回值说明
*		0	打开成功
*		-1	打开data文件夹失败
*		-20	打开data_0文件失败
*		-21	打开data_1文件失败
*/
int File::open(void)
{
	unsigned int voidArr[23] = { 0 };
	if (!(isFolderExist || (0 == _access(".\\data", 6))))
	{
		if (0 != _mkdir("data"))
		{
			printf("打开文件夹失败");
			return -1;

		}
		if (NULL == (this->data_0 = fopen(".\\data\\data_0", "wb+")))
		{
			printf("打开数据文件0失败");
			return -20;
		}
		else
		{
			rewind(data_0);
			if (1 != fread(&numberCounter, sizeof(unsigned int), 1, data_0))
			{
				fwrite(voidArr, sizeof(unsigned int), 23, data_0);
			}
			printf("新建成功");
			return 0;
		}
		if (NULL == (this->data_1 = fopen(".\\data\\data_1", "wb+")))
		{
			printf("打开数据文件1失败");
			return -21;
		}
		printf("打开成功");
		this->isFolderExist = true;
		return 0;
	}
	else
	{
		isFolderExist = true;
	}

	if (NULL == (data_0 = fopen(".\\data\\data_0", "wb+")))
	{
		printf("打开数据文件0失败");
		return -20;
	}
	else
	{
		rewind(data_0);
		if (1 != fread(&numberCounter, sizeof(unsigned int), 1, data_0))
		{
			fwrite(voidArr, sizeof(unsigned int), 23, data_0);
			printf("新建成功");
		}
		return 0;
	}
	if (NULL == (data_1 = fopen(".\\data\\data_1", "wb+")))
	{
		printf("打开数据文件1失败");
		return -21;
	}
	printf("打开成功");
	return 0;
}
void File::load(void)
{
	for (unsigned int i = 0; i < numberCounter; i++)
	{
		fseek(data_1, (i - 1) * sizeof(PersonData), SEEK_SET);
		fread(numberBuffer - 1, sizeof(unsigned int), 1, data_1);
	}
	printf("加载完成");
}

Position File::search(unsigned int number)
{
	unsigned int i;
	for ( i = 0; i < numberCounter; i++)
	{
		if (number == numberBuffer[i])
		{
			return i;
		}
	}
	if (i == numberCounter)
	{
		return 0xffffffff;			// 未找到返回0xFFFFFFFFF
	}
}

void File::append(PersonData pdata)
{
	fseek(data_1, (numberCounter) * sizeof(PersonData), SEEK_SET);
	fwrite(&pdata, sizeof(PersonData), 1, data_1);
}

void File::write(PersonData pdata, Position pos)
{
	fseek(data_1, pos * sizeof(PersonData), SEEK_SET);
	fwrite(&pdata, sizeof(PersonData), 1, data_1);
}

void File::empty(Position pos)
{
	unsigned int empty = 0;
	fseek(data_1, pos * sizeof(PersonData), SEEK_SET);
	fwrite(&empty, sizeof(unsigned int), 1, data_1);
}

File file;
