#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class ManipulationCompletedRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Container(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cumulative@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    virtual long get_Cumulative(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertial@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInertial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAW4PointerDeviceType@Input@Devices@Windows@@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Velocities@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJPEAUManipulationVelocities@Input@UI@Windows@@@Z
    virtual long get_Velocities(::Windows::UI::Input::ManipulationVelocities *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ManipulationCompletedRoutedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationCompletedRoutedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@ManipulationCompletedRoutedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationCompletedRoutedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ManipulationCompletedRoutedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationCompletedRoutedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CumulativeImpl@ManipulationCompletedRoutedEventArgs@DirectUI@@AEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    long get_CumulativeImpl(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VelocitiesImpl@ManipulationCompletedRoutedEventArgs@DirectUI@@AEAAJPEAUManipulationVelocities@Input@UI@Windows@@@Z
    long get_VelocitiesImpl(::Windows::UI::Input::ManipulationVelocities *);
};
} // namespace DirectUI
