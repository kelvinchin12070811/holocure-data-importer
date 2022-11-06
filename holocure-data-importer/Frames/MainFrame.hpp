/***********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 **********************************************************************************************************************/
#pragma once
#include <wx/wx.h>
#include <wx/notebook.h>

namespace cc::kelvinchin::HolocureDataImporter {
class MainFrame : public wxFrame
{
public:
    MainFrame();

private:
    void SetupUI();
    void SetupSignal();

private:
    wxMenuBar *menuBar { nullptr };
    wxMenu *menuFile { nullptr };
    wxMenu *menuHelp { nullptr };

    wxPanel *canvas { nullptr };
    wxNotebook *tabs { nullptr };
};
}
