#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class HWCompLeafNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVisual@HWCompLeafNode@@UEAAJPEAVDCompTreeHost@@@Z
    virtual long EnsureVisual(DCompTreeHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@HWCompLeafNode@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisual@HWCompLeafNode@@UEBAPEAUIDCompVisual@DCompHelpers@@XZ
    virtual WindissectOpaque * GetVisual() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeVirtual@HWCompLeafNode@@UEAAJPEAVDCompTreeHost@@PEAI_N2@Z
    virtual long UpdateTreeVirtual(DCompTreeHost *, unsigned int *, bool, bool);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWCompLeafNode@@MEAA@XZ
    virtual ~HWCompLeafNode();
};
