#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 102 member(s).
namespace DirectUI {
class Hub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRecycleContainer@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long CanRecycleContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItem@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItem(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearGroupContainerForGroup@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long ClearGroupContainerForGroup(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteViewChangeToImpl@Hub@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    long CompleteViewChangeToImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItem@Hub@DirectUI@@UEAAJPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU4567@@Z
    virtual long GetContainerForItem(IInspectable *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupStyle@Hub@DirectUI@@UEAAJPEAUICollectionViewGroup@Data@Xaml@UI@Windows@@IPEAPEAUIGroupStyle@Controls@567@@Z
    virtual long GetGroupStyle(::Windows::UI::Xaml::Data::ICollectionViewGroup *, unsigned int, ::Windows::UI::Xaml::Controls::IGroupStyle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderForGroup@Hub@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetHeaderForGroup(IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderWidth@Hub@DirectUI@@QEAAJPEAN@Z
    long GetHeaderWidth(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPanelWidth@Hub@DirectUI@@QEAAJPEAN@Z
    long GetPanelWidth(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenSize@Hub@DirectUI@@QEAAJPEAUSize@Foundation@Windows@@@Z
    long GetScreenSize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewerPart@Hub@DirectUI@@QEAAJPEAPEAUIScrollViewer@Controls@Xaml@UI@Windows@@@Z
    long GetScrollViewerPart(::Windows::UI::Xaml::Controls::IScrollViewer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportWidth@Hub@DirectUI@@QEAAJPEAN@Z
    long GetViewportWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNavigationKey@Hub@DirectUI@@QEAAJPEAVHubSection@2@W4VirtualKey@System@Windows@@PEAE@Z
    long HandleNavigationKey(HubSection *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewChangeImpl@Hub@DirectUI@@QEAAJXZ
    long InitializeViewChangeImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHostForItemContainer@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAE@Z
    virtual long IsHostForItemContainer(::Windows::UI::Xaml::IDependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainer@Hub@DirectUI@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainer(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDMHubStateChange@Hub@DirectUI@@SAJPEAVCDependencyObject@@I@Z
    static long NotifyDMHubStateChange(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@Hub@DirectUI@@UEAAJII@Z
    virtual long OnCollectionChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDimensionsAvailable@Hub@DirectUI@@UEAAJII@Z
    virtual long OnDimensionsAvailable(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSectionHeaderChanged@Hub@DirectUI@@QEAAJPEAUIHubSection@Controls@Xaml@UI@Windows@@@Z
    long OnSectionHeaderChanged(::Windows::UI::Xaml::Controls::IHubSection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideContainerArrangeBounds@Hub@DirectUI@@UEAAJHURect@Foundation@Windows@@PEAU345@@Z
    virtual long OverrideContainerArrangeBounds(int, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareGroupContainer@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUICollectionViewGroup@Data@456@@Z
    virtual long PrepareGroupContainer(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Data::ICollectionViewGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareItemContainer@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareItemContainer(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredScrollToRequest@Hub@DirectUI@@QEAAJPEAE@Z
    long ProcessDeferredScrollToRequest(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingGroupHeaderContainer@Hub@DirectUI@@UEAAJPEAUIChoosingGroupHeaderContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingGroupHeaderContainer(::Windows::UI::Xaml::Controls::IChoosingGroupHeaderContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseChoosingItemContainer@Hub@DirectUI@@UEAAJPEAUIChoosingItemContainerEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RaiseChoosingItemContainer(::Windows::UI::Xaml::Controls::IChoosingItemContainerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContainerContentChangingOnRecycle@Hub@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long RaiseContainerContentChangingOnRecycle(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSectionHeaderClick@Hub@DirectUI@@QEAAJPEAVHubSection@2@@Z
    long RaiseSectionHeaderClick(HubSection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkForContainer@Hub@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkForContainer(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkFromArgs@Hub@DirectUI@@UEAAJPEAUIContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@@@Z
    virtual long RegisterWorkFromArgs(::Windows::UI::Xaml::Controls::IContainerContentChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToSectionImpl@Hub@DirectUI@@QEAAJPEAUIHubSection@Controls@Xaml@UI@Windows@@@Z
    long ScrollToSectionImpl(::Windows::UI::Xaml::Controls::IHubSection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SectionComesBeforeDestinationForSemanticZoom@Hub@DirectUI@@QEAAJPEAUIHubSection@Controls@Xaml@UI@Windows@@PEAE@Z
    long SectionComesBeforeDestinationForSemanticZoom(::Windows::UI::Xaml::Controls::IHubSection *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsGrouping@Hub@DirectUI@@UEAAJE@Z
    virtual long SetIsGrouping(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupContainerContentChangingAfterPrepare@Hub@DirectUI@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@HUSize@Foundation@6@@Z
    virtual long SetupContainerContentChangingAfterPrepare(::Windows::UI::Xaml::IDependencyObject *, IInspectable *, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingGroupHeaderContainer@Hub@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingGroupHeaderContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseChoosingItemContainer@Hub@DirectUI@@UEAAJPEAE@Z
    virtual long ShouldRaiseChoosingItemContainer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeFromImpl@Hub@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    long StartViewChangeFromImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartViewChangeToImpl@Hub@DirectUI@@QEAAJPEAUISemanticZoomLocation@Controls@Xaml@UI@Windows@@0@Z
    long StartViewChangeToImpl(::Windows::UI::Xaml::Controls::ISemanticZoomLocation *, ::Windows::UI::Xaml::Controls::ISemanticZoomLocation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestContainerForContainerFromItemLookup@Hub@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long SuggestContainerForContainerFromItemLookup(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferSemanticZoomFocus@Hub@DirectUI@@QEAAJPEAUIHubSection@Controls@Xaml@UI@Windows@@@Z
    long TransferSemanticZoomFocus(::Windows::UI::Xaml::Controls::IHubSection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualizationFinished@Hub@DirectUI@@UEAAJXZ
    virtual long VirtualizationFinished();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionView@Hub@DirectUI@@UEAAJPEAPEAUICollectionView@Data@Xaml@UI@Windows@@@Z
    virtual long get_CollectionView(::Windows::UI::Xaml::Data::ICollectionView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_View@Hub@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_View(WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@Hub@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@Hub@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@Hub@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Hub@DirectUI@@IEAA@XZ
    Hub();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Hub@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Hub@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Hub@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@Hub@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Hub@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Hub@DirectUI@@MEAA@XZ
    virtual ~Hub();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBackgroundImageDimensionsNotify@Hub@DirectUI@@AEAAJPEAUIPALImageDimensionsNotify@@@Z
    long AddBackgroundImageDimensionsNotify(IPALImageDimensionsNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustMargins@Hub@DirectUI@@AEAAJXZ
    long AdjustMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyHeaderParallaxCurve@Hub@DirectUI@@AEAAJXZ
    long ApplyHeaderParallaxCurve();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEntranceAnimation@Hub@DirectUI@@AEAAJXZ
    long ClearEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHubController@Hub@DirectUI@@AEAAJXZ
    long ConfigureHubController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDoubleAnimation@Hub@DirectUI@@AEAAJNNUDuration@Xaml@UI@Windows@@PEAUHSTRING__@@PEAUIDependencyObject@456@PEAPEAUIDoubleAnimation@Animation@Media@456@@Z
    long CreateDoubleAnimation(double, double, ::Windows::UI::Xaml::Duration, HSTRING__*, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Media::Animation::IDoubleAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDoubleAnimationWithEasingFunction@Hub@DirectUI@@AEAAJW4EasingMode@Animation@Media@Xaml@UI@Windows@@NNNUDuration@678@PEAUHSTRING__@@PEAUIDependencyObject@678@PEAPEAUIDoubleAnimation@45678@@Z
    long CreateDoubleAnimationWithEasingFunction(int, double, double, double, ::Windows::UI::Xaml::Duration, HSTRING__*, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Media::Animation::IDoubleAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHeaderFlyinFlyoutAnimation@Hub@DirectUI@@AEAAJ_NPEAPEAUITimeline@Animation@Media@Xaml@UI@Windows@@@Z
    long CreateHeaderFlyinFlyoutAnimation(bool, ::Windows::UI::Xaml::Media::Animation::ITimeline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLTE@Hub@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUIUIElement@456@@Z
    long CreateLTE(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyLTE@Hub@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIUIElement@456@@Z
    long DestroyLTE(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusNextSection@Hub@DirectUI@@AEAAJPEAVHubSection@2@EPEAE@Z
    long FocusNextSection(HubSection *, unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundPanRate@Hub@DirectUI@@AEAAJPEAN@Z
    long GetBackgroundPanRate(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanWrap@Hub@DirectUI@@AEAAJPEA_N@Z
    long GetCanWrap(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderPanRate@Hub@DirectUI@@AEAAJPEAN@Z
    long GetHeaderPanRate(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeaderWidthAdjustment@Hub@DirectUI@@AEAAJPEAN@Z
    long GetHeaderWidthAdjustment(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalCoreWindow2@Hub@DirectUI@@AEAAPEAUIInternalCoreWindow2@Core@UI@Windows@@XZ
    ::Windows::UI::Core::IInternalCoreWindow2* GetInternalCoreWindow2();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryContentTransformX@Hub@DirectUI@@AEAAJPEAVCUIElement@@PEAN@Z
    long GetSecondaryContentTransformX(CUIElement *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldPlayEntranceAnimation@Hub@DirectUI@@AEAAJPEA_N@Z
    long GetShouldPlayEntranceAnimation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDMHubStateChange@Hub@DirectUI@@AEAAJW4DMHubEvent@12@@Z
    long NotifyDMHubStateChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStateChange@Hub@DirectUI@@EEAAJW4DMManipulationState@2@MMMMMEEE@Z
    virtual long NotifyStateChange(int, float, float, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundChanged@Hub@DirectUI@@AEAAJXZ
    long OnBackgroundChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundImageFailed@Hub@DirectUI@@AEAAJPEAUIInspectable@@PEAUIExceptionRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnBackgroundImageFailed(IInspectable *, ::Windows::UI::Xaml::IExceptionRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderSizeChanged@Hub@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnHeaderSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPanelLoaded@Hub@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPanelLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPanelVisibleIndicesChanged@Hub@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPanelVisibleIndicesChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSemanticZoomScrollIntoViewTimerTick@Hub@DirectUI@@AEAAJXZ
    long OnSemanticZoomScrollIntoViewTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@Hub@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@Hub@DirectUI@@AEAAJXZ
    long OnUnloaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayEntranceAnimation@Hub@DirectUI@@AEAAJXZ
    long PlayEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayFlyinFlyoutAnimation@Hub@DirectUI@@AEAAJ_N@Z
    long PlayFlyinFlyoutAnimation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareEntranceAnimation@Hub@DirectUI@@AEAAJXZ
    long PrepareEntranceAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuickCheckHaveVisibleWrappingSectionsInPeekThroughChanged@Hub@DirectUI@@AEAAJPEA_N@Z
    long QuickCheckHaveVisibleWrappingSectionsInPeekThroughChanged(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSectionsInViewChanged@Hub@DirectUI@@AEAAJPEAU?$IVector@PEAVHubSection@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@0@Z
    long RaiseSectionsInViewChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshHubSectionPlaceholderHeights@Hub@DirectUI@@AEAAJXZ
    long RefreshHubSectionPlaceholderHeights();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackgroundImageDimensionsNotify@Hub@DirectUI@@AEAAJPEAUIPALImageDimensionsNotify@@@Z
    long RemoveBackgroundImageDimensionsNotify(IPALImageDimensionsNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFlyinFlyoutAnimationAndRestoreParallaxCurve@Hub@DirectUI@@AEAAJXZ
    long RemoveFlyinFlyoutAnimationAndRestoreParallaxCurve();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBackgroundParallax@Hub@DirectUI@@AEAAJXZ
    long ResetBackgroundParallax();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBackgroundWrappingCurves@Hub@DirectUI@@AEAAJXZ
    long ResetBackgroundWrappingCurves();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHeaderParallax@Hub@DirectUI@@AEAAJXZ
    long ResetHeaderParallax();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetParametricCurves@Hub@DirectUI@@AEAAJXZ
    long ResetParametricCurves();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSectionStickyHeaders@Hub@DirectUI@@AEAAJXZ
    long ResetSectionStickyHeaders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSectionWrappingCurve@Hub@DirectUI@@AEAAJPEAVHubSection@2@PEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUISecondaryContentRelationship@Internal@567@@Z
    long ResetSectionWrappingCurve(HubSection *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSectionsWrappingCurves@Hub@DirectUI@@AEAAJXZ
    long ResetSectionsWrappingCurves();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFlyinFlyoutAnimation@Hub@DirectUI@@AEAAJXZ
    long StopFlyinFlyoutAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackground@Hub@DirectUI@@AEAAJXZ
    long UpdateBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryContentsOffset@Hub@DirectUI@@AEAAJXZ
    long UpdateSecondaryContentsOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSectionsInView@Hub@DirectUI@@AEAAJXZ
    long UpdateSectionsInView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSectionsXOffsetToPanel@Hub@DirectUI@@AEAAJXZ
    long UpdateSectionsXOffsetToPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWrappingStatus@Hub@DirectUI@@AEAAJXZ
    long UpdateWrappingStatus();
};
} // namespace DirectUI
