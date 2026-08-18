#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CAutomationComponentPropertyValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAutomationComponentPropertyValue@@QEAAJPEAVCUIAWindow@@GPEAUtagVARIANT@@@Z
    long Create(CUIAWindow *, unsigned short, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CAutomationComponentPropertyValue@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentSite@CAutomationComponentPropertyValue@@AEAAJPEAPEAUIComponentSite@Private@Foundation@Windows@@@Z
    long GetComponentSite(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementId@CAutomationComponentPropertyValue@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetElementId(HSTRING__* *);
};
