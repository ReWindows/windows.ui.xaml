#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
namespace DirectUI {
class Page {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppBarClosedSizeChanged@Page@DirectUI@@QEAAJXZ
    long AppBarClosedSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnNavigatedFrom@Page@DirectUI@@QEAAJPEAUIInspectable@@0PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@@Z
    long InvokeOnNavigatedFrom(IInspectable *, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnNavigatedTo@Page@DirectUI@@QEAAJPEAUIInspectable@@0PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@@Z
    long InvokeOnNavigatedTo(IInspectable *, IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnNavigatingFrom@Page@DirectUI@@QEAAJPEAUIInspectable@@PEAUINavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@@PEAUHSTRING__@@W4NavigationMode@Navigation@789@PEAE@Z
    long InvokeOnNavigatingFrom(IInspectable *, ::Windows::UI::Xaml::Media::Animation::INavigationTransitionInfo *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@Page@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutBoundsUpdatesEnabled@Page@DirectUI@@SAJE@Z
    static long SetLayoutBoundsUpdatesEnabled(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@Page@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@Page@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfDataContextChange@Page@DirectUI@@MEAAXAEBUDataContextChangedParams@2@@Z
    virtual void NotifyOfDataContextChange(::DirectUI::DataContextChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Page@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@Page@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAppBars@Page@DirectUI@@MEAAJXZ
    virtual long RegisterAppBars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppBars@Page@DirectUI@@MEAAJXZ
    virtual long UnregisterAppBars();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Page@DirectUI@@MEAA@XZ
    virtual ~Page();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAppBarOcclusionDimensions@Page@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long CalculateAppBarOcclusionDimensions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateUpdatedBounds@Page@DirectUI@@AEAAJPEAURect@Foundation@Windows@@@Z
    long CalculateUpdatedBounds(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppBarClosedHeight@Page@DirectUI@@AEAAJPEAVAppBar@2@PEAN@Z
    long GetAppBarClosedHeight(::DirectUI::AppBar *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPage@Page@DirectUI@@CAJPEAPEAUIPage@Controls@Xaml@UI@Windows@@@Z
    static long GetCurrentPage(::Windows::UI::Xaml::Controls::IPage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateLayoutForAppBarSizeChange@Page@DirectUI@@AEAAJXZ
    long InvalidateLayoutForAppBarSizeChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLaidOutToCoreWindowBounds@Page@DirectUI@@AEAA_NXZ
    bool IsLaidOutToCoreWindowBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreWindowLayoutBoundsChanged@Page@DirectUI@@AEAAJPEAUICoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Z
    long OnCoreWindowLayoutBoundsChanged(::Windows::UI::Core::ICoreWindow *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@Page@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@Page@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDesiredBoundsMode@Page@DirectUI@@AEAAJPEAW4ApplicationViewBoundsMode@ViewManagement@UI@Windows@@@Z
    long QueryDesiredBoundsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLayoutBoundsChangedEventHandler@Page@DirectUI@@AEAAJXZ
    long RemoveLayoutBoundsChangedEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderPageBackgroundOnlyForFullWindowPages@Page@DirectUI@@CA_NXZ
    static bool RenderPageBackgroundOnlyForFullWindowPages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncWithLayoutBounds@Page@DirectUI@@AEAAJXZ
    long SyncWithLayoutBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCoreWindowLayoutBoundsChangedEvent@Page@DirectUI@@AEAAJ_N@Z
    long UpdateCoreWindowLayoutBoundsChangedEvent(bool);
};
} // namespace DirectUI
