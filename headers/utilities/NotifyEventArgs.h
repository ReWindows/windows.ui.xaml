#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class NotifyEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallingUri@NotifyEventArgs@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_CallingUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@NotifyEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Value(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CallingUri@NotifyEventArgs@DirectUI@@QEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long put_CallingUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@NotifyEventArgs@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long put_Value(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotifyEventArgs@DirectUI@@UEAA@XZ
    virtual ~NotifyEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NotifyEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NotifyEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@NotifyEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@NotifyEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
