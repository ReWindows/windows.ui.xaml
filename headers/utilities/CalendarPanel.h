#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
namespace DirectUI {
class CalendarPanel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredViewportSize@CalendarPanel@DirectUI@@QEAAJPEAUSize@Foundation@Windows@@@Z
    long GetDesiredViewportSize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemMinimumSize@CalendarPanel@DirectUI@@QEAAJUSize@Foundation@Windows@@@Z
    long SetItemMinimumSize(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNeedsToDetermineBiggestItemSize@CalendarPanel@DirectUI@@QEAAJXZ
    long SetNeedsToDetermineBiggestItemSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CalendarPanel@DirectUI@@QEAAJPEAVCalendarViewGeneratorHost@2@@Z
    long SetOwner(::DirectUI::CalendarViewGeneratorHost *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPanelType@CalendarPanel@DirectUI@@QEAAJW4CalendarPanelType@12@@Z
    long SetPanelType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuggestedDimension@CalendarPanel@DirectUI@@QEAAJHH@Z
    long SetSuggestedDimension(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalOrientation@CalendarPanel@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_LogicalOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalOrientation@CalendarPanel@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PhysicalOrientation(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CalendarPanel@DirectUI@@UEAA@XZ
    virtual ~CalendarPanel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CalendarPanel@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsPerPageImpl@CalendarPanel@DirectUI@@MEAAJURect@Foundation@Windows@@PEAN@Z
    virtual long GetItemsPerPageImpl(WindissectOpaque, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsUpdatingScrollMode@CalendarPanel@DirectUI@@MEBA?AW4ItemsUpdatingScrollMode@2@XZ
    virtual int GetItemsUpdatingScrollMode() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialItemIndex@CalendarPanel@DirectUI@@MEAAJPEAH@Z
    virtual long GetSpecialItemIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CalendarPanel@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPortallingSupported@CalendarPanel@DirectUI@@MEAAEXZ
    virtual unsigned char IsPortallingSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CalendarPanel@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSpecialItem@CalendarPanel@DirectUI@@MEAAJPEA_N@Z
    virtual long NeedsSpecialItem(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CalendarPanel@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineTheBiggestItemSize@CalendarPanel@DirectUI@@AEAAJPEAVCalendarViewGeneratorHost@2@USize@Foundation@Windows@@PEAU456@@Z
    long DetermineTheBiggestItemSize(::DirectUI::CalendarViewGeneratorHost *, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CalendarPanel@DirectUI@@AEAAJPEAPEAVCalendarViewGeneratorHost@2@@Z
    long GetOwner(::DirectUI::CalendarViewGeneratorHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRowsOrColsChanged@CalendarPanel@DirectUI@@AEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    long OnRowsOrColsChanged(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPanelDimension@CalendarPanel@DirectUI@@AEAAJHH@Z
    long SetPanelDimension(int, int);
};
} // namespace DirectUI
