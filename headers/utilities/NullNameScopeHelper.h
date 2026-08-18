#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class NullNameScopeHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@NullNameScopeHelper@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameScopeType@NullNameScopeHelper@@UEBA?AW4NameScopeType@NameScoping@Jupiter@@XZ
    virtual int GetNameScopeType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamescopeOwner@NullNameScopeHelper@@UEBAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetNamescopeOwner() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@NullNameScopeHelper@@UEAAIXZ
    virtual unsigned int Release();
};
