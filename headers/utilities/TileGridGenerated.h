#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 36 member(s).
namespace DirectUI {
class TileGridGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTree@TileGridGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long BuildTree(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndex@TileGridGenerated@DirectUI@@UEAAJHPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromIndex(int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItem@TileGridGenerated@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long ContainerFromItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectItemsHost@TileGridGenerated@DirectUI@@UEAAJXZ
    virtual long DisconnectItemsHost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainersForIncrementalVisualization@TileGridGenerated@DirectUI@@UEAAJPEAPEAUIContainerContentChangingIterator@2@@Z
    virtual long GetContainersForIncrementalVisualization(::DirectUI::IContainerContentChangingIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAnimatingEventSourceNoRef@TileGridGenerated@DirectUI@@QEAAJPEAPEAV?$CEventSource@UITileGridElementAnimatingHandler@Controls@Xaml@UI@Windows@@UITileGrid@2345@UITileGridElementAnimatingEventArgs@2345@@2@@Z
    long GetElementAnimatingEventSourceNoRef(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupHeaderMapping@TileGridGenerated@DirectUI@@UEAAJPEAPEAUIGroupHeaderMapping@2@@Z
    virtual long GetGroupHeaderMapping(::DirectUI::IGroupHeaderMapping * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemContainerMapping@TileGridGenerated@DirectUI@@UEAAJPEAPEAUIItemContainerMapping@Controls@Xaml@UI@Windows@@@Z
    virtual long GetItemContainerMapping(::Windows::UI::Xaml::Controls::IItemContainerMapping * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TileGridGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideDragDropVisual@TileGridGenerated@DirectUI@@UEAAJXZ
    virtual long HideDragDropVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainer@TileGridGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAH@Z
    virtual long IndexFromContainer(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBuildTreeSuspended@TileGridGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long IsBuildTreeSuspended(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFromContainer@TileGridGenerated@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long ItemFromContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChanged@TileGridGenerated@DirectUI@@UEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long NotifyOfItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsChanging@TileGridGenerated@DirectUI@@UEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long NotifyOfItemsChanging(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfItemsReordered@TileGridGenerated@DirectUI@@UEAAJI@Z
    virtual long NotifyOfItemsReordered(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@TileGridGenerated@DirectUI@@UEAAJXZ
    virtual long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterItemsHost@TileGridGenerated@DirectUI@@UEAAJPEAUIGeneratorHost@2@@Z
    virtual long RegisterItemsHost(::DirectUI::IGeneratorHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@TileGridGenerated@DirectUI@@UEAAJPEAUIInspectable@@W4ScrollIntoViewAlignment@Controls@Xaml@UI@Windows@@E@Z
    virtual long ScrollIntoView(IInspectable *, int, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragDropVisualPosition@TileGridGenerated@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long SetDragDropVisualPosition(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftViewport@TileGridGenerated@DirectUI@@UEAAJN@Z
    virtual long ShiftViewport(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDragDropVisual@TileGridGenerated@DirectUI@@UEAAJPEAUITileGridElement@Controls@Xaml@UI@Windows@@@Z
    virtual long ShowDragDropVisual(::Windows::UI::Xaml::Controls::ITileGridElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownDeferredWork@TileGridGenerated@DirectUI@@UEAAJXZ
    virtual long ShutDownDeferredWork();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileGridGenerated@DirectUI@@QEAA@XZ
    TileGridGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ElementAnimating@TileGridGenerated@DirectUI@@UEAAJPEAUITileGridElementAnimatingHandler@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ElementAnimating(::Windows::UI::Xaml::Controls::ITileGridElementAnimatingHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheLength@TileGridGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_CacheLength(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForCallbacks@TileGridGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForCallbacks(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@TileGridGenerated@DirectUI@@UEAAJPEAW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Orientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CacheLength@TileGridGenerated@DirectUI@@UEAAJN@Z
    virtual long put_CacheLength(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRegisteredForCallbacks@TileGridGenerated@DirectUI@@UEAAJE@Z
    virtual long put_IsRegisteredForCallbacks(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Orientation@TileGridGenerated@DirectUI@@UEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Orientation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ElementAnimating@TileGridGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ElementAnimating(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TileGridGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TileGridGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TileGridGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TileGridGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
