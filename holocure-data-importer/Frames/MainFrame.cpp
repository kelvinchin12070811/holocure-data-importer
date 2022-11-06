/***********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 **********************************************************************************************************************/
#include "Frames/MainFrame.hpp"
#include "Frames/ExportDataFrame.hpp"

namespace cc::kelvinchin::HolocureDataImporter {
MainFrame::MainFrame()
    : wxFrame { nullptr, wxID_ANY, "HoloCure Data Importer", wxDefaultPosition,
                wxSize { 640, 480 } }
{
    this->CenterOnScreen();
    SetupUI();
    SetupSignal();
}

void MainFrame::SetupUI() {
    menuBar = new wxMenuBar();

    menuFile = new wxMenu();
    menuFile->Append(wxID_ANY, "&Quit \tAlt+F4", "Close the application");
    menuBar->Append(menuFile, "&File");

    menuHelp = new wxMenu();
    menuHelp->Append(wxID_ANY, "&About", "Show the information of the app");
    menuBar->Append(menuHelp, "&Help");

    this->SetMenuBar(menuBar);

    canvas = new wxPanel { this };

    tabs = new wxNotebook { canvas, wxID_ANY, wxDefaultPosition, this->GetSize() };
    tabs->AddPage(new ExportDataFrame(tabs), "Export and Import");
}

void MainFrame::SetupSignal() {
    menuFile->Bind(wxEVT_MENU, [this](auto ev) { this->Close(); });
    
    menuHelp->Bind(wxEVT_MENU, [this](auto ev) {
        wxMessageBox("Version 1.0.0 in dev", "About HoloCure Data Importer");
    });
}
}
