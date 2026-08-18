#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 53 member(s).
namespace DirectUI {
class FrameworkElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverrideFromCore@FrameworkElement@DirectUI@@SAJPEAVCFrameworkElement@@MMPEAM1@Z
    static long ArrangeOverrideFromCore(CFrameworkElement *, float, float, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipPointToElementBounds@FrameworkElement@DirectUI@@QEAAJPEAV12@PEAUPoint@Foundation@Windows@@@Z
    long ClipPointToElementBounds(FrameworkElement *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNameImpl@FrameworkElement@DirectUI@@QEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    long FindNameImpl(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNameInPage@FrameworkElement@DirectUI@@UEAAJPEAUHSTRING__@@IPEAPEAUIInspectable@@@Z
    virtual long FindNameInPage(HSTRING__*, unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingExpression@FrameworkElement@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAPEAUIBindingExpression@Data@Xaml@UI@Windows@@@Z
    long GetBindingExpression(CDependencyProperty const *, ::Windows::UI::Xaml::Data::IBindingExpression * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingExpressionImpl@FrameworkElement@DirectUI@@QEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAPEAUIBindingExpression@Data@456@@Z
    long GetBindingExpressionImpl(::Windows::UI::Xaml::IDependencyProperty *, ::Windows::UI::Xaml::Data::IBindingExpression * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataContextChangedSource@FrameworkElement@DirectUI@@QEAAJPEAPEAUIDataContextChangedEventSource@2@@Z
    long GetDataContextChangedSource(::DirectUI::IDataContextChangedEventSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDataContext@FrameworkElement@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long GetEffectiveDataContext(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritanceParent@FrameworkElement@DirectUI@@QEAAJPEAPEAVDependencyObject@2@@Z
    long GetInheritanceParent(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@FrameworkElement@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFromObject@FrameworkElement@DirectUI@@SAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    static long GetStringFromObject(IInspectable *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueFromStyle@FrameworkElement@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@PEAI@Z
    long GetValueFromStyle(CDependencyProperty const *, IInspectable * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToElementStateCoreImpl@FrameworkElement@DirectUI@@UEAAJPEAUHSTRING__@@EPEAE@Z
    virtual long GoToElementStateCoreImpl(HSTRING__*, unsigned char, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocus@FrameworkElement@DirectUI@@UEAAJPEAE@Z
    virtual long HasFocus(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasParent@FrameworkElement@DirectUI@@QEAAJPEAE@Z
    long HasParent(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateViewportImpl@FrameworkElement@DirectUI@@QEAAJXZ
    long InvalidateViewportImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWidthSpecified@FrameworkElement@DirectUI@@QEAA_NXZ
    bool IsWidthSpecified();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverrideFromCore@FrameworkElement@DirectUI@@SAJPEAVCFrameworkElement@@MMPEAM1@Z
    static long MeasureOverrideFromCore(CFrameworkElement *, float, float, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAncestorDataContextChanged@FrameworkElement@DirectUI@@UEAAJAEBUDataContextChangedParams@2@@Z
    virtual long OnAncestorDataContextChanged(::DirectUI::DataContextChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateFromCore@FrameworkElement@DirectUI@@SAJPEAVCFrameworkElement@@@Z
    static long OnApplyTemplateFromCore(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@FrameworkElement@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritanceContextChanged@FrameworkElement@DirectUI@@UEAAJXZ
    virtual long OnInheritanceContextChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@FrameworkElement@DirectUI@@QEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@FrameworkElement@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLayoutUpdated@FrameworkElement@DirectUI@@UEAAJPEAUIInspectable@@0@Z
    virtual long RaiseLayoutUpdated(IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBinding@FrameworkElement@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAUIBindingBase@Data@Xaml@UI@Windows@@@Z
    long SetBinding(CDependencyProperty const *, ::Windows::UI::Xaml::Data::IBindingBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingImpl@FrameworkElement@DirectUI@@QEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAUIBindingBase@Data@456@@Z
    long SetBindingImpl(::Windows::UI::Xaml::IDependencyProperty *, ::Windows::UI::Xaml::Data::IBindingBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHasOpenToolTip@FrameworkElement@DirectUI@@QEAAJI@Z
    long SetHasOpenToolTip(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetParent@FrameworkElement@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long TryGetParent(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility@FrameworkElement@DirectUI@@UEAAEW4Orientation@Controls@Xaml@UI@Windows@@@Z
    virtual unsigned char WantsScrollViewerToObscureAvailableSizeBasedOnScrollBarVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LayoutUpdated@FrameworkElement@DirectUI@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LayoutUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SizeChanged@FrameworkElement@DirectUI@@UEAAJPEAUISizeChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SizeChanged(::Windows::UI::Xaml::ISizeChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseUriImpl@FrameworkElement@DirectUI@@QEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long get_BaseUriImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLoadedImpl@FrameworkElement@DirectUI@@QEAAJPEAE@Z
    long get_IsLoadedImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@FrameworkElement@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_Parent(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TemplatedParent@FrameworkElement@DirectUI@@QEAAJPEAPEAVDependencyObject@2@@Z
    long get_TemplatedParent(::DirectUI::DependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutomationPeerFactoryIndex@FrameworkElement@DirectUI@@QEAAJH@Z
    long put_AutomationPeerFactoryIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FocusVisualPrimaryBrushImpl@FrameworkElement@DirectUI@@QEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    long put_FocusVisualPrimaryBrushImpl(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FocusVisualSecondaryBrushImpl@FrameworkElement@DirectUI@@QEAAJPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    long put_FocusVisualSecondaryBrushImpl(::Windows::UI::Xaml::Media::IBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LayoutUpdated@FrameworkElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LayoutUpdated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SizeChanged@FrameworkElement@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SizeChanged(EventRegistrationToken);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FrameworkElement@DirectUI@@IEAA@XZ
    FrameworkElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParentForAPProtected@FrameworkElement@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLogicalParentForAPProtected(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDataContextChangeRelevant@FrameworkElement@DirectUI@@MEAAJAEBUDataContextChangedParams@2@PEAE@Z
    virtual long IsDataContextChangeRelevant(::DirectUI::DataContextChangedParams const &, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBindingExpressions@FrameworkElement@DirectUI@@MEAAJAEBUDataContextChangedParams@2@@Z
    virtual long NotifyBindingExpressions(::DirectUI::DataContextChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfDataContextChange@FrameworkElement@DirectUI@@MEAAXAEBUDataContextChangedParams@2@@Z
    virtual void NotifyOfDataContextChange(::DirectUI::DataContextChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnectVisualChildren@FrameworkElement@DirectUI@@MEAAJXZ
    virtual long OnDisconnectVisualChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@FrameworkElement@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@FrameworkElement@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDataContextChanged@FrameworkElement@DirectUI@@MEAAJAEBUDataContextChangedParams@2@@Z
    virtual long PropagateDataContextChanged(::DirectUI::DataContextChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkElement@DirectUI@@MEAA@XZ
    virtual ~FrameworkElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@FrameworkElement@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDataContextChangedInCoreTree@FrameworkElement@DirectUI@@CAJPEAVCFrameworkElement@@AEBUDataContextChangedParams@2@@Z
    static long PropagateDataContextChangedInCoreTree(CFrameworkElement *, ::DirectUI::DataContextChangedParams const &);
};
} // namespace DirectUI
