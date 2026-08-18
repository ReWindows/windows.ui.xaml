#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CToggleButton@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CToggleButton@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CToggleButton@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CToggleButton@@IEAA@PEAVCCoreServices@@@Z
    CToggleButton(CCoreServices *);
};
