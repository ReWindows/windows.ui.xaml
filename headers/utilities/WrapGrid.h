#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
namespace DirectUI {
class WrapGrid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@WrapGrid@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAlignmentOffsets@WrapGrid@DirectUI@@SAJINNIPEAN0@Z
    static long ComputeAlignmentOffsets(unsigned int, double, double, unsigned int, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTotalRealizedChildrenDimension@WrapGrid@DirectUI@@UEAAJAEAMAEAI@Z
    virtual long ComputeTotalRealizedChildrenDimension(float &, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestElementInfo@WrapGrid@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAUElementInfo@Primitives@Controls@Xaml@UI@5@@Z
    virtual long GetClosestElementInfo(WindissectOpaque, ::Windows::UI::Xaml::Controls::Primitives::ElementInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndex@WrapGrid@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAH@Z
    virtual long GetInsertionIndex(WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPage@WrapGrid@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAN@Z
    virtual long GetItemsPerPage(::DirectUI::IScrollInfo *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationAction@WrapGrid@DirectUI@@UEAAJIW4ElementType@Controls@Xaml@UI@Windows@@W4KeyNavigationAction@4567@EIPEAIPEAW434567@PEAE@Z
    virtual long GetTargetIndexFromNavigationAction(unsigned int, int, int, unsigned char, unsigned int, unsigned int *, int *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutBoundary@WrapGrid@DirectUI@@UEAAJHPEAE000@Z
    virtual long IsLayoutBoundary(int, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPortallingSupported@WrapGrid@DirectUI@@UEAAEXZ
    virtual unsigned char IsPortallingSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@WrapGrid@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@WrapGrid@DirectUI@@UEAAJIEW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@@Z
    virtual long ScrollIntoView(unsigned int, unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffset@WrapGrid@DirectUI@@UEAAJN@Z
    virtual long SetHorizontalOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffset@WrapGrid@DirectUI@@UEAAJN@Z
    virtual long SetVerticalOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationState@WrapGrid@DirectUI@@QEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    long SetVirtualizationState(::Windows::UI::Xaml::Controls::IItemsControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsKeyNavigationAction@WrapGrid@DirectUI@@UEAAJW4KeyNavigationAction@Controls@Xaml@UI@Windows@@PEAE@Z
    virtual long SupportsKeyNavigationAction(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalOrientation@WrapGrid@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LogicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@WrapGrid@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredSize@WrapGrid@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUSize@Foundation@6@@Z
    virtual long GetDesiredSize(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureChildForItemsChanged@WrapGrid@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long MeasureChildForItemsChanged(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@WrapGrid@DirectUI@@MEAAJPEAUIInspectable@@PEAUIItemsChangedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long OnItemsChanged(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@WrapGrid@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreCurrentVisibleItemsAreMoreThanFirstMeasureVisibleItems@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@NIIPEAI@Z
    long AreCurrentVisibleItemsAreMoreThanFirstMeasureVisibleItems(WindissectOpaque, double, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeChildren@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@00IUPoint@45@PEAU345@@Z
    long ArrangeChildren(WindissectOpaque, WindissectOpaque, WindissectOpaque, unsigned int, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHorizontalAndVerticalAlignment@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@PEAUOrientedSize@2@1@Z
    long ComputeHorizontalAndVerticalAlignment(WindissectOpaque, ::DirectUI::OrientedSize *, ::DirectUI::OrientedSize *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLayoutSlotSize@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@II@Z
    long ComputeLayoutSlotSize(WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLayoutVariables@WrapGrid@DirectUI@@AEAAJIUSize@Foundation@Windows@@0@Z
    long ComputeLayoutVariables(unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVirtualizationVariables@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@NIIHPEAIPEAHPEAU345@PEAN@Z
    long ComputeVirtualizationVariables(WindissectOpaque, double, unsigned int, unsigned int, int, unsigned int *, int *, WindissectOpaque *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVisibleCount@WrapGrid@DirectUI@@AEAAJI@Z
    long ComputeVisibleCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVisibleLinesAndLastViewPort@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@NIIPEAIPEAU345@PEAHPEAN@Z
    long ComputeVisibleLinesAndLastViewPort(WindissectOpaque, double, unsigned int, unsigned int, unsigned int *, WindissectOpaque *, int *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestOrInsertionIndex@WrapGrid@DirectUI@@AEAAJUPoint@Foundation@Windows@@IPEAH@Z
    long GetClosestOrInsertionIndex(WindissectOpaque, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetIndexFromNavigationActionInVerticalOrientation@WrapGrid@DirectUI@@AEAAJIW4KeyNavigationAction@Controls@Xaml@UI@Windows@@EPEAIPEAE@Z
    long GetTargetIndexFromNavigationActionInVerticalOrientation(unsigned int, int, unsigned char, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureChildren@WrapGrid@DirectUI@@AEAAJUSize@Foundation@Windows@@PEAU345@@Z
    long MeasureChildren(WindissectOpaque, WindissectOpaque *);
};
} // namespace DirectUI
