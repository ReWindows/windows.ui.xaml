#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CInt32 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInt32@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCValue@CInt32@@SAJPEAVCREATEPARAMETERS@@AEAVCValue@@@Z
    static long CreateCValue(CREATEPARAMETERS *, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CInt32@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CInt32@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};
