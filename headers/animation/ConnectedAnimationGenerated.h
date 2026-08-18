#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ConnectedAnimationGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ConnectedAnimationGenerated@DirectUI@@UEAAJXZ
    virtual long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompletedEventSourceNoRef@ConnectedAnimationGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@U?$ITypedEventHandler@PEAVConnectedAnimation@Animation@Media@Xaml@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@UIConnectedAnimation@Animation@Media@Xaml@UI@3@UIInspectable@@@2@@Z
    long GetCompletedEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ConnectedAnimationGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationComponent@ConnectedAnimationGenerated@DirectUI@@QEAAJW4ConnectedAnimationComponent@Animation@Media@Xaml@UI@Windows@@PEAUICompositionAnimationBase@Composition@78@@Z
    long SetAnimationComponent(int, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStart@ConnectedAnimationGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long TryStart(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartWithCoordinatedElements@ConnectedAnimationGenerated@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAU?$IIterable@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@6@PEAE@Z
    long TryStartWithCoordinatedElements(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@ConnectedAnimationGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVConnectedAnimation@Animation@Media@Xaml@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Configuration@ConnectedAnimationGenerated@DirectUI@@QEAAJPEAPEAUIConnectedAnimationConfiguration@Animation@Media@Xaml@UI@Windows@@@Z
    long get_Configuration(::Windows::UI::Xaml::Media::Animation::IConnectedAnimationConfiguration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@ConnectedAnimationGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ConnectedAnimationGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ConnectedAnimationGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ConnectedAnimationGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ConnectedAnimationGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
