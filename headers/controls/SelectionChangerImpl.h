#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI::Selection {
class SelectionChangerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@SelectionChangerImpl@Selection@DirectUI@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@SelectionChangerImpl@Selection@DirectUI@@UEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@0E@Z
    virtual long End(WindissectOpaque *, WindissectOpaque *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SelectionChangerImpl@Selection@DirectUI@@QEAAJPEAV23@PEAVSelectionChangeApplier@3@@Z
    long Initialize(::DirectUI::Selection *, ::DirectUI::SelectionChangeApplier *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@SelectionChangerImpl@Selection@DirectUI@@UEAAEXZ
    virtual unsigned char IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@SelectionChangerImpl@Selection@DirectUI@@UEAAJHPEAUIInspectable@@E@Z
    virtual long Select(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unselect@SelectionChangerImpl@Selection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long Unselect(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnselectAll@SelectionChangerImpl@Selection@DirectUI@@UEAAJXZ
    virtual long UnselectAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectionChangerImpl@Selection@DirectUI@@UEAA@XZ
    virtual ~SelectionChangerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyCanSelectMultiple@SelectionChangerImpl@Selection@DirectUI@@AEAAJE@Z
    long ApplyCanSelectMultiple(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@SelectionChangerImpl@Selection@DirectUI@@AEAAJXZ
    long Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeltaSelectionChange@SelectionChangerImpl@Selection@DirectUI@@AEAAJPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@0@Z
    long CreateDeltaSelectionChange(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnrollUnselectAllRequest@SelectionChangerImpl@Selection@DirectUI@@AEAAJXZ
    long UnrollUnselectAllRequest();
};
} // namespace DirectUI::Selection
