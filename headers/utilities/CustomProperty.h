#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class CustomProperty {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedValue@CustomProperty@DirectUI@@UEAAJPEAUIInspectable@@0PEAPEAU3@@Z
    virtual long GetIndexedValue(IInspectable *, IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CustomProperty@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@@Z
    virtual long GetValue(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndexedValue@CustomProperty@DirectUI@@UEAAJPEAUIInspectable@@00@Z
    virtual long SetIndexedValue(IInspectable *, IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CustomProperty@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long SetValue(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CustomProperty@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CustomProperty@DirectUI@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CustomProperty@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomProperty@DirectUI@@UEAA@XZ
    virtual ~CustomProperty();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CustomProperty@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CustomProperty@DirectUI@@IEAA@XZ
    CustomProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CustomProperty@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CustomProperty@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
