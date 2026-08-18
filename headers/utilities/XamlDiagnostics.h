#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 55 member(s).
class XamlDiagnostics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@XamlDiagnostics@@UEAAJ_K0I@Z
    virtual long AddChild(uint64_t, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDictionaryItem@XamlDiagnostics@@UEAAJ_K00@Z
    virtual long AddDictionaryItem(uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseVisualTreeChange@XamlDiagnostics@@UEAAJPEAUIVisualTreeServiceCallback@@@Z
    virtual long AdviseVisualTreeChange(IVisualTreeServiceCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanConvertValueToString@XamlDiagnostics@@SA_NPEAUIInspectable@@@Z
    static bool CanConvertValueToString(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearChildren@XamlDiagnostics@@UEAAJ_K@Z
    virtual long ClearChildren(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperty@XamlDiagnostics@@UEAAJ_KI@Z
    virtual long ClearProperty(uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XamlDiagnostics@@SAJPEAPEAUIXamlDiagnostics@@@Z
    static long Create(IXamlDiagnostics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@XamlDiagnostics@@UEAAJPEAG0PEA_K@Z
    virtual long CreateInstance(unsigned short *, unsigned short *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@XamlDiagnostics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetApplication(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionCount@XamlDiagnostics@@UEAAJ_KPEAI@Z
    virtual long GetCollectionCount(uint64_t, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionElements@XamlDiagnostics@@UEAAJ_KIPEAIPEAPEAUCollectionElementValue@@@Z
    virtual long GetCollectionElements(uint64_t, unsigned int, unsigned int *, CollectionElementValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDictionaryItem@XamlDiagnostics@@UEAAJ_KPEBGHPEA_K@Z
    virtual long GetDictionaryItem(uint64_t, unsigned short const *, int, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcher@XamlDiagnostics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetDispatcher(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnums@XamlDiagnostics@@UEAAJPEAIPEAPEAUEnumType@@@Z
    virtual long GetEnums(unsigned int *, EnumType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleFromIInspectable@XamlDiagnostics@@UEAAJPEAUIInspectable@@PEA_K@Z
    virtual long GetHandleFromIInspectable(IInspectable *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIInspectableFromHandle@XamlDiagnostics@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long GetIInspectableFromHandle(uint64_t, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitializationData@XamlDiagnostics@@UEAAJPEAPEAG@Z
    virtual long GetInitializationData(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@XamlDiagnostics@@UEAAJ_KIPEA_K@Z
    virtual long GetProperty(uint64_t, unsigned int, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyIndex@XamlDiagnostics@@UEAAJ_KPEBGPEAI@Z
    virtual long GetPropertyIndex(uint64_t, unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValuesChain@XamlDiagnostics@@UEAAJ_KPEAIPEAPEAUPropertyChainSource@@1PEAPEAUPropertyChainValue@@@Z
    virtual long GetPropertyValuesChain(uint64_t, unsigned int *, PropertyChainSource * *, unsigned int *, PropertyChainValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUiLayer@XamlDiagnostics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetUiLayer(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@XamlDiagnostics@@UEAAJUtagRECT@@PEAIPEAPEA_K@Z
    virtual long HitTest(tagRECT, unsigned int *, uint64_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCoreDeinitialized@XamlDiagnostics@@QEAAJK@Z
    long OnCoreDeinitialized(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementStateChanged@XamlDiagnostics@@QEAAXW4VisualElementState@@PEAVCDependencyObject@@PEBVCDependencyProperty@@@Z
    void OnElementStateChanged(int, CDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandInVisualRemoved@XamlDiagnostics@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIVisual@Composition@45@@Z
    long OnHandInVisualRemoved(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandInVisualSet@XamlDiagnostics@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIVisual@Composition@45@@Z
    long OnHandInVisualSet(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualTreeChange@XamlDiagnostics@@UEAAJUParentChildRelation@@UVisualElement@@W4VisualMutationType@@@Z
    virtual long OnVisualTreeChange(ParentChildRelation, VisualElement, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInstance@XamlDiagnostics@@UEAAJPEAUIInspectable@@PEA_K@Z
    virtual long RegisterInstance(IInspectable *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@XamlDiagnostics@@UEAAJ_KI@Z
    virtual long RemoveChild(uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDictionaryItem@XamlDiagnostics@@UEAAJ_K0@Z
    virtual long RemoveDictionaryItem(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetBitmap@XamlDiagnostics@@UEAAJ_KW4RenderTargetBitmapOptions@@IIPEAPEAUIBitmapData@@@Z
    virtual long RenderTargetBitmap(uint64_t, int, unsigned int, unsigned int, IBitmapData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceResource@XamlDiagnostics@@UEAAJ_K00@Z
    virtual long ReplaceResource(uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveResource@XamlDiagnostics@@UEAAJ_KPEBGW4ResourceType@@I@Z
    virtual long ResolveResource(uint64_t, unsigned short const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@XamlDiagnostics@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@XamlDiagnostics@@UEAAJ_K0I@Z
    virtual long SetProperty(uint64_t, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseCompDiag@XamlDiagnostics@@SA_NXZ
    static bool ShouldUseCompDiag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalMutation@XamlDiagnostics@@QEAAXPEAUIDependencyObject@Xaml@UI@Windows@@W4VisualMutationType@@@Z
    void SignalMutation(::Windows::UI::Xaml::IDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalRootMutation@XamlDiagnostics@@QEAAXPEAUIInspectable@@W4VisualMutationType@@@Z
    void SignalRootMutation(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDispatcherQueueForObject@XamlDiagnostics@@UEAAJ_KPEAPEAUIInspectable@@@Z
    virtual long TryGetDispatcherQueueForObject(uint64_t, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnadviseVisualTreeChange@XamlDiagnostics@@UEAAJPEAUIVisualTreeServiceCallback@@@Z
    virtual long UnadviseVisualTreeChange(IVisualTreeServiceCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInstance@XamlDiagnostics@@UEAAJ_K@Z
    virtual long UnregisterInstance(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlDiagnostics@@QEAA@XZ
    XamlDiagnostics();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlDiagnostics@@UEAA@XZ
    virtual ~XamlDiagnostics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDependencyObjectToMap@XamlDiagnostics@@AEAAXPEAUIDependencyObject@Xaml@UI@Windows@@PEA_K@Z
    void AddDependencyObjectToMap(::Windows::UI::Xaml::IDependencyObject *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseCompVisualDiag@XamlDiagnostics@@AEAAJXZ
    long AdviseCompVisualDiag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompVisualDiag@XamlDiagnostics@@AEAAJXZ
    long CreateCompVisualDiag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementChildVisual@XamlDiagnostics@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAPEAUIVisual@Composition@45@@Z
    long GetElementChildVisual(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleForDependencyObject@XamlDiagnostics@@AEAA_NPEAUIDependencyObject@Xaml@UI@Windows@@PEA_K@Z
    bool GetHandleForDependencyObject(::Windows::UI::Xaml::IDependencyObject *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GiveRootsToCallback@XamlDiagnostics@@AEAAJAEBV?$ComPtr@UIVisualTreeServiceCallback@@@WRL@Microsoft@@@Z
    long GiveRootsToCallback(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRootObjectFromLVT@XamlDiagnostics@@AEAAXPEAUIInspectable@@@Z
    void RemoveRootObjectFromLVT(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDependentItemsOnAdd@XamlDiagnostics@@AEAAXAEBUResourceGraphKey@Diagnostics@@PEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    void UpdateDependentItemsOnAdd(WindissectOpaque const &, ::Windows::UI::Xaml::IResourceDictionary *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDependentItemsOnRemove@XamlDiagnostics@@AEAAXAEBUResourceGraphKeyWithParent@Diagnostics@@@Z
    void UpdateDependentItemsOnRemove(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePropertyIndex@XamlDiagnostics@@AEBAJAEBVRuntimeProperty@Diagnostics@@@Z
    long ValidatePropertyIndex(WindissectOpaque const &) const;
};
