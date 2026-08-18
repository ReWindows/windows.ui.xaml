#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class LayoutDataInfoProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupInformationFromGroupIndex@LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@UEAAJHPEAH0@Z
    virtual long GetGroupInformationFromGroupIndex(int, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupInformationFromItemIndex@LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@UEAAJHPEAH00@Z
    virtual long GetGroupInformationFromItemIndex(int, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalGroupCount@LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@UEAAJPEAH@Z
    virtual long GetTotalGroupCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalItemCount@LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@UEAAJPEAH@Z
    virtual long GetTotalItemCount(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@QEAA@XZ
    LayoutDataInfoProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelRef@LayoutDataInfoProvider@ModernCollectionBasePanel@DirectUI@@AEAAJPEAPEAUIModernCollectionBasePanel@3@@Z
    long GetPanelRef(::DirectUI::IModernCollectionBasePanel * *);
};
} // namespace DirectUI::ModernCollectionBasePanel
