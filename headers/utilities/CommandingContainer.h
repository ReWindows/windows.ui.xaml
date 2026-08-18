#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class CommandingContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContextChangedStatic@CommandingContainer@DirectUI@@SAJPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    static long NotifyContextChangedStatic(::Windows::UI::Xaml::IDependencyObject *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CommandingContainer@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CommandingContainer@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CommandingContainer@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandingContainer@DirectUI@@MEAA@XZ
    virtual ~CommandingContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandingTargetChanged@CommandingContainer@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@0@Z
    long OnCommandingTargetChanged(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandingTargetGotFocus@CommandingContainer@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnCommandingTargetGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CommandingContainer@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
};
} // namespace DirectUI
