#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TextBoxBeforeTextChangingEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@TextBoxBeforeTextChangingEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewText@TextBoxBeforeTextChangingEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_NewText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@TextBoxBeforeTextChangingEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewText@TextBoxBeforeTextChangingEventArgs@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long put_NewText(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBoxBeforeTextChangingEventArgs@DirectUI@@UEAA@XZ
    virtual ~TextBoxBeforeTextChangingEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextBoxBeforeTextChangingEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextBoxBeforeTextChangingEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextBoxBeforeTextChangingEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextBoxBeforeTextChangingEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
