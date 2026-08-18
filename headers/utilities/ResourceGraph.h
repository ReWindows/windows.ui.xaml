#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace Diagnostics {
class ResourceGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStyleContext@ResourceGraph@Diagnostics@@QEAAXPEAVCStyle@@PEAVCDependencyObject@@_N@Z
    void AddStyleContext(CStyle *, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheMarkupExtensionToTarget@ResourceGraph@Diagnostics@@QEAAXPEAVCMarkupExtensionBase@@W4KnownPropertyIndex@@PEAVCDependencyObject@@@Z
    void CacheMarkupExtensionToTarget(CMarkupExtensionBase *, int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningStyle@ResourceGraph@Diagnostics@@QEAAPEAVCStyle@@PEAVCSetterBaseCollection@@@Z
    CStyle * GetOwningStyle(CSetterBaseCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@ResourceGraph@Diagnostics@@QEAA?AV?$xref_ptr@VCDependencyObject@@@@PEAVCStyle@@PEA_N@Z
    WindissectOpaque GetParent(CStyle *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetObject@ResourceGraph@Diagnostics@@QEAA?AV?$xref_ptr@VCDependencyObject@@@@PEAVCMarkupExtensionBase@@@Z
    WindissectOpaque GetTargetObject(CMarkupExtensionBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetProperty@ResourceGraph@Diagnostics@@QEAA?AW4KnownPropertyIndex@@PEAVCMarkupExtensionBase@@@Z
    int GetTargetProperty(CMarkupExtensionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBasedOnStyleDependency@ResourceGraph@Diagnostics@@QEAAXPEAVCStyle@@@Z
    void RegisterBasedOnStyleDependency(CStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterControlTemplateDependency@ResourceGraph@Diagnostics@@QEAAXPEAVCControlTemplate@@PEAVCResourceDictionary@@AEBVxstring_ptr@@@Z
    void RegisterControlTemplateDependency(CControlTemplate *, CResourceDictionary *, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterResourceDependency@ResourceGraph@Diagnostics@@QEAAXPEAVCDependencyObject@@W4KnownPropertyIndex@@PEAVCResourceDictionary@@AEBVxstring_ptr@@W4ResourceType@@@Z
    void RegisterResourceDependency(CDependencyObject *, int, CResourceDictionary *, xstring_ptr const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStyleAndSetterCollection@ResourceGraph@Diagnostics@@QEAAXPEAVCStyle@@PEAVCSetterBaseCollection@@@Z
    void RegisterStyleAndSetterCollection(CStyle *, CSetterBaseCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMarkupExtensionToTarget@ResourceGraph@Diagnostics@@QEAAXPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    void RemoveMarkupExtensionToTarget(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceResource@ResourceGraph@Diagnostics@@QEAAJPEAVCResourceDictionary@@PEAUIInspectable@@1@Z
    long ReplaceResource(CResourceDictionary *, IInspectable *, IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceGraph@Diagnostics@@QEAA@XZ
    ResourceGraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterResourceDependency@ResourceGraph@Diagnostics@@QEAAXPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    void UnregisterResourceDependency(CDependencyObject *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceGraph@Diagnostics@@QEAA@XZ
    ~ResourceGraph();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAllResourceDependencies@ResourceGraph@Diagnostics@@AEAAXXZ
    void ResolveAllResourceDependencies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResourceReferences@ResourceGraph@Diagnostics@@AEAAJPEAVCResourceDictionary@@AEBVxstring_ptr@@PEAUIInspectable@@@Z
    long UpdateResourceReferences(CResourceDictionary *, xstring_ptr const &, IInspectable *);
};
} // namespace Diagnostics
