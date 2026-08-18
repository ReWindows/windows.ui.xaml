#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DataContextChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@DataContextChangedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewValue@DataContextChangedEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_NewValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@DataContextChangedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewValue@DataContextChangedEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_NewValue(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataContextChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~DataContextChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataContextChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataContextChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DataContextChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataContextChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
