#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class MenuFlyoutItemBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentMenuFlyoutPresenter@MenuFlyoutItemBase@DirectUI@@QEAAJPEAPEAVMenuFlyoutPresenter@2@@Z
    long GetParentMenuFlyoutPresenter(::DirectUI::MenuFlyoutPresenter * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutItemBase@DirectUI@@QEAA@XZ
    MenuFlyoutItemBase();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyoutItemBase@DirectUI@@UEAA@XZ
    virtual ~MenuFlyoutItemBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldBeNarrow@MenuFlyoutItemBase@DirectUI@@IEAAJPEA_N@Z
    long GetShouldBeNarrow(bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentMenuFlyoutPresenter@MenuFlyoutItemBase@DirectUI@@AEAAJPEAVMenuFlyoutPresenter@2@@Z
    long SetParentMenuFlyoutPresenter(::DirectUI::MenuFlyoutPresenter *);
};
} // namespace DirectUI
