#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class ManipulationDeltaRoutedEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJXZ
    virtual long Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Container(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cumulative@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    virtual long get_Cumulative(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delta@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    virtual long get_Delta(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertial@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsInertial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAW4PointerDeviceType@Input@Devices@Windows@@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Velocities@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJPEAUManipulationVelocities@Input@UI@Windows@@@Z
    virtual long get_Velocities(::Windows::UI::Input::ManipulationVelocities *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationDeltaRoutedEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
