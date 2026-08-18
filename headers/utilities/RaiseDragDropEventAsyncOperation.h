#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
namespace DirectUI {
class RaiseDragDropEventAsyncOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfAcceptedOperationShouldBeCleared@RaiseDragDropEventAsyncOperation@DirectUI@@SAJPEAUIInspectable@@PEAVCDependencyObject@@@Z
    static long CheckIfAcceptedOperationShouldBeCleared(IInspectable *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferralAdded@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJXZ
    virtual long DeferralAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferralCompleted@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJXZ
    virtual long DeferralCompleted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetResults(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RaiseDragDropEventAsyncOperation@DirectUI@@QEAA@XZ
    RaiseDragDropEventAsyncOperation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJW4DragDropMessageType@2@PEAVDropOperationTarget@2@PEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAUICoreDragUIOverride@6789Windows@@@Z
    virtual long RuntimeClassInitialize(int, ::DirectUI::DropOperationTarget *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcceptedOperation@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAUIInspectable@@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long SetAcceptedOperation(IInspectable *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcceptedOperationSetterUIElement@RaiseDragDropEventAsyncOperation@DirectUI@@SAJPEAUIInspectable@@PEAVCDependencyObject@@@Z
    static long SetAcceptedOperationSetterUIElement(IInspectable *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCustomDragVisual@RaiseDragDropEventAsyncOperation@DirectUI@@QEAAJXZ
    long SetupCustomDragVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@RaiseDragDropEventAsyncOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RaiseDragDropEventAsyncOperation@DirectUI@@UEAA@XZ
    virtual ~RaiseDragDropEventAsyncOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@RaiseDragDropEventAsyncOperation@DirectUI@@MEAAJXZ
    virtual long OnStart();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCustomVisualSetUp@RaiseDragDropEventAsyncOperation@DirectUI@@AEAAJPEAUIAsyncAction@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnCustomVisualSetUp(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRaiseDragDropCompleted@RaiseDragDropEventAsyncOperation@DirectUI@@AEAAJPEAUIAsyncAction@Foundation@Windows@@W4AsyncStatus@45ABI@@@Z
    long OnRaiseDragDropCompleted(WindissectOpaque *, int);
};
} // namespace DirectUI
