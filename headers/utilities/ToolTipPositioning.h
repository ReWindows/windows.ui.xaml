#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ToolTipPositioning {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPositionRelativeOnSide@ToolTipPositioning@DirectUI@@YAHAEBVCConstraint@12@AEBUtagRECT@@W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@0@Z
    int CanPositionRelativeOnSide(WindissectOpaque const &, tagRECT const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontallyCenterRect@ToolTipPositioning@DirectUI@@YA?AUtagRECT@@AEBVCConstraint@12@AEBU3@@Z
    tagRECT HorizontallyCenterRect(WindissectOpaque const &, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLefthandedUser@ToolTipPositioning@DirectUI@@YAHXZ
    int IsLefthandedUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNearRect@ToolTipPositioning@DirectUI@@YA?AUtagRECT@@AEBU3@0W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    tagRECT MoveNearRect(tagRECT const &, tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionRelativeOnSide@ToolTipPositioning@DirectUI@@YA?AUtagRECT@@AEBVCConstraint@12@AEBU3@W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@0@Z
    tagRECT PositionRelativeOnSide(WindissectOpaque const &, tagRECT const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRelativePosition@ToolTipPositioning@DirectUI@@YA?AUtagRECT@@AEBVCConstraint@12@UtagSIZE@@U3@W4PlacementMode@Primitives@Controls@Xaml@UI@Windows@@W4POPUP_SNAPPING@12@PEAW46789UI@Windows@@@Z
    tagRECT QueryRelativePosition(WindissectOpaque const &, tagSIZE, tagRECT, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftRectIntoContainer@ToolTipPositioning@DirectUI@@YA?AUtagRECT@@AEBVCConstraint@12@AEBU3@@Z
    tagRECT ShiftRectIntoContainer(WindissectOpaque const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticallyCenterRect@ToolTipPositioning@DirectUI@@YA?AUtagRECT@@AEBVCConstraint@12@AEBU3@@Z
    tagRECT VerticallyCenterRect(WindissectOpaque const &, tagRECT const &);
};
} // namespace DirectUI
