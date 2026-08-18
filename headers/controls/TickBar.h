#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class TickBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@TickBar@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@TickBar@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateFill@TickBar@DirectUI@@AEAAJXZ
    long PropagateFill();
};
} // namespace DirectUI
