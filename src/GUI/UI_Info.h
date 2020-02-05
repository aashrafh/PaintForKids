#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY,	//Playing mode
	MODE_COLOR, //Colors mode
	MODE_SHAPE, //Figures mode
	MODE_SIZE	//Resize mode
};

enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	
	//////////////////////							 Colors							 //////////////////////////////////
	
	ITM_FIGURE,
	ITM_SELECT,
	ITM_COPY,
	ITM_CUT,
	ITM_PASTE,
	ITM_DELETE,

	ITM_CHANGECOLOR,
	ITM_CHANGEFILL,
	ITM_SAVE,
	ITM_SAVETYPE,
	ITM_LOAD,
	ITM_RESIZE,
	ITM_SEND_TO_BACK,
	ITM_BRING_TO_FRONT,
	ITM_SOUND,
	ITM_SWITCH,
	ITM_EXIT,		//Exit item
	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_PICKTYPE,
	ITM_PICKCOLOR,
	ITM_SWITCH1,
	ITM_EXIT1,
	//TODO: Add more items names here

	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum ColorMenuItem // The items of colors
{
	ITM_WHITE,
	ITM_BLACK,
	ITM_RED,
	ITM_GREEN,
	ITM_BLUE,

	ITM_BACK,

	COLOR_ITM_COUNT
};

enum ShapeMenuItem // The items of colors
{
	ITM_LINE,		// Line Item in menu
	ITM_RECT,  //Recangle item in menu
	ITM_TRI,   //TRIANGLE item in menu
	ITM_RHO,   //Rhombus item in menu
	ITM_ELLI, //Ellipse item in menu 
	ITM_BACK1,
	SHAPE_ITM_COUNT
};


enum SizeMenuItem // The items of colors
{
	ITM_QUARTER,
	ITM_HALF,
	ITM_DOUBLE,
	ITM_QUADRUPLE,

	ITM_BACK2,

	SIZE_ITM_COUNT
};

__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;
	
		int	width, height,	   //Window width and height
		wx , wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth;		//Width of each item in toolbar menu
	

	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed
	bool Sound;
	
}UI;	//create a global object UI

#endif
