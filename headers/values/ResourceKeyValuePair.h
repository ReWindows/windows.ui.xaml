#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class ResourceKeyValuePair {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceKeyValuePair@DirectUI@@QEAA@XZ
    ResourceKeyValuePair();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Key@ResourceKeyValuePair@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Key(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@ResourceKeyValuePair@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Value(IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceKeyValuePair@DirectUI@@UEAA@XZ
    virtual ~ResourceKeyValuePair();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ResourceKeyValuePair@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ResourceKeyValuePair@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ResourceKeyValuePair@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
