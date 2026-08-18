#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CGridLength {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGridLength@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CGridLength@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGridLength@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CGridLength@@SAJAEBUXGRIDLENGTH@@@Z
    static long Validate(XGRIDLENGTH const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromValueGridLength@CGridLength@@AEAAJPEAVCREATEPARAMETERS@@@Z
    long FromValueGridLength(CREATEPARAMETERS *);
};
