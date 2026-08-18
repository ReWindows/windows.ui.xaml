#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 50 member(s).
class FocusController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FocusController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@FocusController@@SAJPEAUIFocusObserver@Input@Internal@UI@Windows@@PEAPEAV1@@Z
    static long Create(::Windows::UI::Internal::Input::IFocusObserver *, FocusController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNavigationFocusEventArgs@FocusController@@UEAAJW4NavigationReason@Core@UI@Windows@@URect@Foundation@5@PEAPEAUINavigationFocusEventArgs@345@@Z
    virtual long CreateNavigationFocusEventArgs(int, WindissectOpaque, ::Windows::UI::Core::INavigationFocusEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNavigationFocusEventArgsWithCorrelationId@FocusController@@UEAAJW4NavigationReason@Core@UI@Windows@@URect@Foundation@5@U_GUID@@PEAPEAUINavigationFocusEventArgs@345@@Z
    virtual long CreateNavigationFocusEventArgsWithCorrelationId(int, WindissectOpaque, _GUID, ::Windows::UI::Core::INavigationFocusEventArgs * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocus@FocusController@@UEAAJPEAUINavigationFocusEventArgs@Core@UI@Windows@@@Z
    virtual long DepartFocus(::Windows::UI::Core::INavigationFocusEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocusAsync@FocusController@@UEAAJPEAUINavigationFocusEventArgs@Core@UI@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z
    virtual long DepartFocusAsync(::Windows::UI::Core::INavigationFocusEventArgs *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocusComplete@FocusController@@UEAAJU_GUID@@E@Z
    virtual long DepartFocusComplete(_GUID, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FocusController@@QEAA@PEAUIFocusObserver@Input@Internal@UI@Windows@@@Z
    FocusController(::Windows::UI::Internal::Input::IFocusObserver *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FocusController@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FocusController@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FocusController@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@FocusController@@UEAAJPEAUIXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@@PEAPEAUIXamlSourceFocusNavigationResult@3456@@Z
    virtual long NavigateFocus(::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest *, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateCreateNavigationFocusEventArgs@FocusController@@UEAAJPEAPEAUINavigationFocusEventArgs@Core@UI@Windows@@@Z
    virtual long PrivateCreateNavigationFocusEventArgs(::Windows::UI::Core::INavigationFocusEventArgs * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FocusController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FocusController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocusFromComponent@FocusController@@UEAAJXZ
    virtual long TakeFocusFromComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FocusNavigating@FocusController@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVNavigationFocusEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FocusNavigating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@FocusController@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GotFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LosingFocus@FocusController@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAU1@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LosingFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RestoreFocus@FocusController@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RestoreFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RootActivate@FocusController@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVWindowActivatedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RootActivate(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasFocus@FocusController@@UEAAJPEAE@Z
    virtual long get_HasFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDepartFocusPermitted@FocusController@@UEAAJPEAE@Z
    virtual long get_IsDepartFocusPermitted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FocusNavigating@FocusController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FocusNavigating(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GotFocus@FocusController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GotFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LosingFocus@FocusController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LosingFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RestoreFocus@FocusController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RestoreFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RootActivate@FocusController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RootActivate(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireGotFocus@FocusController@@AEAAJPEAUIXamlSourceFocusNavigationRequest@Hosting@Xaml@UI@Windows@@@Z
    long FireGotFocus(::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@FocusController@@AEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreInputGotFocus@FocusController@@AEAAJPEAUIInspectable@@PEAUICoreWindowEventArgs@Core@UI@Windows@@@Z
    long OnCoreInputGotFocus(IInspectable *, ::Windows::UI::Core::ICoreWindowEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocusCommon@FocusController@@AEAAJXZ
    long OnGotFocusCommon();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FocusController@@EEAA@XZ
    virtual ~FocusController();
};
