#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
class CWindowlessSiteHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowlessSiteHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CWindowlessSiteHost@@UEAAXPEAX@Z
    virtual void Destroy(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentFragment@CWindowlessSiteHost@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long GetAdjacentFragment(int, IRawElementProviderFragment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundaryRectangle@CWindowlessSiteHost@@UEAAJPEAUUiaRect@@@Z
    virtual long GetBoundaryRectangle(UiaRect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildRawElementProviderSimple@CWindowlessSiteHost@@UEAAJPEAXPEAPEAX@Z
    virtual long GetChildRawElementProviderSimple(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentAutomationPeer@CWindowlessSiteHost@@QEAAJPEAPEAVCAutomationPeer@@@Z
    long GetParentAutomationPeer(CAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyOverrideValue@CWindowlessSiteHost@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyOverrideValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeIdPrefix@CWindowlessSiteHost@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeIdPrefix(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnwrappedPattern@CWindowlessSiteHost@@UEAAJPEAXHIPEAPEAX@Z
    virtual long GetUnwrappedPattern(void *, int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowlessSiteHost@@UEAAJPEAUIXcpHostSite@@PEAVCDependencyObject@@I@Z
    virtual long Initialize(IXcpHostSite *, CDependencyObject *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CWindowlessSiteHost@@UEAAJXZ
    virtual long IsVisible();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowlessSiteHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowlessSiteHost@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariantAsScreenRect@CWindowlessSiteHost@@AEAAJUUiaRect@@PEAUtagVARIANT@@@Z
    long ConvertToVariantAsScreenRect(UiaRect, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProvider@CWindowlessSiteHost@@AEAAJPEAX@Z
    long EnsureProvider(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowlessSiteHost@@EEAA@XZ
    virtual ~CWindowlessSiteHost();
};
