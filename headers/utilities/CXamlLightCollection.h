#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CXamlLightCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CXamlLightCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CXamlLightCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CXamlLightCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CXamlLightCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsOwnerInfo@CXamlLightCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CXamlLightCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXamlLightCollection@@UEAA@XZ
    virtual ~CXamlLightCollection();
};
