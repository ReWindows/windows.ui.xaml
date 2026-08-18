#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CFrameworkInputPaneDesktop {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFrameworkInputPaneDesktop@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hiding@CFrameworkInputPaneDesktop@@UEAAJH@Z
    virtual long Hiding(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFrameworkInputPaneDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHandler@CFrameworkInputPaneDesktop@@QEAAJ_NPEAUICoreWindow@Core@UI@Windows@@PEAUIUIContext@45@@Z
    long RegisterHandler(bool, ::Windows::UI::Core::ICoreWindow *, ::Windows::UI::IUIContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFrameworkInputPaneDesktop@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Showing@CFrameworkInputPaneDesktop@@UEAAJPEAUtagRECT@@H@Z
    virtual long Showing(tagRECT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterHandler@CFrameworkInputPaneDesktop@@QEAAJXZ
    long UnregisterHandler();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameworkInputPaneDesktop@@EEAA@XZ
    virtual ~CFrameworkInputPaneDesktop();
};
