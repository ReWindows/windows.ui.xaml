#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CEnumerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEnumerated@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CEnumerated@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEnumerated@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnumerateHelper@CEnumerated@@KAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@IPEBUXTABLE@@W4KnownTypeIndex@@_N@Z
    static long CreateEnumerateHelper(CDependencyObject * *, CREATEPARAMETERS *, unsigned int, XTABLE const *, int, bool);
};
