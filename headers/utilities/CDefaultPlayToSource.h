#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CDefaultPlayToSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivatePlayToManager@CDefaultPlayToSource@@UEAAJXZ
    virtual long ActivatePlayToManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CDefaultPlayToSource@@QEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDefaultPlayToSource@@UEAA@XZ
    virtual ~CDefaultPlayToSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSource@CDefaultPlayToSource@@AEAAJPEAPEAUIPlayToSource@PlayTo@Media@Windows@@@Z
    long SelectSource(::Windows::Media::PlayTo::IPlayToSource * *);
};
