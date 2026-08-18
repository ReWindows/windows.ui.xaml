#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class AsyncImageFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAsync@AsyncImageFactory@@UEAAJAEBV?$xref_ptr@VImageCopyParams@@@@AEBV?$xref_ptr@UIImageDecodeCallback@@@@PEAPEAUIPALWorkItem@@@Z
    virtual long CopyAsync(WindissectOpaque const &, WindissectOpaque const &, IPALWorkItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AsyncImageFactory@@SAJPEAUIPALWorkItemFactory@@PEAVImageTaskDispatcher@@PEAPEAV1@@Z
    static long Create(IPALWorkItemFactory *, ImageTaskDispatcher *, AsyncImageFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@AsyncImageFactory@@QEAAJXZ
    long Shutdown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkCallback@AsyncImageFactory@@KAJPEAUIObject@@@Z
    static long WorkCallback(IObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncImageFactory@@MEAA@XZ
    virtual ~AsyncImageFactory();
};
