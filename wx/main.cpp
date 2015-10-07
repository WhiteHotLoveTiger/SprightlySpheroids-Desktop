#include "main.h"
#include "icon.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    What *what = new What(wxT("My new Window!!!"));
    what->Show(true);

    return true;
}