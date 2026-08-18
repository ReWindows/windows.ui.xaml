#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class TextContextMenuCommandHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextContextMenuCommandHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextContextMenuCommandHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextContextMenuCommandHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextContextMenuCommandHandler@@QEAA@XZ
    TextContextMenuCommandHandler();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommandId@TextContextMenuCommandHandler@@KAJPEAUIUICommand@Popups@UI@Windows@@PEAH@Z
    static long GetCommandId(::Windows::UI::Popups::IUICommand *, int *);
};
