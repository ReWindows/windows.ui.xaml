#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CListViewBaseHeaderItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CListViewBaseHeaderItemAutomationPeer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CListViewBaseHeaderItemAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CListViewBaseHeaderItemAutomationPeer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CListViewBaseHeaderItemAutomationPeer@@IEAA@PEAVCCoreServices@@AEAVCValue@@@Z
    CListViewBaseHeaderItemAutomationPeer(CCoreServices *, CValue &);
};
