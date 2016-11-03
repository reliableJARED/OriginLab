#include <Origin.h>
#include <..\OriginLab\DialogEx.h>
#include <..\OriginLab\HTMLDlg.h>

//This example shows javascript pass Origin a LabTalk command
class HTMLtoLabtalk: public HTMLDlg 
{
public:
	
	string GetInitURL() { 
		//GetFilePath(__FILE__) will give the directory of THIS cpp file. Our HTML is in the same directory
		return GetFilePath(__FILE__) + "LTconnect.html";
	}
	//the display title on the HTML dialog window
	string GetDialogTitle() {return "Labtalk from HTML";}

protected:
	//Our HTML page sends strings which are labtalk commands.
	//this cpp file simply talkes the labtalk cmds and runs them
	bool OlabtalkCMD(string labtalkString);
	
public:
	//this is for mapping OriginC and HTML functions
	DECLARE_DISPATCH_MAP
};

BEGIN_DISPATCH_MAP(HTMLtoLabtalk, HTMLDlg)
	//mapping OriginC with HTML. syntax is (class, function, return type, argument type)
	DISP_FUNCTION(HTMLtoLabtalk, OlabtalkCMD, VTS_VOID, VTS_STR)
END_DISPATCH_MAP

//accepts a string from HTML dialog
bool HTMLtoLabtalk::OlabtalkCMD(string labtalkString)
{
	//run our string a labtalk command 
	bool sucess = LT_execute(labtalkString);
	//tell our HTML if the labtalk command worked
	return sucess;
}

//open a script window in origin and type:
//LT_html
//that will launch our dialog window
void LT_html() {
	HTMLtoLabtalk dlg;
	dlg.DoModalEx(GetWindow());
}

