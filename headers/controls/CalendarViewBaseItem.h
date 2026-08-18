#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 38 member(s).
namespace DirectUI {
class CalendarViewBaseItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CalendarViewBaseItem@DirectUI@@QEAA@XZ
    CalendarViewBaseItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusSelfOrChild@CalendarViewBaseItem@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@PEA_NW4FocusNavigationDirection@Input@456@@Z
    long FocusSelfOrChild(int, bool *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDate@CalendarViewBaseItem@DirectUI@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long GetDate(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainText@CalendarViewBaseItem@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetMainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CalendarViewBaseItem@DirectUI@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHovered@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long SetIsHovered(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsKeyboardFocused@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long SetIsKeyboardFocused(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOutOfScope@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long SetIsOutOfScope(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPressed@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long SetIsPressed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSelected@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long SetIsSelected(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsToday@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long SetIsToday(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowLabelText@CalendarViewBaseItem@DirectUI@@QEAAJ_N@Z
    long ShowLabelText(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundAndBorderBrushes@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateBackgroundAndBorderBrushes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBlackoutStrikethroughSize@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateBlackoutStrikethroughSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCornerRadius@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateCornerRadius();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLabelText@CalendarViewBaseItem@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long UpdateLabelText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMainText@CalendarViewBaseItem@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long UpdateMainText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockAlignments@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateTextBlockAlignments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockFontProperties@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateTextBlockFontProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockForeground@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateTextBlockForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockMargin@CalendarViewBaseItem@DirectUI@@QEAAJXZ
    long UpdateTextBlockMargin();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarViewBaseItem@DirectUI@@UEAA@XZ
    virtual ~CalendarViewBaseItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@CalendarViewBaseItem@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CalendarViewBaseItem@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CalendarViewBaseItem@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CalendarViewBaseItem@DirectUI@@MEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CalendarViewBaseItem@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaticRoundedItemMargin@CalendarViewBaseItem@DirectUI@@EEBA?AUThickness@Xaml@UI@Windows@@XZ
    virtual ::Windows::UI::Xaml::Thickness GetStaticRoundedItemMargin() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasStaticRoundedItemMargin@CalendarViewBaseItem@DirectUI@@EEBA_NXZ
    virtual bool HasStaticRoundedItemMargin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CalendarViewBaseItem@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateInternal@CalendarViewBaseItem@DirectUI@@AEAAJXZ
    long UpdateVisualStateInternal();
};
} // namespace DirectUI
