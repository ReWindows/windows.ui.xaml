#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class AppBarToggleButton {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppBarToggleButton@DirectUI@@QEAA@XZ
    AppBarToggleButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultLabelPositionImpl@AppBarToggleButton@DirectUI@@QEAAJW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    long SetDefaultLabelPositionImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowStyleParams@AppBarToggleButton@DirectUI@@QEAAJ_N0@Z
    long SetOverflowStyleParams(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAcceleratorTextOverrideImpl@AppBarToggleButton@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_KeyboardAcceleratorTextOverrideImpl(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppBarToggleButton@DirectUI@@UEAA@XZ
    virtual ~AppBarToggleButton();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@AppBarToggleButton@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AppBarToggleButton@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@AppBarToggleButton@DirectUI@@MEAAJXZ
    virtual long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandChanged@AppBarToggleButton@DirectUI@@MEAAJPEAUIInspectable@@0@Z
    virtual long OnCommandChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@AppBarToggleButton@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@AppBarToggleButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@AppBarToggleButton@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@AppBarToggleButton@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardForWidthAdjustmentsForLabelOnRightStyle@AppBarToggleButton@DirectUI@@AEAAJPEAPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    long CreateStoryboardForWidthAdjustmentsForLabelOnRightStyle(::Windows::UI::Xaml::Media::Animation::IStoryboard * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveLabelPosition@AppBarToggleButton@DirectUI@@AEAAJPEAW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    long GetEffectiveLabelPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationForWidthAdjustments@AppBarToggleButton@DirectUI@@AEAAJXZ
    long StartAnimationForWidthAdjustments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationForWidthAdjustments@AppBarToggleButton@DirectUI@@AEAAJXZ
    long StopAnimationForWidthAdjustments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternalStyles@AppBarToggleButton@DirectUI@@AEAAJXZ
    long UpdateInternalStyles();
};
} // namespace DirectUI
