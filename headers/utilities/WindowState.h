#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class WindowState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAdjustment@WindowState@ModernCollectionBasePanel@DirectUI@@QEAAXAEBUPoint@Foundation@Windows@@@Z
    void ApplyAdjustment(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CorrectVisibleWindowForMouseLargeClick@WindowState@ModernCollectionBasePanel@DirectUI@@QEAAJPEAV23@@Z
    long CorrectVisibleWindowForMouseLargeClick(::DirectUI::ModernCollectionBasePanel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleWindow@WindowState@ModernCollectionBasePanel@DirectUI@@QEBAAEBURect@Foundation@Windows@@XZ
    WindissectOpaque const & GetVisibleWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollStateVisibleWindow@WindowState@ModernCollectionBasePanel@DirectUI@@QEAAXAEBURect@Foundation@Windows@@PEAE@Z
    void SetScrollStateVisibleWindow(WindissectOpaque const &, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowState@ModernCollectionBasePanel@DirectUI@@QEAA@XZ
    WindowState();
};
} // namespace DirectUI::ModernCollectionBasePanel
