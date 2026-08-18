#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class CommandBarGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CommandBarGenerated@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommandBarGenerated@DirectUI@@QEAA@XZ
    CommandBarGenerated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicOverflowItemsChangingEventSourceNoRef@CommandBarGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVCommandBar@Controls@Xaml@UI@Windows@@PEAVDynamicOverflowItemsChangingEventArgs@2345@@Foundation@Windows@@UICommandBar@Controls@Xaml@UI@3@UIDynamicOverflowItemsChangingEventArgs@5673@@2@@Z
    long GetDynamicOverflowItemsChangingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CommandBarGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CommandBarGenerated@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CommandBarGenerated@DirectUI@@UEAAJXZ
    virtual long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CommandBarGenerated@DirectUI@@UEAAJXZ
    virtual long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DynamicOverflowItemsChanging@CommandBarGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCommandBar@Controls@Xaml@UI@Windows@@PEAVDynamicOverflowItemsChangingEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DynamicOverflowItemsChanging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandBarOverflowPresenterStyle@CommandBarGenerated@DirectUI@@UEAAJPEAPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long get_CommandBarOverflowPresenterStyle(::Windows::UI::Xaml::IStyle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CommandBarTemplateSettings@CommandBarGenerated@DirectUI@@UEAAJPEAPEAUICommandBarTemplateSettings@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_CommandBarTemplateSettings(::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultLabelPosition@CommandBarGenerated@DirectUI@@UEAAJPEAW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    virtual long get_DefaultLabelPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDynamicOverflowEnabled@CommandBarGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsDynamicOverflowEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OverflowButtonVisibility@CommandBarGenerated@DirectUI@@UEAAJPEAW4CommandBarOverflowButtonVisibility@Controls@Xaml@UI@Windows@@@Z
    virtual long get_OverflowButtonVisibility(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentMenu@CommandBarGenerated@DirectUI@@UEAAJPEAPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ParentMenu(::Windows::UI::Xaml::Controls::IMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryCommands@CommandBarGenerated@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_PrimaryCommands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryCommands@CommandBarGenerated@DirectUI@@UEAAJPEAPEAU?$IObservableVector@PEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SecondaryCommands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CommandBarOverflowPresenterStyle@CommandBarGenerated@DirectUI@@UEAAJPEAUIStyle@Xaml@UI@Windows@@@Z
    virtual long put_CommandBarOverflowPresenterStyle(::Windows::UI::Xaml::IStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultLabelPosition@CommandBarGenerated@DirectUI@@UEAAJW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    virtual long put_DefaultLabelPosition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDynamicOverflowEnabled@CommandBarGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsDynamicOverflowEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OverflowButtonVisibility@CommandBarGenerated@DirectUI@@UEAAJW4CommandBarOverflowButtonVisibility@Controls@Xaml@UI@Windows@@@Z
    virtual long put_OverflowButtonVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParentMenu@CommandBarGenerated@DirectUI@@UEAAJPEAUIMenu@Controls@Xaml@UI@Windows@@@Z
    virtual long put_ParentMenu(::Windows::UI::Xaml::Controls::IMenu *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DynamicOverflowItemsChanging@CommandBarGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DynamicOverflowItemsChanging(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandBarGenerated@DirectUI@@UEAA@XZ
    virtual ~CommandBarGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CommandBarGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@CommandBarGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@CommandBarGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CommandBarGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CommandBarGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CommandBarGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
