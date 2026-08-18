#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 63 member(s).
class InternalDebugInterop {
public:
    class ComponentHost;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InternalDebugInterop@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustBoundingRectToRoot@InternalDebugInterop@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUXRECTF_WH@@@Z
    virtual long AdjustBoundingRectToRoot(::Windows::UI::Xaml::IUIElement *, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertyValue@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4KnownPropertyIndex@@@Z
    virtual long ClearPropertyValue(::Windows::UI::Xaml::IDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertValueToString@InternalDebugInterop@@UEAAJPEAUIPropertyValue@Foundation@Windows@@W4PropertyType@34@PEAPEAUHSTRING__@@@Z
    virtual long ConvertValueToString(WindissectOpaque *, int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllDependencyProperties@InternalDebugInterop@@UEAAJPEAU?$ICollection@VDebugPropertyInfo@DebugTool@@@DebugTool@@@Z
    virtual long GetAllDependencyProperties(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationSpeedFactor@InternalDebugInterop@@UEAAJPEA_J@Z
    virtual long GetAnimationSpeedFactor(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseType@InternalDebugInterop@@UEAAJPEBVCClassInfo@@PEAPEBV2@@Z
    virtual long GetBaseType(CClassInfo const *, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseUri@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long GetBaseUri(::Windows::UI::Xaml::IDependencyObject *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU2345@@Z
    virtual long GetChildren(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItem@InternalDebugInterop@@UEAAJAEBVDebugPropertyInfo@DebugTool@@IPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetCollectionItem(WindissectOpaque const &, unsigned int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionSize@InternalDebugInterop@@UEAAJAEBVDebugPropertyInfo@DebugTool@@PEAI@Z
    virtual long GetCollectionSize(WindissectOpaque const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProperty@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAVDebugPropertyInfo@DebugTool@@@Z
    virtual long GetContentProperty(::Windows::UI::Xaml::IDependencyObject *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPropertyName@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEBG@Z
    virtual long GetContentPropertyName(::Windows::UI::Xaml::IDependencyObject *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDebugToolNoRef@InternalDebugInterop@@UEAAPEAUIDebugTool@DebugTool@@XZ
    virtual WindissectOpaque * GetDebugToolNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIDependencyProperty@345@PEAPEAUIInspectable@@@Z
    virtual long GetDefaultValue(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyProperty *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalBounds@InternalDebugInterop@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@IPEAUXRECTF_WH@@@Z
    virtual long GetGlobalBounds(::Windows::UI::Xaml::IUIElement *, unsigned int, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InternalDebugInterop@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutInfo@InternalDebugInterop@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAUXRECTF_RB@@1@Z
    virtual long GetLayoutInfo(::Windows::UI::Xaml::IFrameworkElement *, XRECTF_RB *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@InternalDebugInterop@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAPEAUHSTRING__@@@Z
    virtual long GetName(::Windows::UI::Xaml::IFrameworkElement *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextStep@InternalDebugInterop@@UEAAPEAVPropertyPathStep@DirectUI@@PEAV23@@Z
    virtual ::DirectUI::PropertyPathStep * GetNextStep(::DirectUI::PropertyPathStep *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU2345@@Z
    virtual long GetParent(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupRoot@InternalDebugInterop@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetPopupRoot(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesForDO@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@_NPEAU?$ICollection@VDebugPropertyInfo@DebugTool@@@DebugTool@@@Z
    virtual long GetPropertiesForDO(::Windows::UI::Xaml::IDependencyObject *, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@InternalDebugInterop@@UEAAPEBGPEAVPropertyPathStep@DirectUI@@@Z
    virtual unsigned short const * GetPropertyName(::DirectUI::PropertyPathStep *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@InternalDebugInterop@@UEAAJPEAVPropertyPathStep@DirectUI@@PEAPEAUIInspectable@@@Z
    virtual long GetPropertyValue(::DirectUI::PropertyPathStep *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTransformLocal@InternalDebugInterop@@UEAA_NPEAUIUIElement@Xaml@UI@Windows@@PEAVCMILMatrix@@@Z
    virtual bool GetRenderTransformLocal(::Windows::UI::Xaml::IUIElement *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InternalDebugInterop@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleDimensions@InternalDebugInterop@@UEAAXPEAVCMILMatrix@@PEAM1@Z
    virtual void GetScaleDimensions(CMILMatrix *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowingFrameCounter@InternalDebugInterop@@UEAAJPEA_N@Z
    virtual long GetShowingFrameCounter(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShowingHeatmap@InternalDebugInterop@@UEAAJPEA_N@Z
    virtual long GetShowingHeatmap(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InternalDebugInterop@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeDisplayNameFromObject@InternalDebugInterop@@UEAAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    virtual long GetTypeDisplayNameFromObject(IInspectable *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeFor@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEBVCClassInfo@@@Z
    virtual long GetTypeFor(::Windows::UI::Xaml::IDependencyObject *, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeName@InternalDebugInterop@@UEAAPEBGPEBVCClassInfo@@@Z
    virtual unsigned short const * GetTypeName(CClassInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIDependencyProperty@345@PEAPEAUIInspectable@@@Z
    virtual long GetValue(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyProperty *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRoot@InternalDebugInterop@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetVisualRoot(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTemplatedParent@InternalDebugInterop@@UEAA_NPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual bool HasTemplatedParent(::Windows::UI::Xaml::IDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@InternalDebugInterop@@UEAAJUtagRECT@@PEAU?$ICollection@PEAUIDependencyObject@Xaml@UI@Windows@@@DebugTool@@@Z
    virtual long HitTest(tagRECT, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InternalDebugInterop@@QEAA@XZ
    InternalDebugInterop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@InternalDebugInterop@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@InternalDebugInterop@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollection@InternalDebugInterop@@UEAA_NAEBVDebugPropertyInfo@DebugTool@@@Z
    virtual bool IsCollection(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypePublic@InternalDebugInterop@@UEAA_NPEBVCClassInfo@@@Z
    virtual bool IsTypePublic(CClassInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@InternalDebugInterop@@UEAA_NPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual bool IsVisible(::Windows::UI::Xaml::IUIElement *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InternalDebugInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InternalDebugInterop@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationSpeedFactor@InternalDebugInterop@@UEAAJ_J@Z
    virtual long SetAnimationSpeedFactor(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyValue@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4KnownPropertyIndex@@PEAUIInspectable@@@Z
    virtual long SetPropertyValue(::Windows::UI::Xaml::IDependencyObject *, int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyValue@InternalDebugInterop@@UEAAJPEAUIDependencyObject@Xaml@UI@Windows@@W4KnownPropertyIndex@@PEBG@Z
    virtual long SetPropertyValue(::Windows::UI::Xaml::IDependencyObject *, int, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowingFrameCounter@InternalDebugInterop@@UEAAJ_N@Z
    virtual long SetShowingFrameCounter(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowingHeatmap@InternalDebugInterop@@UEAAJ_N@Z
    virtual long SetShowingHeatmap(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualRootUpdateLayout@InternalDebugInterop@@UEAAJXZ
    virtual long VisualRootUpdateLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InternalDebugInterop@@AEAAJPEBVCClassInfo@@PEBGPEAPEAUIInspectable@@@Z
    long CreateInstance(CClassInfo const *, unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterComponentHost@InternalDebugInterop@@AEAAXXZ
    void RegisterComponentHost();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InternalDebugInterop@@EEAA@XZ
    virtual ~InternalDebugInterop();
};
