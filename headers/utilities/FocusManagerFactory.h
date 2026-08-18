#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 46 member(s).
namespace DirectUI {
class FocusManagerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstFocusableElement@FocusManagerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    virtual long FindFirstFocusableElement(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLastFocusableElement@FocusManagerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    virtual long FindLastFocusableElement(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextElement@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAPEAUIDependencyObject@567@@Z
    virtual long FindNextElement(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextElementWithOptions@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIFindNextElementOptions@4567@PEAPEAUIDependencyObject@567@@Z
    virtual long FindNextElementWithOptions(int, ::Windows::UI::Xaml::Input::IFindNextElementOptions *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusWithSearchRootIgnoreEngagement@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@@Z
    virtual long FindNextFocusWithSearchRootIgnoreEngagement(int, IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusWithSearchRootIgnoreEngagementWithClip@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIInspectable@@EEPEAPEAU8@@Z
    virtual long FindNextFocusWithSearchRootIgnoreEngagementWithClip(int, IInspectable *, unsigned char, unsigned char, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusWithSearchRootIgnoreEngagementWithHintRect@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIInspectable@@URect@Foundation@7@2PEAPEAU8@@Z
    virtual long FindNextFocusWithSearchRootIgnoreEngagementWithHintRect(int, IInspectable *, WindissectOpaque, WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusableElement@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAPEAUIUIElement@567@@Z
    virtual long FindNextFocusableElement(int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusableElementWithHint@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@URect@Foundation@7@PEAPEAUIUIElement@567@@Z
    virtual long FindNextFocusableElementWithHint(int, WindissectOpaque, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@FocusManagerFactory@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetFocusedElement(::Windows::UI::Xaml::IXamlRoot *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@FocusManagerFactory@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetFocusedElement(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEngagedControl@FocusManagerFactory@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetEngagedControl(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElement@FocusManagerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4FocusState@456@EEEEPEAE@Z
    virtual long SetFocusedElement(::Windows::UI::Xaml::IDependencyObject *, int, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElementWithDirection@FocusManagerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4FocusState@456@EEW4FocusNavigationDirection@Input@456@PEAE@Z
    virtual long SetFocusedElementWithDirection(::Windows::UI::Xaml::IDependencyObject *, int, unsigned char, unsigned char, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFocusAsync@FocusManagerFactory@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4FocusState@456@PEAPEAU?$IAsyncOperation@PEAVFocusMovementResult@Input@Xaml@UI@Windows@@@Foundation@6@@Z
    virtual long TryFocusAsync(::Windows::UI::Xaml::IDependencyObject *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocus@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAE@Z
    virtual long TryMoveFocus(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocusAsync@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAPEAU?$IAsyncOperation@PEAVFocusMovementResult@Input@Xaml@UI@Windows@@@Foundation@7@@Z
    virtual long TryMoveFocusAsync(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocusWithOptions@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIFindNextElementOptions@4567@PEAE@Z
    virtual long TryMoveFocusWithOptions(int, ::Windows::UI::Xaml::Input::IFindNextElementOptions *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocusWithOptionsAsync@FocusManagerFactory@DirectUI@@UEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIFindNextElementOptions@4567@PEAPEAU?$IAsyncOperation@PEAVFocusMovementResult@Input@Xaml@UI@Windows@@@Foundation@7@@Z
    virtual long TryMoveFocusWithOptionsAsync(int, ::Windows::UI::Xaml::Input::IFindNextElementOptions *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FocusedElementRemoved@FocusManagerFactory@DirectUI@@UEAAJPEAUIFocusedElementRemovedEventHandler@Input@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FocusedElementRemoved(::Windows::UI::Xaml::Input::IFocusedElementRemovedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GettingFocus@FocusManagerFactory@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVGettingFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GettingFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_GotFocus@FocusManagerFactory@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVFocusManagerGotFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_GotFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LosingFocus@FocusManagerFactory@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVLosingFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LosingFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LostFocus@FocusManagerFactory@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVFocusManagerLostFocusEventArgs@Input@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LostFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FocusedElementRemoved@FocusManagerFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FocusedElementRemoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GettingFocus@FocusManagerFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GettingFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_GotFocus@FocusManagerFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_GotFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LosingFocus@FocusManagerFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LosingFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LostFocus@FocusManagerFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LostFocus(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FocusManagerFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FocusManagerFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FocusManagerFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstFocusableElementImpl@FocusManagerFactory@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    long FindFirstFocusableElementImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLastFocusableElementImpl@FocusManagerFactory@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU3456@@Z
    long FindLastFocusableElementImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextElementImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAPEAUIDependencyObject@567@@Z
    long FindNextElementImpl(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextElementWithOptionsImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIFindNextElementOptions@4567@PEAPEAUIDependencyObject@567@@Z
    long FindNextElementWithOptionsImpl(int, ::Windows::UI::Xaml::Input::IFindNextElementOptions *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusWithSearchRootIgnoreEngagementImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@@Z
    long FindNextFocusWithSearchRootIgnoreEngagementImpl(int, IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusWithSearchRootIgnoreEngagementWithClipImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIInspectable@@EEPEAPEAU8@@Z
    long FindNextFocusWithSearchRootIgnoreEngagementWithClipImpl(int, IInspectable *, unsigned char, unsigned char, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusWithSearchRootIgnoreEngagementWithHintRectImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAUIInspectable@@URect@Foundation@7@2PEAPEAU8@@Z
    long FindNextFocusWithSearchRootIgnoreEngagementWithHintRectImpl(int, IInspectable *, WindissectOpaque, WindissectOpaque, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusableElementImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@PEAPEAUIUIElement@567@@Z
    long FindNextFocusableElementImpl(int, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusableElementWithHintImpl@FocusManagerFactory@DirectUI@@AEAAJW4FocusNavigationDirection@Input@Xaml@UI@Windows@@URect@Foundation@7@PEAPEAUIUIElement@567@@Z
    long FindNextFocusableElementWithHintImpl(int, WindissectOpaque, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementImpl@FocusManagerFactory@DirectUI@@AEAAJPEAUIXamlRoot@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    long GetFocusedElementImpl(::Windows::UI::Xaml::IXamlRoot *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementImpl@FocusManagerFactory@DirectUI@@AEAAJPEAPEAUIInspectable@@@Z
    long GetFocusedElementImpl(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEngagedControlImpl@FocusManagerFactory@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long SetEngagedControlImpl(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElementWithDirectionImpl@FocusManagerFactory@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4FocusState@456@EEW4FocusNavigationDirection@Input@456@PEAE@Z
    long SetFocusedElementWithDirectionImpl(::Windows::UI::Xaml::IDependencyObject *, int, unsigned char, unsigned char, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFocusAsyncImpl@FocusManagerFactory@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4FocusState@456@PEAPEAU?$IAsyncOperation@PEAVFocusMovementResult@Input@Xaml@UI@Windows@@@Foundation@6@@Z
    long TryFocusAsyncImpl(::Windows::UI::Xaml::IDependencyObject *, int, WindissectOpaque * *);
};
} // namespace DirectUI
