#include "holocure-data-importer.h"

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}

MyFrame::MyFrame() : wxFrame { nullptr, wxID_ANY, "Hello World" } {
    auto menuFile = new wxMenu;
    menuFile->Append(ID_HELLO, "&Hello...\tCtrl+H",
                     "Help string show in status bar of this window");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    auto menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    auto menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    this->SetMenuBar(menuBar);
    this->CreateStatusBar();
    this->SetStatusText("Welcome to WxWidgets!");

    this->Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_HELLO);
    this->Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    this->Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}

void MyFrame::OnExit(wxCommandEvent &ev) {
    this->Close();
}

void MyFrame::OnAbout(wxCommandEvent& ev) {
    wxMessageBox("This is a wxWidgets Hello World example",
        "About Hello World", wxOK | wxICON_INFORMATION);
}

void MyFrame::OnHello(wxCommandEvent& ev) {
    wxLogMessage("Hello World from wxWidgets!");
}