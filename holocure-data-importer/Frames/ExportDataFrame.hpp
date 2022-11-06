/***********************************************************************************************************************
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 **********************************************************************************************************************/
#pragma once
#include <wx/wx.h>
#include <wx/filepicker.h>

namespace cc::kelvinchin::HolocureDataImporter {
class ExportDataFrame : public wxPanel
{
public:
    ExportDataFrame(wxWindow *parent);

private:
    void SetupUI();
    void InitComponents();
    void SetupLayout();

private:
    wxButton *importBtn { nullptr };
    wxButton *exportBtn { nullptr };
    wxDirPickerCtrl *holocureDataDir { nullptr };
};
}
