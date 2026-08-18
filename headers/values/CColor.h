#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CColor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorFromString@CColor@@SAJAEBVxstring_ptr_view@@PEAI@Z
    static long ColorFromString(xstring_ptr_view const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColor@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CColor@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CColor@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};
