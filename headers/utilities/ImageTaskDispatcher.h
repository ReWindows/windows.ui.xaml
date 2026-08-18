#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class ImageTaskDispatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@ImageTaskDispatcher@@UEAAJXZ
    virtual long Execute();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImageTaskDispatcher@@QEAA@PEAVCCoreServices@@@Z
    ImageTaskDispatcher(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueTask@ImageTaskDispatcher@@QEAAJPEAUIImageTask@@@Z
    long QueueTask(IImageTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@ImageTaskDispatcher@@QEAAXXZ
    void Shutdown();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImageTaskDispatcher@@EEAA@XZ
    virtual ~ImageTaskDispatcher();
};
