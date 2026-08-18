#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class ApplicationDataProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationDataProvider@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ApplicationDataProvider@@SAJPEAPEAV1@@Z
    static long Create(ApplicationDataProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDataResource@ApplicationDataProvider@@UEAAJPEAUIPALUri@@PEAPEAUIPALResource@@@Z
    virtual long GetAppDataResource(IPALUri *, IPALResource * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationDataProvider@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationDataProvider@@UEAA@XZ
    virtual ~ApplicationDataProvider();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageIdentityName@ApplicationDataProvider@@CAJPEAVxstring_ptr@@@Z
    static long GetPackageIdentityName(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateFolderUris@ApplicationDataProvider@@CAJPEAPEAUIPALUri@@00@Z
    static long GetStateFolderUris(IPALUri * *, IPALUri * *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationDataProvider@@AEAAJXZ
    long Initialize();
};
