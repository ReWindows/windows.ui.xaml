#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
namespace DirectUI {
class StartDragAsyncOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@StartDragAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@StartDragAsyncOperation@DirectUI@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCancel@StartDragAsyncOperation@DirectUI@@QEAAJXZ
    long DoCancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@StartDragAsyncOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@StartDragAsyncOperation@DirectUI@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetResults(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@StartDragAsyncOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@StartDragAsyncOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@StartDragAsyncOperation@DirectUI@@UEAAJPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    virtual long Invoke(WindissectOpaque *, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@StartDragAsyncOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StartDragAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@StartDragAsyncOperation@DirectUI@@UEAAJVWeakRefPtr@ctl@@PEAUICoreDragOperation@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragOperation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@StartDragAsyncOperation@DirectUI@@QEAAJ_NUPoint@Foundation@Windows@@PEAVDragVisual@2@@Z
    long SetVisual(bool, WindissectOpaque, ::DirectUI::DragVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartDragAsyncOperation@DirectUI@@QEAA@XZ
    StartDragAsyncOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartIfNeeded@StartDragAsyncOperation@DirectUI@@QEAAJXZ
    long StartIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@StartDragAsyncOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@StartDragAsyncOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartDragAsyncOperation@DirectUI@@UEAA@XZ
    virtual ~StartDragAsyncOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@StartDragAsyncOperation@DirectUI@@MEAAJXZ
    virtual long OnStart();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRenderCompleted@StartDragAsyncOperation@DirectUI@@AEAAJPEAUIAsyncAction@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnRenderCompleted(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartIfNeededImpl@StartDragAsyncOperation@DirectUI@@AEAAJPEAVCDependencyObject@@UPoint@Foundation@Windows@@@Z
    long StartIfNeededImpl(CDependencyObject *, WindissectOpaque);
};
} // namespace DirectUI
