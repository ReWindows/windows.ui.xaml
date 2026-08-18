#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class KeyTimeFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromTimeSpan@KeyTimeFactory@DirectUI@@UEAAJUTimeSpan@Foundation@Windows@@PEAUKeyTime@Animation@Media@Xaml@UI@5@@Z
    virtual long FromTimeSpan(WindissectOpaque, ::Windows::UI::Xaml::Media::Animation::KeyTime *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@KeyTimeFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@KeyTimeFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@KeyTimeFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
