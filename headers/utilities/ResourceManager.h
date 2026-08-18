#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class ResourceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ResourceManager@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCacheResource@ResourceManager@@UEAAJPEBUIPALUri@@PEAI@Z
    virtual long CanCacheResource(IPALUri const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanResourceBeInvalidated@ResourceManager@@UEAAJPEAUIPALUri@@PEA_N@Z
    virtual long CanResourceBeInvalidated(IPALUri *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombineResourceUri@ResourceManager@@UEAAJPEAUIPALUri@@AEBVxstring_ptr_view@@PEAPEAU2@@Z
    virtual long CombineResourceUri(IPALUri *, xstring_ptr_view const &, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ResourceManager@@SAJPEAVCCoreServices@@PEAXPEAPEAUIPALResourceManager@@@Z
    static long Create(CCoreServices *, void *, IPALResourceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEvents@ResourceManager@@UEAAXXZ
    virtual void DetachEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBag@ResourceManager@@UEAAJAEBVxstring_ptr_view@@PEBUIPALUri@@PEAPEAV?$xpairlist@Vxstring_ptr@@V1@@@@Z
    virtual long GetPropertyBag(xstring_ptr_view const &, IPALUri const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceInvalidationId@ResourceManager@@UEAAIXZ
    virtual unsigned int GetResourceInvalidationId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUriForPropertyBagLookup@ResourceManager@@UEAAJAEBVxstring_ptr_view@@AEBV?$xref_ptr@UIPALUri@@@@IAEAV3@@Z
    virtual long GetUriForPropertyBagLookup(xstring_ptr_view const &, WindissectOpaque const &, unsigned int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAmbiguousUriFragment@ResourceManager@@UEAAJAEBVxstring_ptr_view@@PEAI@Z
    virtual long IsAmbiguousUriFragment(xstring_ptr_view const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalResourceUri@ResourceManager@@UEAAJPEAUIPALUri@@PEAI@Z
    virtual long IsLocalResourceUri(IPALUri *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ResourceManager@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessMUILanguages@ResourceManager@@UEAAJXZ
    virtual long SetProcessMUILanguages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@ResourceManager@@UEAAJI@Z
    virtual long SetScaleFactor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetLocalResource@ResourceManager@@UEAAJPEAUIPALUri@@PEAPEAUIPALResource@@@Z
    virtual long TryGetLocalResource(IPALUri *, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadLocalResource@ResourceManager@@UEAAJPEAUIPALUri@@PEAPEAUIPALMemory@@@Z
    virtual long TryLoadLocalResource(IPALUri *, IPALMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryResolveUri@ResourceManager@@UEAAJAEBVxstring_ptr_view@@PEAUIPALUri@@PEAPEAUIPALResource@@@Z
    virtual long TryResolveUri(xstring_ptr_view const &, IPALUri *, IPALResource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceManager@@UEAA@XZ
    virtual ~ResourceManager();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceManager@@IEAA@PEAVCCoreServices@@PEAUIPALResourceProvider@@PEAUIPALApplicationDataProvider@@@Z
    ResourceManager(CCoreServices *, IPALResourceProvider *, IPALApplicationDataProvider *);
};
