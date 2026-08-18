#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class NameScopeHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NameScopeHelper@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameScopeType@NameScopeHelper@@UEBA?AW4NameScopeType@NameScoping@Jupiter@@XZ
    virtual int GetNameScopeType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamescopeOwner@NameScopeHelper@@UEBAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetNamescopeOwner() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NameScopeHelper@@UEAAIXZ
    virtual unsigned int Release();
};
