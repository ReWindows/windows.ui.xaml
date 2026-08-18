#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class ScrollData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollData@DirectUI@@QEAA@XZ
    ScrollData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@ScrollData@DirectUI@@QEAAJAEBUScrollVector@2@@Z
    long put_Offset(::DirectUI::ScrollVector const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OffsetX@ScrollData@DirectUI@@QEAAJN@Z
    long put_OffsetX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OffsetY@ScrollData@DirectUI@@QEAAJN@Z
    long put_OffsetY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwner@ScrollData@DirectUI@@QEAAJPEAUIScrollOwner@2@@Z
    long put_ScrollOwner(::DirectUI::IScrollOwner *);
};
} // namespace DirectUI
