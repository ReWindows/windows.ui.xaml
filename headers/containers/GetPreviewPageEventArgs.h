#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class GetPreviewPageEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PageNumber@GetPreviewPageEventArgs@DirectUI@@UEAAJPEAH@Z
    virtual long get_PageNumber(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PageNumber@GetPreviewPageEventArgs@DirectUI@@QEAAJH@Z
    long put_PageNumber(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GetPreviewPageEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@GetPreviewPageEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GetPreviewPageEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GetPreviewPageEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GetPreviewPageEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
