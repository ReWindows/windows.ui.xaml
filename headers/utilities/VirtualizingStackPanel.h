#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class VirtualizingStackPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLayoutBoundary@VirtualizingStackPanel@DirectUI@@SAJHHIPEAE000@Z
    static long ComputeLayoutBoundary(int, int, unsigned int, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestElementInfo@VirtualizingStackPanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAUElementInfo@Primitives@Controls@Xaml@UI@5@@Z
    virtual long GetClosestElementInfo(WindissectOpaque, ::Windows::UI::Xaml::Controls::Primitives::ElementInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndex@VirtualizingStackPanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAH@Z
    virtual long GetInsertionIndex(WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutBoundary@VirtualizingStackPanel@DirectUI@@UEAAJHPEAE000@Z
    virtual long IsLayoutBoundary(int, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@VirtualizingStackPanel@DirectUI@@UEAAJIEW4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@@Z
    virtual long ScrollIntoView(unsigned int, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalOrientation@VirtualizingStackPanel@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LogicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@VirtualizingStackPanel@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreScrollSnapPointsRegular@VirtualizingStackPanel@DirectUI@@MEAAJPEAE@Z
    virtual long AreScrollSnapPointsRegular(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@VirtualizingStackPanel@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeTotalRealizedChildrenDimension@VirtualizingStackPanel@DirectUI@@MEAAJAEAMAEAI@Z
    virtual long ComputeTotalRealizedChildrenDimension(float &, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointsInternal@VirtualizingStackPanel@DirectUI@@MEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    virtual long GetIrregularSnapPointsInternal(int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureChildForItemsChanged@VirtualizingStackPanel@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long MeasureChildForItemsChanged(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@VirtualizingStackPanel@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanges@VirtualizingStackPanel@DirectUI@@MEAAJPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@I@Z
    virtual long NotifySnapPointsChanges(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@VirtualizingStackPanel@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSnapPointKeys@VirtualizingStackPanel@DirectUI@@MEAAJXZ
    virtual long ResetSnapPointKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapPointsChangeNotificationsRequirement@VirtualizingStackPanel@DirectUI@@MEAAJEE@Z
    virtual long SetSnapPointsChangeNotificationsRequirement(unsigned char, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualizingStackPanel@DirectUI@@MEAA@XZ
    virtual ~VirtualizingStackPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupContainers@VirtualizingStackPanel@DirectUI@@EEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@USize@Foundation@7@@Z
    virtual long CleanupContainers(::Windows::UI::Xaml::Controls::IItemsControl *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CorrectOffsetForScrollIntoView@VirtualizingStackPanel@DirectUI@@AEAAJNEPEAUIItemsControl@Controls@Xaml@UI@Windows@@USize@Foundation@7@AEAN@Z
    long CorrectOffsetForScrollIntoView(double, unsigned char, ::Windows::UI::Xaml::Controls::IItemsControl *, WindissectOpaque, double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFocusedChildInRealizedChildren@VirtualizingStackPanel@DirectUI@@AEAAJAEAH00@Z
    long FindFocusedChildInRealizedChildren(int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestOrInsertionIndex@VirtualizingStackPanel@DirectUI@@AEAAJUPoint@Foundation@Windows@@IPEAH@Z
    long GetClosestOrInsertionIndex(WindissectOpaque, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedOffsetForScrollIntoView@VirtualizingStackPanel@DirectUI@@AEAAJNNEAEANAEAH@Z
    long GetEstimatedOffsetForScrollIntoView(double, double, unsigned char, double &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointKeys@VirtualizingStackPanel@DirectUI@@AEAAJW4Orientation@Controls@Xaml@UI@Windows@@PEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@7@IPEAPEAMPEAHPEAM44@Z
    long GetIrregularSnapPointKeys(int, WindissectOpaque *, unsigned int, float * *, int *, float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPoints@VirtualizingStackPanel@DirectUI@@AEAAJEEEPEAPEAMPEAI@Z
    long GetIrregularSnapPoints(unsigned char, unsigned char, unsigned char, float * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshIrregularSnapPointKeys@VirtualizingStackPanel@DirectUI@@AEAAJXZ
    long RefreshIrregularSnapPointKeys();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVirtualizationState@VirtualizingStackPanel@DirectUI@@AEAAJPEAUIItemsControl@Controls@Xaml@UI@Windows@@@Z
    long SetVirtualizationState(::Windows::UI::Xaml::Controls::IItemsControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsVirtualizing@VirtualizingStackPanel@DirectUI@@AEAAJE@Z
    long put_IsVirtualizing(unsigned char);
};
} // namespace DirectUI
