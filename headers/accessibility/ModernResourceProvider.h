#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class ModernResourceProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ModernResourceProvider@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertResourceMapUriToFullyQualified@ModernResourceProvider@@UEAAJAEBV?$xref_ptr@UIPALUri@@@@AEAV2@@Z
    virtual long ConvertResourceMapUriToFullyQualified(WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ModernResourceProvider@@SAJPEAUIMrtResourceManager@@PEAPEAV1@@Z
    static long Create(IMrtResourceManager *, ModernResourceProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResourceForFilePath@ModernResourceProvider@@UEAAJPEAUIPALUri@@AEBVxstring_ptr@@PEAPEAUIPALResource@@@Z
    virtual long CreateResourceForFilePath(IPALUri *, xstring_ptr const &, IPALResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEvents@ModernResourceProvider@@UEAAXXZ
    virtual void DetachEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBag@ModernResourceProvider@@UEAAJPEBUIPALUri@@PEAPEAV?$xpairlist@Vxstring_ptr@@V1@@@@Z
    virtual long GetPropertyBag(IPALUri const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@ModernResourceProvider@@UEAAJAEBVxstring_ptr_view@@PEAVxstring_ptr@@@Z
    virtual long GetString(xstring_ptr_view const &, xstring_ptr *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ModernResourceProvider@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessMUILanguages@ModernResourceProvider@@UEAAJXZ
    virtual long SetProcessMUILanguages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@ModernResourceProvider@@UEAAJI@Z
    virtual long SetScaleFactor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreate@ModernResourceProvider@@SAJPEAPEAV1@@Z
    static long TryCreate(ModernResourceProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetLocalResource@ModernResourceProvider@@UEAAJPEAUIPALUri@@PEAPEAUIPALResource@@@Z
    virtual long TryGetLocalResource(IPALUri *, IPALResource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModernResourceProvider@@UEAA@XZ
    virtual ~ModernResourceProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMapChangedHandler@ModernResourceProvider@@AEAAJPEAU?$IObservableMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z
    long AddMapChangedHandler(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMrtResourceManagerForFile@ModernResourceProvider@@CAJPEBGPEAPEAUIMrtResourceManager@@@Z
    static long CreateMrtResourceManagerForFile(unsigned short const *, IMrtResourceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContextIsValid@ModernResourceProvider@@AEAAJXZ
    long EnsureContextIsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFallbackResourceProvider@ModernResourceProvider@@AEAAJXZ
    long EnsureFallbackResourceProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeContext@ModernResourceProvider@@AEAAJXZ
    long InitializeContext();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModernResourceProvider@@AEAA@XZ
    ModernResourceProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextQualifierChanged@ModernResourceProvider@@AEAAJPEAU?$IObservableMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAU?$IMapChangedEventArgs@PEAUHSTRING__@@@345@@Z
    long OnContextQualifierChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareModernResourceName@ModernResourceProvider@@CAJIPEBGPEAVxstring_ptr@@@Z
    static long PrepareModernResourceName(unsigned int, unsigned short const *, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProbeForPriFile@ModernResourceProvider@@CAJPEAVxstring_ptr@@@Z
    static long ProbeForPriFile(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMapChangedHandler@ModernResourceProvider@@AEAAXXZ
    void RemoveMapChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetContext@ModernResourceProvider@@AEAAJXZ
    long ResetContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateMrtResourceManagerForCurrentApplication@ModernResourceProvider@@CAJPEAPEAUIMrtResourceManager@@@Z
    static long TryCreateMrtResourceManagerForCurrentApplication(IMrtResourceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceCandidate@ModernResourceProvider@@AEAAJPEAUIPALUri@@PEAPEAU2@PEAPEAUIResourceCandidate@@@Z
    long TryGetResourceCandidate(IPALUri *, IPALUri * *, IResourceCandidate * *);
};
