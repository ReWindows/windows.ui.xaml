#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class VariableSizedWrapGrid {
public:
    class OccupancyBlock;
    class OccupancyMap;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@VariableSizedWrapGrid@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@VariableSizedWrapGrid@DirectUI@@UEAAJIW4ElementType@Controls@Xaml@UI@Windows@@W4KeyNavigationAction@4567@EIPEAIPEAW434567@PEAE@Z
    virtual long GetTargetIndexFromNavigationAction(unsigned int, int, int, unsigned char, unsigned int, unsigned int *, int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@VariableSizedWrapGrid@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsKeyNavigationAction@VariableSizedWrapGrid@DirectUI@@UEAAJW4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAE@Z
    virtual long SupportsKeyNavigationAction(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalOrientation@VariableSizedWrapGrid@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LogicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@VariableSizedWrapGrid@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VariableSizedWrapGrid@DirectUI@@UEAA@XZ
    virtual ~VariableSizedWrapGrid();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@VariableSizedWrapGrid@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOccupancyMap@VariableSizedWrapGrid@DirectUI@@AEAAJIV?$ComPtr@U?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@ctl@@IPEAUOrientedSize@2@1PEAI2@Z
    long CalculateOccupancyMap(unsigned int, WindissectOpaque, unsigned int, ::DirectUI::OrientedSize *, ::DirectUI::OrientedSize *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@VariableSizedWrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@PEAUOrientedSize@2@1PEAI@Z
    long ComputeBounds(WindissectOpaque, ::DirectUI::OrientedSize *, ::DirectUI::OrientedSize *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHorizontalAndVerticalAlignment@VariableSizedWrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@PEAUOrientedSize@2@1@Z
    long ComputeHorizontalAndVerticalAlignment(WindissectOpaque, ::DirectUI::OrientedSize *, ::DirectUI::OrientedSize *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowAndColumnSpan@VariableSizedWrapGrid@DirectUI@@AEAAJV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAI1@Z
    long GetRowAndColumnSpan(WindissectOpaque, unsigned int *, unsigned int *);
};
} // namespace DirectUI
