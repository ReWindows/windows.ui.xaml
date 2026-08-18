#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
namespace DirectUI {
class VariableSizedWrapGridFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnSpan@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetColumnSpan(::Windows::UI::Xaml::IUIElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowSpan@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetRowSpan(::Windows::UI::Xaml::IUIElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnSpan@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@H@Z
    virtual long SetColumnSpan(::Windows::UI::Xaml::IUIElement *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRowSpan@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@H@Z
    virtual long SetRowSpan(::Windows::UI::Xaml::IUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpanProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ColumnSpanProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalChildrenAlignmentProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_HorizontalChildrenAlignmentProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemHeightProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ItemHeightProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemWidthProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ItemWidthProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaximumRowsOrColumnsProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_MaximumRowsOrColumnsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OrientationProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_OrientationProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpanProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RowSpanProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalChildrenAlignmentProperty@VariableSizedWrapGridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_VerticalChildrenAlignmentProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VariableSizedWrapGridFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VariableSizedWrapGridFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VariableSizedWrapGridFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VariableSizedWrapGridFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
