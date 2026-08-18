#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace ATL {
class CComModule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceD@CComModule@ATL@@UEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceD(unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceD@CComModule@ATL@@UEAAJPEBGHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceD(unsigned short const *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceS@CComModule@ATL@@UEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceS(unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceS@CComModule@ATL@@UEAAJPEBGHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceS(unsigned short const *, int, WindissectOpaque *);
};
} // namespace ATL
