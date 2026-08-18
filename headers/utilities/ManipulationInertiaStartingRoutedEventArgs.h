#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
namespace DirectUI {
class ManipulationInertiaStartingRoutedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Container@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Container(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cumulative@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    virtual long get_Cumulative(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delta@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    virtual long get_Delta(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpansionBehavior@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIInertiaExpansionBehavior@Input@Xaml@UI@Windows@@@Z
    virtual long get_ExpansionBehavior(::Windows::UI::Xaml::Input::IInertiaExpansionBehavior * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAW4PointerDeviceType@Input@Devices@Windows@@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationBehavior@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIInertiaRotationBehavior@Input@Xaml@UI@Windows@@@Z
    virtual long get_RotationBehavior(::Windows::UI::Xaml::Input::IInertiaRotationBehavior * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslationBehavior@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAPEAUIInertiaTranslationBehavior@Input@Xaml@UI@Windows@@@Z
    virtual long get_TranslationBehavior(::Windows::UI::Xaml::Input::IInertiaTranslationBehavior * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Velocities@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAUManipulationVelocities@Input@UI@Windows@@@Z
    virtual long get_Velocities(::Windows::UI::Input::ManipulationVelocities *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExpansionBehavior@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAUIInertiaExpansionBehavior@Input@Xaml@UI@Windows@@@Z
    virtual long put_ExpansionBehavior(::Windows::UI::Xaml::Input::IInertiaExpansionBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationBehavior@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAUIInertiaRotationBehavior@Input@Xaml@UI@Windows@@@Z
    virtual long put_RotationBehavior(::Windows::UI::Xaml::Input::IInertiaRotationBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslationBehavior@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@UEAAJPEAUIInertiaTranslationBehavior@Input@Xaml@UI@Windows@@@Z
    virtual long put_TranslationBehavior(::Windows::UI::Xaml::Input::IInertiaTranslationBehavior *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CumulativeImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@AEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    long get_CumulativeImpl(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@AEAAJPEAUManipulationDelta@Input@UI@Windows@@@Z
    long get_DeltaImpl(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VelocitiesImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@AEAAJPEAUManipulationVelocities@Input@UI@Windows@@@Z
    long get_VelocitiesImpl(::Windows::UI::Input::ManipulationVelocities *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExpansionBehaviorImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@AEAAJPEAUIInertiaExpansionBehavior@Input@Xaml@UI@Windows@@@Z
    long put_ExpansionBehaviorImpl(::Windows::UI::Xaml::Input::IInertiaExpansionBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationBehaviorImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@AEAAJPEAUIInertiaRotationBehavior@Input@Xaml@UI@Windows@@@Z
    long put_RotationBehaviorImpl(::Windows::UI::Xaml::Input::IInertiaRotationBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslationBehaviorImpl@ManipulationInertiaStartingRoutedEventArgs@DirectUI@@AEAAJPEAUIInertiaTranslationBehavior@Input@Xaml@UI@Windows@@@Z
    long put_TranslationBehaviorImpl(::Windows::UI::Xaml::Input::IInertiaTranslationBehavior *);
};
} // namespace DirectUI
