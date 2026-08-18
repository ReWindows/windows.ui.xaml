#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class EventTriggerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@EventTriggerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Actions@EventTriggerGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVTriggerAction@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Actions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RoutedEvent@EventTriggerGenerated@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_RoutedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RoutedEvent@EventTriggerGenerated@DirectUI@@UEAAJPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long put_RoutedEvent(::Windows::UI::Xaml::IRoutedEvent *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EventTriggerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@EventTriggerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@EventTriggerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EventTriggerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
