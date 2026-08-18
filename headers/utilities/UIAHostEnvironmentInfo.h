#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class UIAHostEnvironmentInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementWindow@UIAHostEnvironmentInfo@@QEBAPEAUHWND__@@XZ
    HWND__* GetElementWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalSpaceToUiaSpace@UIAHostEnvironmentInfo@@QEAA_NPEAUXRECTF_WH@@@Z
    bool GlobalSpaceToUiaSpace(XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalSpaceToUiaSpace@UIAHostEnvironmentInfo@@QEAA_NPEAUtagPOINT@@@Z
    bool GlobalSpaceToUiaSpace(tagPOINT *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIAHostEnvironmentInfo@@QEAA@AEBV0@@Z
    UIAHostEnvironmentInfo(UIAHostEnvironmentInfo const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UIAHostEnvironmentInfo@@QEAA@PEAVCXamlIslandRoot@@@Z
    UIAHostEnvironmentInfo(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UiaSpaceToGlobalSpace@UIAHostEnvironmentInfo@@QEBA_NPEAUtagPOINT@@@Z
    bool UiaSpaceToGlobalSpace(tagPOINT *) const;
};
