#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CJupiterErrorServiceListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CJupiterErrorServiceListener@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyErrorAdded@CJupiterErrorServiceListener@@UEAAXJPEAUIErrorService@@@Z
    virtual void NotifyErrorAdded(long, IErrorService *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CJupiterErrorServiceListener@@UEAAIXZ
    virtual unsigned int Release();
};
