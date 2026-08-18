#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class MediaTransportControlsHelperFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropoutOrder@MediaTransportControlsHelperFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAU?$IReference@H@Foundation@6@@Z
    virtual long GetDropoutOrder(::Windows::UI::Xaml::IUIElement *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropoutOrder@MediaTransportControlsHelperFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAU?$IReference@H@Foundation@6@@Z
    virtual long SetDropoutOrder(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropoutOrderProperty@MediaTransportControlsHelperFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_DropoutOrderProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MediaTransportControlsHelperFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MediaTransportControlsHelperFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MediaTransportControlsHelperFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MediaTransportControlsHelperFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
