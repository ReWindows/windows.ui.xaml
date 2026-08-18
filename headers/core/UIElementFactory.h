#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 108 member(s).
namespace DirectUI {
class UIElementFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePopupZIndexSorting@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@E@Z
    virtual long EnablePopupZIndexSorting(::Windows::UI::Xaml::IUIElement *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementLayerVisual@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUILayerVisual@Composition@56@@Z
    virtual long GetElementLayerVisual(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ILayerVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScale@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAN@Z
    virtual long GetRasterizationScale(::Windows::UI::Xaml::IUIElement *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetIsEnabled@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAE@Z
    virtual long InternalGetIsEnabled(::Windows::UI::Xaml::IUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalPutIsEnabled@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@E@Z
    virtual long InternalPutIsEnabled(::Windows::UI::Xaml::IUIElement *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutPopupRootLightDismissBounds@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@@Z
    virtual long PutPopupRootLightDismissBounds(::Windows::UI::Xaml::IUIElement *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutRasterizationScale@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@N@Z
    virtual long PutRasterizationScale(::Windows::UI::Xaml::IUIElement *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAsScrollPort@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long RegisterAsScrollPort(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationProperty@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIAutomationProperty@Automation@456@PEAUIComponentPropertyValue@8456@@Z
    virtual long SetAutomationProperty(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Automation::IAutomationProperty *, ::Windows::UI::Xaml::Automation::IComponentPropertyValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSite@UIElementFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long SetComponentSite(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadowDirection@UIElementFactory@DirectUI@@UEAAJUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long SetShadowDirection(::Windows::UI::Xaml::Media::Matrix);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartDirectManipulation@UIElementFactory@DirectUI@@UEAAJPEAUIPointer@Input@Xaml@UI@Windows@@PEAE@Z
    virtual long TryStartDirectManipulation(::Windows::UI::Xaml::Input::IPointer *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PopupOpening@UIElementFactory@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVPopupOpeningEventArgs@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PopupOpening(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PopupPlacement@UIElementFactory@DirectUI@@UEAAJPEAU?$IEventHandler@PEAVPopupPlacementEventArgs@Xaml@UI@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_PopupPlacement(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessKeyProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AccessKeyProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessKeyScopeOwnerProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AccessKeyScopeOwnerProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowDropProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_AllowDropProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BringIntoViewRequestedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_BringIntoViewRequestedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheModeProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CacheModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanBeScrollAnchorProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CanBeScrollAnchorProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanDragProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CanDragProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CharacterReceivedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_CharacterReceivedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClipProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ClipProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositeModeProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_CompositeModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextFlyoutProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ContextFlyoutProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContextRequestedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_ContextRequestedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DoubleTappedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_DoubleTappedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragEnterEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_DragEnterEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragLeaveEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_DragLeaveEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragOverEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_DragOverEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_DropEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExitDisplayModeOnAccessKeyInvokedProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ExitDisplayModeOnAccessKeyInvokedProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GettingFocusEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_GettingFocusEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HighContrastAdjustmentProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_HighContrastAdjustmentProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldingEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_HoldingEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAccessKeyScopeProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsAccessKeyScopeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDoubleTapEnabledProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsDoubleTapEnabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHitTestVisibleProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsHitTestVisibleProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHoldingEnabledProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsHoldingEnabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRightTapEnabledProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsRightTapEnabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTapEnabledProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsTapEnabledProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyDownEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_KeyDownEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTipHorizontalOffsetProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KeyTipHorizontalOffsetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTipPlacementModeProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KeyTipPlacementModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTipTargetProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KeyTipTargetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTipVerticalOffsetProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KeyTipVerticalOffsetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyUpEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_KeyUpEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAcceleratorPlacementModeProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KeyboardAcceleratorPlacementModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAcceleratorPlacementTargetProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KeyboardAcceleratorPlacementTargetProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightsProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_LightsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LosingFocusEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_LosingFocusEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationCompletedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_ManipulationCompletedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationDeltaEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_ManipulationDeltaEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationInertiaStartingEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_ManipulationInertiaStartingEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationModeProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ManipulationModeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationStartedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_ManipulationStartedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationStartingEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_ManipulationStartingEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NoFocusCandidateFoundEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_NoFocusCandidateFoundEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpacityProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_OpacityProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerCanceledEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerCanceledEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerCaptureLostEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerCaptureLostEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerCapturesProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PointerCapturesProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerEnteredEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerEnteredEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerExitedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerExitedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerMovedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerMovedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerPressedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerPressedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerReleasedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerReleasedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerWheelChangedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PointerWheelChangedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviewKeyDownEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PreviewKeyDownEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviewKeyUpEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_PreviewKeyUpEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProjectionProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ProjectionProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RenderTransformOriginProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RenderTransformOriginProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RenderTransformProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RenderTransformProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RightTappedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_RightTappedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShadowProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_ShadowProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TabFocusNavigationProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TabFocusNavigationProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TappedEvent@UIElementFactory@DirectUI@@UEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    virtual long get_TappedEvent(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Transform3DProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_Transform3DProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransitionsProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TransitionsProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UseLayoutRoundingProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_UseLayoutRoundingProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibilityProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_VisibilityProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusDownNavigationStrategyProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusDownNavigationStrategyProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusKeyboardNavigationProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusKeyboardNavigationProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusLeftNavigationStrategyProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusLeftNavigationStrategyProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusRightNavigationStrategyProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusRightNavigationStrategyProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XYFocusUpNavigationStrategyProperty@UIElementFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_XYFocusUpNavigationStrategyProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PopupOpening@UIElementFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PopupOpening(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PopupPlacement@UIElementFactory@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PopupPlacement(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@UIElementFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@UIElementFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@UIElementFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@UIElementFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePopupZIndexSortingImpl@UIElementFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@E@Z
    long EnablePopupZIndexSortingImpl(::Windows::UI::Xaml::IUIElement *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRasterizationScaleImpl@UIElementFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAN@Z
    long GetRasterizationScaleImpl(::Windows::UI::Xaml::IUIElement *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutPopupRootLightDismissBoundsImpl@UIElementFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@@Z
    long PutPopupRootLightDismissBoundsImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutRasterizationScaleImpl@UIElementFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@N@Z
    long PutRasterizationScaleImpl(::Windows::UI::Xaml::IUIElement *, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationPropertyImpl@UIElementFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIAutomationProperty@Automation@456@PEAUIComponentPropertyValue@8456@@Z
    long SetAutomationPropertyImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Automation::IAutomationProperty *, ::Windows::UI::Xaml::Automation::IComponentPropertyValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentSiteImpl@UIElementFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    long SetComponentSiteImpl(::Windows::UI::Xaml::IUIElement *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadowDirectionImpl@UIElementFactory@DirectUI@@AEAAJUMatrix@Media@Xaml@UI@Windows@@@Z
    long SetShadowDirectionImpl(::Windows::UI::Xaml::Media::Matrix);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DragOverEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_DragOverEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyDownEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_KeyDownEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyUpEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_KeyUpEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerCanceledEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_PointerCanceledEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerCaptureLostEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_PointerCaptureLostEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerExitedEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_PointerExitedEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerPressedEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_PointerPressedEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerReleasedEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_PointerReleasedEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TappedEventImpl@UIElementFactory@DirectUI@@AEAAJPEAPEAUIRoutedEvent@Xaml@UI@Windows@@@Z
    long get_TappedEventImpl(::Windows::UI::Xaml::IRoutedEvent * *);
};
} // namespace DirectUI
