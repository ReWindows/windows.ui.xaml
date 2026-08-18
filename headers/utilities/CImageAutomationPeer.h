#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CImageAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImageAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CImageAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageAutomationPeer@@IEAA@PEAVCCoreServices@@AEAVCValue@@@Z
    CImageAutomationPeer(CCoreServices *, CValue &);
};
