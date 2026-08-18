#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class DirectConnectedAnimationConfigurationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DirectConnectedAnimationConfigurationFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIDirectConnectedAnimationConfiguration@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Animation::IDirectConnectedAnimationConfiguration * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DirectConnectedAnimationConfigurationFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DirectConnectedAnimationConfigurationFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DirectConnectedAnimationConfigurationFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
