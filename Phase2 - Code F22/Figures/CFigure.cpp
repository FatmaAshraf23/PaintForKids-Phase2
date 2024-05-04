#include "CFigure.h"

CFigure::CFigure(GfxInfo FigureGfxInfo)
{ 
	FigGfxInfo = FigureGfxInfo;	//Default status is non-filled.
	Selected = false;
}

void CFigure::SetSelected(bool s)
{	Selected = s; }

bool CFigure::IsSelected() const
{	return Selected; }

void CFigure::ChngDrawClr(color Dclr)
{	FigGfxInfo.DrawClr = Dclr; }

void CFigure::ChngFillClr(color Fclr)
{	
	FigGfxInfo.isFilled = true;
	FigGfxInfo.FillClr = Fclr; 
}

bool CFigure::Hide(bool hide)
{
	if (hide)
	{
		ChngDrawClr(COLOR_BACKGROUND);
		ChngFillClr(COLOR_BACKGROUND);
	}
	else
	{
		ChngDrawClr(FigGfxInfo.DrawClr);
		ChngFillClr(FigGfxInfo.FillClr);
	}
	hidden == hide;
}

