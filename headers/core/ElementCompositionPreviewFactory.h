#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class ElementCompositionPreviewFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowContent@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIAppWindow@WindowManagement@UI@Windows@@PEAPEAUIUIElement@Xaml@56@@Z
    virtual long GetAppWindowContent(::Windows::UI::WindowManagement::IAppWindow *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementChildVisual@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIVisual@Composition@56@@Z
    virtual long GetElementChildVisual(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementVisual@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIVisual@Composition@56@@Z
    virtual long GetElementVisual(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerPositionPropertySet@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUICompositionPropertySet@Composition@56@@Z
    virtual long GetPointerPositionPropertySet(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewerManipulationPropertySet@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIScrollViewer@Controls@Xaml@UI@Windows@@PEAPEAUICompositionPropertySet@Composition@67@@Z
    virtual long GetScrollViewerManipulationPropertySet(::Windows::UI::Xaml::Controls::IScrollViewer *, ::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowContent@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIAppWindow@WindowManagement@UI@Windows@@PEAUIUIElement@Xaml@56@@Z
    virtual long SetAppWindowContent(::Windows::UI::WindowManagement::IAppWindow *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementChildVisual@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIVisual@Composition@56@@Z
    virtual long SetElementChildVisual(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitHideAnimation@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUICompositionAnimationBase@Composition@56@@Z
    virtual long SetImplicitHideAnimation(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitShowAnimation@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUICompositionAnimationBase@Composition@56@@Z
    virtual long SetImplicitShowAnimation(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTranslationEnabled@ElementCompositionPreviewFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@E@Z
    virtual long SetIsTranslationEnabled(::Windows::UI::Xaml::IUIElement *, unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ElementCompositionPreviewFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ElementCompositionPreviewFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ElementCompositionPreviewFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ElementCompositionPreviewFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowContentImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIAppWindow@WindowManagement@UI@Windows@@PEAPEAUIUIElement@Xaml@56@@Z
    long GetAppWindowContentImpl(::Windows::UI::WindowManagement::IAppWindow *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementVisualImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIVisual@Composition@56@@Z
    long GetElementVisualImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerPositionPropertySetImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUICompositionPropertySet@Composition@56@@Z
    long GetPointerPositionPropertySetImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollViewerManipulationPropertySetImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIScrollViewer@Controls@Xaml@UI@Windows@@PEAPEAUICompositionPropertySet@Composition@67@@Z
    long GetScrollViewerManipulationPropertySetImpl(::Windows::UI::Xaml::Controls::IScrollViewer *, ::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowContentImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIAppWindow@WindowManagement@UI@Windows@@PEAUIUIElement@Xaml@56@@Z
    long SetAppWindowContentImpl(::Windows::UI::WindowManagement::IAppWindow *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementChildVisualImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIVisual@Composition@56@@Z
    long SetElementChildVisualImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitHideAnimationImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUICompositionAnimationBase@Composition@56@@Z
    long SetImplicitHideAnimationImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImplicitShowAnimationImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUICompositionAnimationBase@Composition@56@@Z
    long SetImplicitShowAnimationImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTranslationEnabledImpl@ElementCompositionPreviewFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@E@Z
    long SetIsTranslationEnabledImpl(::Windows::UI::Xaml::IUIElement *, unsigned char);
};
} // namespace DirectUI
