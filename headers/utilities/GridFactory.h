#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
namespace DirectUI {
class GridFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@GridFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIGrid@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::IGrid * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumn@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetColumn(::Windows::UI::Xaml::IFrameworkElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColumnSpan@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetColumnSpan(::Windows::UI::Xaml::IFrameworkElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRow@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetRow(::Windows::UI::Xaml::IFrameworkElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRowSpan@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAH@Z
    virtual long GetRowSpan(::Windows::UI::Xaml::IFrameworkElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumn@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@H@Z
    virtual long SetColumn(::Windows::UI::Xaml::IFrameworkElement *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColumnSpan@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@H@Z
    virtual long SetColumnSpan(::Windows::UI::Xaml::IFrameworkElement *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRow@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@H@Z
    virtual long SetRow(::Windows::UI::Xaml::IFrameworkElement *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRowSpan@GridFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@H@Z
    virtual long SetRowSpan(::Windows::UI::Xaml::IFrameworkElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundSizingProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_BackgroundSizingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderBrushProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_BorderBrushProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderThicknessProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_BorderThicknessProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ColumnProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpacingProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ColumnSpacingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColumnSpanProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ColumnSpanProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CornerRadiusProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CornerRadiusProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PaddingProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PaddingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RowProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpacingProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RowSpacingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RowSpanProperty@GridFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RowSpanProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GridFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GridFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GridFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GridFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
