#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ManipulationStartedRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJXZ
    virtual long Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Container(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cumulative@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    virtual long get_Cumulative(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJPEAW4PointerDeviceType@Input@Devices@Windows@@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ManipulationStartedRoutedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationStartedRoutedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@ManipulationStartedRoutedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationStartedRoutedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ManipulationStartedRoutedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationStartedRoutedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CumulativeImpl@ManipulationStartedRoutedEventArgs@DirectUI@@AEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    long get_CumulativeImpl(::Windows::UI::Input::ManipulationDelta *);
};
} // namespace DirectUI
