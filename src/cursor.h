#ifndef __CURSOR_H__
#define __CURSOR_H__

#include <Windows.h>

#define FOR_BLUE		0x0001 // text color contains blue.
#define FOR_GREEN		0x0002 // text color contains green.
#define FOR_RED			0x0004 // text color contains red.
#define FOR_INTENSITY	0x0008 // text color is intensified.
#define BACK_BLUE		0x0010 // background color contains blue.
#define BACK_GREEN		0x0020 // background color contains green.
#define BACK_RED		0x0040 // background color contains red.
#define BACK_INTENSITY	0x0080 // background color is intensified.

class _cursor
{
private:
	HANDLE cursorHandle;
	COORD coord;
public:

	_cursor(void);
	void changePosition(SHORT x_coord, SHORT y_coord);
	void drawRec(int width, int height, const char* to_display_string);
	void drawLine(int lenth, const char* to_display_string);
	void drawRow(int height, const char* to_display_string);
	// for_color	:	FOR_GREEN	FOR_RED	FOR_BLUE
	// back_color	:	BACK_GREEN	BACK_RED	BACK_BLUE
	void changeColor(int color);
};

extern _cursor cursor;

#endif

