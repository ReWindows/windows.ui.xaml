#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class HitHighlightVisualStateListener {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HitHighlightVisualStateListener@DirectUI@@QEAA@XZ
    HitHighlightVisualStateListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartListening@HitHighlightVisualStateListener@DirectUI@@QEAAJPEAUISolidColorBrush@Media@Xaml@UI@Windows@@0PEAUIFrameworkElement@567@PEAUIInspectable@@@Z
    long StartListening(::Windows::UI::Xaml::Media::ISolidColorBrush *, ::Windows::UI::Xaml::Media::ISolidColorBrush *, ::Windows::UI::Xaml::IFrameworkElement *, IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HitHighlightVisualStateListener@DirectUI@@UEAA@XZ
    virtual ~HitHighlightVisualStateListener();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateGroupWithName@HitHighlightVisualStateListener@DirectUI@@AEAAJPEAU?$IVector@PEAVVisualStateGroup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEBGPEAPEAUIVisualStateGroup@Xaml@UI@6@@Z
    long GetVisualStateGroupWithName(WindissectOpaque *, unsigned short const *, ::Windows::UI::Xaml::IVisualStateGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@HitHighlightVisualStateListener@DirectUI@@AEAAJEPEBG@Z
    long GoToState(unsigned char, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchCurrentVisualState@HitHighlightVisualStateListener@DirectUI@@AEAAJPEAUIVisualStateGroup@Xaml@UI@Windows@@@Z
    long MatchCurrentVisualState(::Windows::UI::Xaml::IVisualStateGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@HitHighlightVisualStateListener@DirectUI@@AEAAJPEAUIVisualStateChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnVisualStateChanged(::Windows::UI::Xaml::IVisualStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionHighlightColor@HitHighlightVisualStateListener@DirectUI@@AEAAJPEBG@Z
    long UpdateSelectionHighlightColor(unsigned short const *);
};
} // namespace DirectUI
