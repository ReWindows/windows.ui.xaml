#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CTileGrid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTileGrid@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTileGrid@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CTileGrid@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionsForChildElementNoAddRef@CTileGrid@@MEAAPEAVCTransitionCollection@@PEAVCUIElement@@@Z
    virtual CTransitionCollection * GetTransitionsForChildElementNoAddRef(CUIElement *);
};
