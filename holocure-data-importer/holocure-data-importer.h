#pragma once
#include <wx/wx.h>

enum {
    ID_HELLO = 1
};

class MyApp : public wxApp
{
public:
    virtual bool OnInit() override;
};

class MyFrame : public wxFrame
{
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent &event);
    void OnExit(wxCommandEvent &event);
    void OnAbout(wxCommandEvent &event);
};