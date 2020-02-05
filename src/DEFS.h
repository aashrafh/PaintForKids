#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	TO_FIGURE,
	/////////////////           Actions of Figures        ///////////////////
	DRAW_LINE,		//Draw Line
	DRAW_RECT,		//Draw Rectangle
	DRAW_TRI,		//Draw Triangle
	DRAW_RHOMBUS,	//Draw Rhombus
	DRAW_ELLIPSE,	//Draw Ellipse
	BACK1,

	CHNG_DRAW_CLR,	//Change the drawing color
	CHNG_FILL_CLR,	//Change the filling color
	DEL,			//Delete a figure(s)
	SAVE,			//Save the whole graph to a file
	SAVE_BY_TYPE,	//Save the all the figures that have a specific type
	LOAD,			//Load a graph from a file
	EXIT,			//Exit the application
	SOUND,
	SEND_TO_BACK,
	BRING_TO_FRONT,
	RESIZE,
	DRAWING_AREA,	//A click on the drawing area
	STATUS,			//A click on the status bar
	EMPTY,			//A click on empty place in the toolbar
	TO_DRAW,		//Switch interface to Draw mode
	TO_PLAY,		//Switch interface to Play mode
	TO_COLOR,
	///TODO: Add more action types (if needed)
	PICK_TYPE,     // Pick By Type 
	PICK_COLOR,	   // Pick By Color

	SELECT,
	COPY,
	CUT,
	PASTE,
	DELETE1,

	/////// Action of Color Mode ///////
	WHITE1,
	BLACK1,
	RED1,
	GREEN1,
	BLUE1,
	BACK,

	////// Actions of Size mode //////
	TO_SIZE,
	HALF,
	QUARTER,
	DOUBLE1,
	QUADRUPLE,
	BACK2
};

struct Point	//To be used for figures points
{ int x,y; };

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;		//Draw color of the figure
	color FillClr;		//Fill color of the figure
	bool isFilled;		//Figure Filled or not
	int BorderWdth;		//Width of figure borders
	float Resize_Factor;//Size Factor
};

#endif
