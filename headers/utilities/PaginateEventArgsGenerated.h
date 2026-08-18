#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PaginateEventArgsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPreviewPageNumber@PaginateEventArgsGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_CurrentPreviewPageNumber(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrintTaskOptions@PaginateEventArgsGenerated@DirectUI@@UEAAJPEAPEAUIPrintTaskOptionsCore@Printing@Graphics@Windows@@@Z
    virtual long get_PrintTaskOptions(::Windows::Graphics::Printing::IPrintTaskOptionsCore * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PaginateEventArgsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@PaginateEventArgsGenerated@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PaginateEventArgsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PaginateEventArgsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PaginateEventArgsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
