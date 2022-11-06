/***********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 **********************************************************************************************************************/
#include "Frames/ExportDataFrame.hpp"

namespace cc::kelvinchin::HolocureDataImporter {
ExportDataFrame::ExportDataFrame(wxWindow *parent) : wxPanel {parent} { 
    SetupUI();
}

void ExportDataFrame::SetupUI() {
    InitComponents();
    SetupLayout();
}

void ExportDataFrame::InitComponents() {
    holocureDataDir = new wxDirPickerCtrl { this, wxID_ANY };
    exportBtn = new wxButton { this, wxID_ANY, "Export", wxDefaultPosition, { 200, 25 } };
    importBtn = new wxButton { this, wxID_ANY, "Import", wxDefaultPosition, { 200, 25 } };
}

void ExportDataFrame::SetupLayout() {
    auto rootSizer = new wxBoxSizer { wxVERTICAL };

    auto dirPickerSizer = new wxBoxSizer { wxHORIZONTAL };
    dirPickerSizer->Add(new wxStaticText { this, wxID_ANY, "HoloCure data directory" }, 0);
    dirPickerSizer->AddSpacer(12);
    dirPickerSizer->Add(holocureDataDir, 1, wxEXPAND);
    rootSizer->Add(dirPickerSizer, 0, wxEXPAND);

    rootSizer->AddStretchSpacer(1);

    auto operationBtnsSizer = new wxBoxSizer { wxHORIZONTAL };
    operationBtnsSizer->Add(exportBtn, 1, wxEXPAND);
    operationBtnsSizer->Add(importBtn, 1, wxEXPAND);
    rootSizer->Add(operationBtnsSizer, 0, wxEXPAND);

    this->SetSizer(rootSizer);
}
}
