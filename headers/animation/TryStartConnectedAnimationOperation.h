#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
namespace DirectUI {
class TryStartConnectedAnimationOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TryStartConnectedAnimationOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TryStartConnectedAnimationOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@TryStartConnectedAnimationOperation@DirectUI@@UEAAJPEAE@Z
    virtual long GetResults(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TryStartConnectedAnimationOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TryStartConnectedAnimationOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitAndStart@TryStartConnectedAnimationOperation@DirectUI@@QEAAJPEAVListViewBase@2@PEAUIConnectedAnimation@Animation@Media@Xaml@UI@Windows@@PEAUIInspectable@@PEAUHSTRING__@@@Z
    long InitAndStart(::DirectUI::ListViewBase *, ::Windows::UI::Xaml::Media::Animation::IConnectedAnimation *, IInspectable *, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TryStartConnectedAnimationOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TryStartConnectedAnimationOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TryStartConnectedAnimationOperation@DirectUI@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@TryStartConnectedAnimationOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@TryStartConnectedAnimationOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TryStartConnectedAnimationOperation@DirectUI@@UEAA@XZ
    virtual ~TryStartConnectedAnimationOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@TryStartConnectedAnimationOperation@DirectUI@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@TryStartConnectedAnimationOperation@DirectUI@@MEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@TryStartConnectedAnimationOperation@DirectUI@@MEAAJXZ
    virtual long OnStart();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TryStartConnectedAnimationOperation@DirectUI@@AEAAJXZ
    long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationElement@TryStartConnectedAnimationOperation@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetAnimationElement(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerContentChanging@TryStartConnectedAnimationOperation@DirectUI@@AEAAJPEAUIListViewBase@Controls@Xaml@UI@Windows@@PEAUIContainerContentChangingEventArgs@4567@@Z
    long OnContainerContentChanging(::Windows::UI::Xaml::Controls::IListViewBase *, ::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
};
} // namespace DirectUI
