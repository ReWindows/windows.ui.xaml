#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class LoadMoreItemsOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LoadMoreItemsOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@LoadMoreItemsOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@LoadMoreItemsOperation@DirectUI@@UEAAJPEAULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Z
    virtual long GetResults(::Windows::UI::Xaml::Data::LoadMoreItemsResult *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@LoadMoreItemsOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@LoadMoreItemsOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@LoadMoreItemsOperation@DirectUI@@QEAAJPEAVListViewBase@2@E@Z
    long Init(::DirectUI::ListViewBase *, unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LoadMoreItemsOperation@DirectUI@@QEAA@XZ
    LoadMoreItemsOperation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LoadMoreItemsOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisedCompleteWithResult@LoadMoreItemsOperation@DirectUI@@QEAAJIW4AsyncStatus@Foundation@Windows@ABI@@@Z
    long RaisedCompleteWithResult(unsigned int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LoadMoreItemsOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LoadMoreItemsOperation@DirectUI@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@LoadMoreItemsOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@LoadMoreItemsOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@ULoadMoreItemsResult@Data@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LoadMoreItemsOperation@DirectUI@@UEAA@XZ
    virtual ~LoadMoreItemsOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@LoadMoreItemsOperation@DirectUI@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@LoadMoreItemsOperation@DirectUI@@MEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@LoadMoreItemsOperation@DirectUI@@MEAAJXZ
    virtual long OnStart();
};
} // namespace DirectUI
