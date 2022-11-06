/***********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 **********************************************************************************************************************/
#include "MainApp.hpp"

#include "Frames/MainFrame.hpp"

namespace cc::kelvinchin::HolocureDataImporter {
    bool MainApp::OnInit() {
        auto mainFrame = new MainFrame();
        mainFrame->Show(true);
        return true;
    }
}

wxIMPLEMENT_APP(cc::kelvinchin::HolocureDataImporter::MainApp);
