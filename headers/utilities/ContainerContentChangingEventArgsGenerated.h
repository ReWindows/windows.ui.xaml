#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class ContainerContentChangingEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUpdateCallback@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@@Z
    virtual long RegisterUpdateCallback(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUpdateCallbackWithPhase@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJIPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@@Z
    virtual long RegisterUpdateCallbackWithPhase(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLifetime@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJXZ
    long ResetLifetime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Callback@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJPEAPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@@Z
    long get_Callback(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InRecycleQueue@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_InRecycleQueue(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Item@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Item(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemContainer@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUISelectorItem@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_ItemContainer(::Windows::UI::Xaml::Controls::Primitives::ISelectorItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemIndex@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_ItemIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Phase@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJPEAI@Z
    virtual long get_Phase(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Callback@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJPEAU?$ITypedEventHandler@PEAVListViewBase@Controls@Xaml@UI@Windows@@PEAVContainerContentChangingEventArgs@2345@@Foundation@Windows@@@Z
    long put_Callback(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentShouldBeSet@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJE@Z
    long put_ContentShouldBeSet(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@ContainerContentChangingEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InRecycleQueue@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJE@Z
    long put_InRecycleQueue(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Item@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Item(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ItemIndex@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJH@Z
    long put_ItemIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Phase@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJI@Z
    long put_Phase(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WantsCallBack@ContainerContentChangingEventArgsGenerated@DirectUI@@QEAAJE@Z
    long put_WantsCallBack(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerContentChangingEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~ContainerContentChangingEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ContainerContentChangingEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ContainerContentChangingEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ContainerContentChangingEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ContainerContentChangingEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
