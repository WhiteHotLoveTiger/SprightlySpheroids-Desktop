#include "icon.h"

What::What(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
{
  SetIcon(wxIcon(wxT("heFlask32.xpm")));
  Centre();
}