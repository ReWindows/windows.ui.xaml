#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DragItemsStartingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@DragItemsStartingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@DragItemsStartingEventArgs@DirectUI@@UEAAJPEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@DragItemsStartingEventArgs@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_Items(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@DragItemsStartingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragItemsStartingEventArgs@DirectUI@@UEAA@XZ
    virtual ~DragItemsStartingEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DragItemsStartingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DragItemsStartingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DragItemsStartingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DragItemsStartingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
