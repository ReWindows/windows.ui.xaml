#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TileGridNestedPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@TileGridNestedPanel@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@TileGridNestedPanel@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileGridNestedPanel@DirectUI@@UEAA@XZ
    virtual ~TileGridNestedPanel();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildTransitionBounds@TileGridNestedPanel@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetChildTransitionBounds(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildTransitionContext@TileGridNestedPanel@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@HPEAW4ThemeTransitionContext@2@@Z
    virtual long GetChildTransitionContext(::Windows::UI::Xaml::IUIElement *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollectionMutatingFast@TileGridNestedPanel@DirectUI@@MEAAJPEAE@Z
    virtual long IsCollectionMutatingFast(unsigned char *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentContainer@TileGridNestedPanel@DirectUI@@AEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    long GetParentContainer(::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTileGrid@TileGridNestedPanel@DirectUI@@AEAAJPEAPEAVTileGrid@2@@Z
    long GetParentTileGrid(::DirectUI::TileGrid * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupRootPanel@TileGridNestedPanel@DirectUI@@AEAAJXZ
    long HookupRootPanel();
};
} // namespace DirectUI
