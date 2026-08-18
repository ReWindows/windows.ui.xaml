#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class VirtualizingStackPanelGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCleanUpVirtualizedItemEventEventSourceNoRef@VirtualizingStackPanelGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UICleanUpVirtualizedItemEventHandler@Controls@Xaml@UI@Windows@@UIInspectable@@UICleanUpVirtualizedItemEventArgs@2345@@2@@Z
    long GetCleanUpVirtualizedItemEventEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VirtualizingStackPanelGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanUpVirtualizedItem@VirtualizingStackPanelGenerated@DirectUI@@UEAAJPEAUICleanUpVirtualizedItemEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long OnCleanUpVirtualizedItem(::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCleanUpVirtualizedItemProtected@VirtualizingStackPanelGenerated@DirectUI@@UEAAJPEAUICleanUpVirtualizedItemEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long OnCleanUpVirtualizedItemProtected(::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CleanUpVirtualizedItemEvent@VirtualizingStackPanelGenerated@DirectUI@@UEAAJPEAUICleanUpVirtualizedItemEventHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CleanUpVirtualizedItemEvent(::Windows::UI::Xaml::Controls::ICleanUpVirtualizedItemEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreScrollSnapPointsRegular@VirtualizingStackPanelGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AreScrollSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@VirtualizingStackPanelGenerated@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AreScrollSnapPointsRegular@VirtualizingStackPanelGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AreScrollSnapPointsRegular(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@VirtualizingStackPanelGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CleanUpVirtualizedItemEvent@VirtualizingStackPanelGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CleanUpVirtualizedItemEvent(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VirtualizingStackPanelGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@VirtualizingStackPanelGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@VirtualizingStackPanelGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VirtualizingStackPanelGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@VirtualizingStackPanelGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VirtualizingStackPanelGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
