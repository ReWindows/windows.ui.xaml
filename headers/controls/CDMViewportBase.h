#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CDMViewportBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContactId@CDMViewportBase@@QEAAJI@Z
    long AddContactId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsContactId@CDMViewportBase@@QEAAJIPEAI@Z
    long ContainsContactId(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactId@CDMViewportBase@@QEAAJIPEAI@Z
    long GetContactId(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactIdCount@CDMViewportBase@@QEAAJPEAI@Z
    long GetContactIdCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveContactId@CDMViewportBase@@QEAAJI@Z
    long RemoveContactId(unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDMViewportBase@@IEAA@PEAVCUIElement@@@Z
    CDMViewportBase(CUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDMViewportBase@@MEAA@XZ
    virtual ~CDMViewportBase();
};
