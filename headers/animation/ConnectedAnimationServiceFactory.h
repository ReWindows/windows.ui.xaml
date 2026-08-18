#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ConnectedAnimationServiceFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@ConnectedAnimationServiceFactory@DirectUI@@UEAAJPEAPEAUIConnectedAnimationService@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long GetForCurrentView(::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ConnectedAnimationServiceFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ConnectedAnimationServiceFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ConnectedAnimationServiceFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ConnectedAnimationServiceFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentViewImpl@ConnectedAnimationServiceFactory@DirectUI@@AEAAJPEAPEAUIConnectedAnimationService@Animation@Media@Xaml@UI@Windows@@@Z
    long GetForCurrentViewImpl(::Windows::UI::Xaml::Media::Animation::IConnectedAnimationService * *);
};
} // namespace DirectUI
