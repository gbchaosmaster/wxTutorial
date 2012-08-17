#include "Program.h"

IMPLEMENT_APP(TutorialApp)

bool TutorialApp::OnInit()
{
    frmMain *main = new frmMain();
    main->Show(true);

    return true;
}
