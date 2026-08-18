#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI::Components::TileGridPanel {
class OrientationBasedMeasures {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewerOffset@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEAANPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    virtual double GetScrollViewerOffset(::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewerViewport@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEAANPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    virtual double GetScrollViewerViewport(::Windows::UI::Xaml::Controls::IScrollViewer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizingOffset@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEBAMURect@Foundation@Windows@@@Z
    virtual float GetVirtualizingOffset(WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizingOffsetPlusSize@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEBAMURect@Foundation@Windows@@@Z
    virtual float GetVirtualizingOffsetPlusSize(WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizingSize@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEBAMUSize@Foundation@Windows@@@Z
    virtual float GetVirtualizingSize(WindissectOpaque) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontal@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEBA_NXZ
    virtual bool IsHorizontal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizingOffset@OrientationBasedMeasures@TileGridPanel@Components@DirectUI@@UEBAXAEAURect@Foundation@Windows@@M@Z
    virtual void SetVirtualizingOffset(WindissectOpaque &, float) const;
};
} // namespace DirectUI::Components::TileGridPanel
