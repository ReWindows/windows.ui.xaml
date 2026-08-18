#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class ToolTipGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosedEventSourceNoRef@ToolTipGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetClosedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenedEventSourceNoRef@ToolTipGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRoutedEventHandler@Xaml@UI@Windows@@UIInspectable@@UIRoutedEventArgs@234@@2@@Z
    long GetOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ToolTipGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ToolTipGenerated@DirectUI@@QEAA@XZ
    ToolTipGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@ToolTipGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Opened@ToolTipGenerated@DirectUI@@UEAAJPEAUIRoutedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Opened(::Windows::UI::Xaml::IRoutedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@ToolTipGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpen@ToolTipGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@ToolTipGenerated@DirectUI@@UEAAJPEAW4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Placement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlacementTarget@ToolTipGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_PlacementTarget(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplateSettings@ToolTipGenerated@DirectUI@@UEAAJPEAPEAUIToolTipTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_TemplateSettings(::Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@ToolTipGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@ToolTipGenerated@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOpen@ToolTipGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsOpen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Placement@ToolTipGenerated@DirectUI@@UEAAJW4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Placement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlacementTarget@ToolTipGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_PlacementTarget(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@ToolTipGenerated@DirectUI@@UEAAJN@Z
    virtual long put_VerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@ToolTipGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Opened@ToolTipGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Opened(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ToolTipGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@ToolTipGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@ToolTipGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ToolTipGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ToolTipGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ToolTipGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
