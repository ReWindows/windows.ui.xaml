#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class StackPanel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestElementInfo@StackPanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAUElementInfo@Primitives@Controls@Xaml@UI@5@@Z
    virtual long GetClosestElementInfo(WindissectOpaque, ::Windows::UI::Xaml::Controls::Primitives::ElementInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndex@StackPanel@DirectUI@@UEAAJUPoint@Foundation@Windows@@PEAH@Z
    virtual long GetInsertionIndex(WindissectOpaque, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsertionIndexesImpl@StackPanel@DirectUI@@QEAAJUPoint@Foundation@Windows@@PEAH1@Z
    long GetInsertionIndexesImpl(WindissectOpaque, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIrregularSnapPointsImpl@StackPanel@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAPEAU?$IVectorView@M@Collections@Foundation@7@@Z
    long GetIrregularSnapPointsImpl(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsBounds@StackPanel@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long GetItemsBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPage@StackPanel@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAN@Z
    virtual long GetItemsPerPage(::DirectUI::IScrollInfo *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastItemIndexInViewport@StackPanel@DirectUI@@UEAAJPEAUIScrollInfo@2@PEAH@Z
    virtual long GetLastItemIndexInViewport(::DirectUI::IScrollInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegularSnapPointsImpl@StackPanel@DirectUI@@QEAAJW4Orientation@Controls@Xaml@UI@Windows@@W4SnapPointsAlignment@Primitives@4567@PEAM2@Z
    long GetRegularSnapPointsImpl(int, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutBoundary@StackPanel@DirectUI@@UEAAJHPEAE000@Z
    virtual long IsLayoutBoundary(int, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HorizontalSnapPointsChanged@StackPanel@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HorizontalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VerticalSnapPointsChanged@StackPanel@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VerticalSnapPointsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreHorizontalSnapPointsRegularImpl@StackPanel@DirectUI@@QEAAJPEAE@Z
    long get_AreHorizontalSnapPointsRegularImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AreVerticalSnapPointsRegularImpl@StackPanel@DirectUI@@QEAAJPEAE@Z
    long get_AreVerticalSnapPointsRegularImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HorizontalSnapPointsChanged@StackPanel@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HorizontalSnapPointsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VerticalSnapPointsChanged@StackPanel@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VerticalSnapPointsChanged(EventRegistrationToken);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestOrInsertionIndex@StackPanel@DirectUI@@AEAAJUPoint@Foundation@Windows@@IPEAH@Z
    long GetClosestOrInsertionIndex(WindissectOpaque, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalSnapPointsChanged@StackPanel@DirectUI@@AEAAJXZ
    long OnHorizontalSnapPointsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalSnapPointsChanged@StackPanel@DirectUI@@AEAAJXZ
    long OnVerticalSnapPointsChanged();
};
} // namespace DirectUI
