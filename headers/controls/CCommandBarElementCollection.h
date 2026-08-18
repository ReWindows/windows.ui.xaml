#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CCommandBarElementCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCommandBarElementCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCommandBarElementCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldKeepPeerReference@CCommandBarElementCollection@@MEAAIXZ
    virtual unsigned int ShouldKeepPeerReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CCommandBarElementCollection@@MEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
};
