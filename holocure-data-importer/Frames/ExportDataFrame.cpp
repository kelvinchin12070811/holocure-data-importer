/***********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 **********************************************************************************************************************/
#include "Frames/ExportDataFrame.hpp"

namespace cc::kelvinchin::HolocureDataImporter {
ExportDataFrame::ExportDataFrame(wxWindow *parent) : wxPanel {parent} { 
    wxButton *button = new wxButton { this, wxID_ANY, "test", wxDefaultPosition, { 100, 35 } };
}
}
