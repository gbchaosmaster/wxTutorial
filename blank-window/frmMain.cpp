#include "frmMain.h"

frmMain::frmMain(void) : wxFrame(NULL, wxID_ANY, _T("Tutorial"))
{
    /** Configure Frame Settings **/

    SetSize(wxSize(800, 500));
    Center();
}
