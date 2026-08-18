#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class DropOperationTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfAcceptedOperationShouldBeReset@DropOperationTarget@DirectUI@@QEAAXPEAUIInspectable@@@Z
    void CheckIfAcceptedOperationShouldBeReset(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropAsync@DropOperationTarget@DirectUI@@UEAAJPEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@8@@Z
    virtual long DropAsync(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterAsync@DropOperationTarget@DirectUI@@UEAAJPEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAUICoreDragUIOverride@45678@PEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@8@@Z
    virtual long EnterAsync(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveAsync@DropOperationTarget@DirectUI@@UEAAJPEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAPEAUIAsyncAction@Foundation@8@@Z
    virtual long LeaveAsync(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverAsync@DropOperationTarget@DirectUI@@UEAAJPEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAUICoreDragUIOverride@45678@PEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@8@@Z
    virtual long OverAsync(::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DropOperationTarget@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragDropEventActionAsync@DropOperationTarget@DirectUI@@QEAAJW4DragDropMessageType@2@PEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAVRaiseDragDropEventAsyncOperation@2@PEAPEAUIAsyncAction@Foundation@9@@Z
    long RaiseDragDropEventActionAsync(int, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, ::DirectUI::RaiseDragDropEventAsyncOperation *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDragDropEventOperationAsync@DropOperationTarget@DirectUI@@QEAAJW4DragDropMessageType@2@PEAUICoreDragInfo@Core@DragDrop@DataTransfer@ApplicationModel@Windows@@PEAUICoreDragUIOverride@56789@PEAPEAU?$IAsyncOperation@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@9@@Z
    long RaiseDragDropEventOperationAsync(int, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragInfo *, ::Windows::ApplicationModel::DataTransfer::DragDrop::Core::ICoreDragUIOverride *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcceptedOperationSetterUIElement@DropOperationTarget@DirectUI@@QEAAXPEAUIInspectable@@@Z
    void SetAcceptedOperationSetterUIElement(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropOperationTarget@DirectUI@@UEAA@XZ
    virtual ~DropOperationTarget();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DropOperationTarget@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DropOperationTarget@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
};
} // namespace DirectUI
