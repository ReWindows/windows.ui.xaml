#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ManipulationStartingRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Container(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJPEAW4ManipulationModes@Input@Xaml@UI@Windows@@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Pivot@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIManipulationPivot@Input@Xaml@UI@Windows@@@Z
    virtual long get_Pivot(::Windows::UI::Xaml::Input::IManipulationPivot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Container@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_Container(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mode@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJW4ManipulationModes@Input@Xaml@UI@Windows@@@Z
    virtual long put_Mode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Pivot@ManipulationStartingRoutedEventArgs@DirectUI@@UEAAJPEAUIManipulationPivot@Input@Xaml@UI@Windows@@@Z
    virtual long put_Pivot(::Windows::UI::Xaml::Input::IManipulationPivot *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationStartingRoutedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@ManipulationStartingRoutedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationStartingRoutedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ManipulationStartingRoutedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationStartingRoutedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
