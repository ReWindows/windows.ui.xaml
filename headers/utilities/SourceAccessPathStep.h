#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class SourceAccessPathStep {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceType@SourceAccessPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetSourceType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@SourceAccessPathStep@DirectUI@@UEAAJPEAPEBVCClassInfo@@@Z
    virtual long GetType(CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@SourceAccessPathStep@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@SourceAccessPathStep@DirectUI@@UEAAIXZ
    virtual unsigned int IsConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReConnect@SourceAccessPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long ReConnect(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@SourceAccessPathStep@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long SetValue(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SourceAccessPathStep@DirectUI@@UEAA@XZ
    virtual ~SourceAccessPathStep();
};
} // namespace DirectUI
