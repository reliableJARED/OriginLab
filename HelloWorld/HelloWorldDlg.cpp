#include <Origin.h>
#include <../OriginLab/DialogEx.h>
#include <../OriginLab/HTMLDlg.h>

class HelloWorldDlg: public HTMLDlg
{
public:
	string GetInitURL() //get the path of html file                    
	{
		string strFile = __FILE__; //Directory for path THIS HelloWorldDlg.cpp file
		return GetFilePath(strFile) + "index.html";//our HTML is in the same directory
	}
};

//add this file to Origin C workspace, compile and then type into script window
//hello
//to open the dialog
void hello()
{
	HelloWorldDlg dlg;
	dlg.DoModalEx(GetWindow());
}
