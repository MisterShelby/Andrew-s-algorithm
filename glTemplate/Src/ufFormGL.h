//---------------------------------------------------------------------------
#ifndef ufFormGLH
#define ufFormGLH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TFormGL : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	void __fastcall FormResize(TObject *Sender);
	void __fastcall FormPaint(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
	void __fastcall FormMouseWheel(TObject *Sender, TShiftState Shift, int WheelDelta,
          TPoint &MousePos, bool &Handled);
	void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall Button1Click(TObject *Sender);

private:	// User declarations
	HDC   FGLDC;
	HGLRC FHRC;

	int FMouseX;
	int FMouseY;

	GLfloat FTrans[3];

	TColor  FColor;

	GLfloat FR;
	GLfloat FG;
	GLfloat FB;

	GLfloat FEye[3];
	GLfloat FCenter[3];
	GLfloat FUp[3];

	GLfloat FPAngle;
	GLfloat FQAngle;
	GLfloat FDistance;

	GLfloat FZnear;
	GLfloat FZfar;
public:		// User declarations
	__fastcall  TFormGL(TComponent* Owner);
	__fastcall ~TFormGL(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormGL *FormGL;
//---------------------------------------------------------------------------
#endif
