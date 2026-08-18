#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class TearoffXamlDCompInteropPrivate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompTranslateTransform@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long CreateDCompTranslateTransform(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardDCompVisual@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJXZ
    virtual long DiscardDCompVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompSharedVisualHandle@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJPEA_J@Z
    virtual long GetDCompSharedVisualHandle(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompTarget@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetDCompTarget(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompVisual@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetDCompVisual(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommit@TearoffXamlDCompInteropPrivate@DirectUI@@UEAAJXZ
    virtual long RequestCommit();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TearoffXamlDCompInteropPrivate@DirectUI@@QEAA@PEAVUIElement@1@@Z
    TearoffXamlDCompInteropPrivate(::DirectUI::UIElement *);
};
} // namespace DirectUI
