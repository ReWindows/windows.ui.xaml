#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDouble {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDouble@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCValue@CDouble@@SAJPEAVCREATEPARAMETERS@@AEAVCValue@@@Z
    static long CreateCValue(CREATEPARAMETERS *, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CDouble@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDouble@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};
