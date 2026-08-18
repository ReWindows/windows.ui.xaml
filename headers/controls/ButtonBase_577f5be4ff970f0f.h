#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
namespace DirectUI {
class ButtonBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ButtonBase@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@ButtonBase@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProgrammaticClick@ButtonBase@DirectUI@@QEAAJXZ
    long ProgrammaticClick();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ButtonBase@DirectUI@@IEAA@XZ
    ButtonBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@ButtonBase@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCommand@ButtonBase@DirectUI@@IEAAJXZ
    long ExecuteCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ButtonBase@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@ButtonBase@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@ButtonBase@DirectUI@@MEAAJXZ
    virtual long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandChanged@ButtonBase@DirectUI@@MEAAJPEAUIInspectable@@0@Z
    virtual long OnCommandChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ButtonBase@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ButtonBase@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ButtonBase@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDownInternal@ButtonBase@DirectUI@@MEAAJW4VirtualKey@System@Windows@@PEAE@Z
    virtual long OnKeyDownInternal(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@ButtonBase@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ButtonBase@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ButtonBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ButtonBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ButtonBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@ButtonBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ButtonBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@ButtonBase@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ButtonBase@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@ButtonBase@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCanExecute@ButtonBase@DirectUI@@IEAAJXZ
    long UpdateCanExecute();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ButtonBase@DirectUI@@MEAA@XZ
    virtual ~ButtonBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStateFlags@ButtonBase@DirectUI@@AEAAJXZ
    long ClearStateFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidPointerPosition@ButtonBase@DirectUI@@AEAAJPEAE@Z
    long IsValidPointerPosition(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ButtonBase@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPointerUpAction@ButtonBase@DirectUI@@AEAAJXZ
    long PerformPointerUpAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePointerCaptureInternal@ButtonBase@DirectUI@@AEAAJPEAUIPointer@Input@Xaml@UI@Windows@@@Z
    long ReleasePointerCaptureInternal(::Windows::UI::Xaml::Input::IPointer *);
};
} // namespace DirectUI
