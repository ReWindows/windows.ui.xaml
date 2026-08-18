#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
namespace DirectUI {
class FlyoutBaseGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenter@FlyoutBaseGenerated@DirectUI@@UEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    virtual long CreatePresenter(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenterProtected@FlyoutBaseGenerated@DirectUI@@QEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    long CreatePresenterProtected(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutBaseGenerated@DirectUI@@QEAA@XZ
    FlyoutBaseGenerated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosedEventSourceNoRef@FlyoutBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetClosedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosingEventSourceNoRef@FlyoutBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAVFlyoutBaseClosingEventArgs@23456@@Foundation@Windows@@UIFlyoutBase@Primitives@Controls@Xaml@UI@3@UIFlyoutBaseClosingEventArgs@56783@@2@@Z
    long GetClosingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenedEventSourceNoRef@FlyoutBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetOpenedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpeningEventSourceNoRef@FlyoutBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@@2@@Z
    long GetOpeningEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@FlyoutBaseGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@FlyoutBaseGenerated@DirectUI@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAccelerators@FlyoutBaseGenerated@DirectUI@@QEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnProcessKeyboardAccelerators(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessKeyboardAcceleratorsProtected@FlyoutBaseGenerated@DirectUI@@QEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnProcessKeyboardAcceleratorsProtected(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceFlyoutForDateTimePicker@FlyoutBaseGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long PlaceFlyoutForDateTimePicker(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAt@FlyoutBaseGenerated@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIFlyoutShowOptions@Primitives@Controls@456@@Z
    long ShowAt(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAt@FlyoutBaseGenerated@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long ShowAt(::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvokeKeyboardAccelerator@FlyoutBaseGenerated@DirectUI@@QEAAJPEAUIProcessKeyboardAcceleratorEventArgs@Input@Xaml@UI@Windows@@@Z
    long TryInvokeKeyboardAccelerator(::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@FlyoutBaseGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closing@FlyoutBaseGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVFlyoutBase@Primitives@Controls@Xaml@UI@Windows@@PEAVFlyoutBaseClosingEventArgs@23456@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long add_Closing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Opened@FlyoutBaseGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Opened(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Opening@FlyoutBaseGenerated@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Opening(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConstrainedToRootBounds@FlyoutBaseGenerated@DirectUI@@QEAAJPEAE@Z
    long get_IsConstrainedToRootBounds(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLightDismissOverlayEnabled@FlyoutBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsLightDismissOverlayEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpen@FlyoutBaseGenerated@DirectUI@@QEAAJPEAE@Z
    long get_IsOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludedContentAreaChangedHandler@FlyoutBaseGenerated@DirectUI@@UEAAJPEAPEAUIFlyoutOccludedContentAreaChangedHandler@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_OccludedContentAreaChangedHandler(::Windows::UI::Xaml::Controls::Primitives::IFlyoutOccludedContentAreaChangedHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@FlyoutBaseGenerated@DirectUI@@UEAAJPEAW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Placement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsePickerFlyoutTheme@FlyoutBaseGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_UsePickerFlyoutTheme(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XamlRoot@FlyoutBaseGenerated@DirectUI@@QEAAJPEAPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    long get_XamlRoot(::Windows::UI::Xaml::IXamlRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsLightDismissOverlayEnabled@FlyoutBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsLightDismissOverlayEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OccludedContentAreaChangedHandler@FlyoutBaseGenerated@DirectUI@@UEAAJPEAUIFlyoutOccludedContentAreaChangedHandler@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_OccludedContentAreaChangedHandler(::Windows::UI::Xaml::Controls::Primitives::IFlyoutOccludedContentAreaChangedHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Placement@FlyoutBaseGenerated@DirectUI@@UEAAJW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Placement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldConstrainToRootBounds@FlyoutBaseGenerated@DirectUI@@QEAAJE@Z
    long put_ShouldConstrainToRootBounds(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UsePickerFlyoutTheme@FlyoutBaseGenerated@DirectUI@@UEAAJE@Z
    virtual long put_UsePickerFlyoutTheme(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@FlyoutBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closing@FlyoutBaseGenerated@DirectUI@@QEAAJUEventRegistrationToken@@@Z
    long remove_Closing(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Opened@FlyoutBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Opened(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Opening@FlyoutBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Opening(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FlyoutBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FlyoutBaseGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FlyoutBaseGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FlyoutBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
