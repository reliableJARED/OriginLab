#include <Origin.h>
#include <..\OriginLab\DialogEx.h>
#include <..\OriginLab\HTMLDlg.h>

//This example shows Origin running a LabTalk command then passing the result to HTML
class HTMLtoLabtalk: public HTMLDlg 
{
public:
	
	string GetInitURL() { 
		//GetFilePath(__FILE__) will give the directory of THIS cpp file. Our HTML is in the same directory
		return GetFilePath(__FILE__) + "LTbinary.html";
	}
	//the display title on the HTML dialog window
	string GetDialogTitle() {return "Labtalk to HTML";}

protected:
	//Our HTML page asks Origin to run a LabTalk cmd and send it the result
	double OlabtalkCMD(double value);
	
public:
	//this is for mapping OriginC and HTML functions
	DECLARE_DISPATCH_MAP
};

//VTS_I4 = int, VTS_STR = string, VTS_R8 = double, VTS_VOID = void
BEGIN_DISPATCH_MAP(HTMLtoLabtalk, HTMLDlg)
	//mapping OriginC with HTML. syntax is (class, function, return type, argument type)
	DISP_FUNCTION(HTMLtoLabtalk, OlabtalkCMD, VTS_R8, VTS_R8)

END_DISPATCH_MAP

//returns data from current workbook[worksheet]
double  HTMLtoLabtalk::OlabtalkCMD(double value)
{	
	
	printf("%f",value);

	return value;
}

//open a script window in origin and type:
//LT_html
//that will launch our dialog window
void LT_html() {
	HTMLtoLabtalk dlg;
	dlg.DoModalEx(GetWindow());
}

