#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class DragEventArgsGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@DragEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDragOperationDeferral@Xaml@UI@Windows@@@Z
    virtual long GetDeferral(::Windows::UI::Xaml::IDragOperationDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@DragEventArgsGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUPoint@Foundation@6@@Z
    virtual long GetPosition(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AcceptedOperation@DragEventArgsGenerated@DirectUI@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_AcceptedOperation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedOperations@DragEventArgsGenerated@DirectUI@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_AllowedOperations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@DragEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataView@DragEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_DataView(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragUIOverride@DragEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDragUIOverride@Xaml@UI@Windows@@@Z
    virtual long get_DragUIOverride(::Windows::UI::Xaml::IDragUIOverride * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@DragEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modifiers@DragEventArgsGenerated@DirectUI@@UEAAJPEAW4DragDropModifiers@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Modifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AcceptedOperation@DragEventArgsGenerated@DirectUI@@UEAAJW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_AcceptedOperation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Data@DragEventArgsGenerated@DirectUI@@UEAAJPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@DragEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~DragEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
