//---------------------------------------------------------------------------
#ifndef uDrawH
#define uDrawH
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
void SetDCPixelFormat(HDC hdc);
void DrawAxes(bool Local);
void ColorToRGB(int Color, GLfloat *R, GLfloat *G, GLfloat *B);
void Draw();
typedef std::pair<double, double> point;
void FuncForAddPoint(double x,double y);
//---------------------------------------------------------------------------
#endif
