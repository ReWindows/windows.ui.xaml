#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CommonResourceProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CommonResourceProvider@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertResourceMapUriToFullyQualified@CommonResourceProvider@@UEAAJAEBV?$xref_ptr@UIPALUri@@@@AEAV2@@Z
    virtual long ConvertResourceMapUriToFullyQualified(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CommonResourceProvider@@SAJPEAPEAV1@@Z
    static long Create(CommonResourceProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResourceForFilePath@CommonResourceProvider@@UEAAJPEAUIPALUri@@AEBVxstring_ptr@@PEAPEAUIPALResource@@@Z
    virtual long CreateResourceForFilePath(IPALUri *, xstring_ptr const &, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEvents@CommonResourceProvider@@UEAAXXZ
    virtual void DetachEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBag@CommonResourceProvider@@UEAAJPEBUIPALUri@@PEAPEAV?$xpairlist@Vxstring_ptr@@V1@@@@Z
    virtual long GetPropertyBag(IPALUri const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CommonResourceProvider@@UEAAJAEBVxstring_ptr_view@@PEAVxstring_ptr@@@Z
    virtual long GetString(xstring_ptr_view const &, xstring_ptr *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CommonResourceProvider@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessMUILanguages@CommonResourceProvider@@UEAAJXZ
    virtual long SetProcessMUILanguages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@CommonResourceProvider@@UEAAJI@Z
    virtual long SetScaleFactor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetLocalResource@CommonResourceProvider@@UEAAJPEAUIPALUri@@PEAPEAUIPALResource@@@Z
    virtual long TryGetLocalResource(IPALUri *, IPALResource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommonResourceProvider@@UEAA@XZ
    virtual ~CommonResourceProvider();
};
