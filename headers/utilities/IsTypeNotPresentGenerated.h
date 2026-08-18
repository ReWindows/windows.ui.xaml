#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class IsTypeNotPresentGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@IsTypeNotPresentGenerated@DirectUI@@UEAAJPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAE@Z
    virtual long Evaluate(WindissectOpaque *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@IsTypeNotPresentGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@IsTypeNotPresentGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
