#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class DragStartingEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferralAdded@DragStartingEventArgsGenerated@DirectUI@@UEAAJXZ
    virtual long DeferralAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferralCompleted@DragStartingEventArgsGenerated@DirectUI@@UEAAJXZ
    virtual long DeferralCompleted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDragOperationDeferral@Xaml@UI@Windows@@@Z
    virtual long GetDeferral(::Windows::UI::Xaml::IDragOperationDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUPoint@Foundation@6@@Z
    virtual long GetPosition(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcceptedOperation@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAUIInspectable@@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long SetAcceptedOperation(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedOperations@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_AllowedOperations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragUI@DragStartingEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIDragUI@Xaml@UI@Windows@@@Z
    virtual long get_DragUI(::Windows::UI::Xaml::IDragUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowedOperations@DragStartingEventArgsGenerated@DirectUI@@UEAAJW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long put_AllowedOperations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@DragStartingEventArgsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragStartingEventArgsGenerated@DirectUI@@UEAA@XZ
    virtual ~DragStartingEventArgsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragStartingEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragStartingEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragStartingEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragStartingEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
