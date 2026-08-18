#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class Diagnostics {
public:
    class DiagnosticsInterop;
    class ElementStateChangedBuilder;
    class ElementStateChangedContext;
    class EvaluatedValue;
    class ObjectUnsealer;
    class PropertyChainData;
    class PropertyChainEvaluator;
    class PropertyChainIterator;
    class PropertySource;
    class ResourceDependency;
    class ResourceGraph;
    class ResourceGraphKey;
    class ResourceGraphKeyComparer;
    class ResourceGraphKeyWithParent;
    class ResourceOperations;
    class RuntimeApplication;
    class RuntimeCollection;
    class RuntimeDictionary;
    class RuntimeDictionaryKey;
    class RuntimeDictionaryKeyData;
    class RuntimeDictionaryValue;
    class RuntimeElement;
    class RuntimeObject;
    class RuntimeObjectCache;
    class RuntimeProperty;
    class RuntimeShareableObject;
    class SetterCollectionUnsealer;
    class SetterUnsealer;
    class StyleContext;
    class StyleUnsealer;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSimpleProperty@Diagnostics@@YAXPEAXPEBVCPropertyBase@@@Z
    void ClearSimpleProperty(void *, CPropertyBase const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSimplePropertyType@Diagnostics@@YAJPEBVCClassInfo@@AEBVxstring_ptr_view@@PEAPEAUIInspectable@@@Z
    long CreateSimplePropertyType(CClassInfo const *, xstring_ptr_view const &, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentity@Diagnostics@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@PEAUIInspectable@@AEA_K@Z
    WindissectOpaque GetIdentity(IInspectable *, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentForElementStateChanged@Diagnostics@@YAPEAVCDependencyObject@@PEAV2@@Z
    CDependencyObject * GetParentForElementStateChanged(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueSimpleProperty@Diagnostics@@YAJPEBVCPropertyBase@@PEBXPEAPEAUIInspectable@@@Z
    long GetValueSimpleProperty(CPropertyBase const *, void const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCreatableSimplePropertyType@Diagnostics@@YA_NPEBVCClassInfo@@@Z
    bool IsCreatableSimplePropertyType(CClassInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeHandle@Diagnostics@@YA_KPEAUIInspectable@@@Z
    uint64_t MakeHandle(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueSimpleProperty@Diagnostics@@YAJPEBVCPropertyBase@@PEAXPEAUIInspectable@@@Z
    long SetValueSimpleProperty(CPropertyBase const *, void *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetXamlIsland@Diagnostics@@YAPEAUIXamlIsland@Hosting@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    ::Windows::UI::Xaml::Hosting::IXamlIsland * TryGetXamlIsland(IInspectable *);
};
