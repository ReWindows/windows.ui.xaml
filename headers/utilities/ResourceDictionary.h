#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 42 member(s).
namespace DirectUI {
class ResourceDictionary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ResourceDictionary@DirectUI@@UEAAJPEAU?$IKeyValuePair@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long Append(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ResourceDictionary@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ResourceDictionary@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ResourceDictionary@DirectUI@@UEAAJIPEAPEAU?$IKeyValuePair@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long GetAt(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ResourceDictionary@DirectUI@@UEAAJPEAPEAU?$IMapView@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@ResourceDictionary@DirectUI@@UEAAJPEAUIInspectable@@PEAE@Z
    virtual long HasKey(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@ResourceDictionary@DirectUI@@UEAAJPEAU?$IKeyValuePair@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@ResourceDictionary@DirectUI@@UEAAJPEAUIInspectable@@0PEAE@Z
    virtual long Insert(IInspectable *, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@ResourceDictionary@DirectUI@@UEAAJIPEAU?$IKeyValuePair@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long InsertAt(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@ResourceDictionary@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@@Z
    virtual long Lookup(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentUpdated@ResourceDictionary@DirectUI@@UEAAJPEAVCDependencyObject@@0_N@Z
    virtual long OnParentUpdated(CDependencyObject *, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ResourceDictionary@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Remove(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ResourceDictionary@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@ResourceDictionary@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDictionaryResource@ResourceDictionary@DirectUI@@SAJPEAVDXamlCore@2@PEAVCResourceDictionary@@AEBVxstring_ptr_view@@_NPEAVCDependencyObject@@PEAV?$xref_ptr@VCDependencyObject@@@@@Z
    static long ResolveDictionaryResource(::DirectUI::DXamlCore *, CResourceDictionary *, xstring_ptr_view const &, bool, CDependencyObject *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceDictionary@DirectUI@@QEAA@XZ
    ResourceDictionary();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@ResourceDictionary@DirectUI@@UEAAJIPEAU?$IKeyValuePair@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long SetAt(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ResourceDictionary@DirectUI@@UEAAJPEAPEAU?$IMapView@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ResourceDictionary@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ResourceDictionary@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyAt@ResourceDictionary@DirectUI@@AEAAJIPEAPEAUIInspectable@@@Z
    long GetKeyAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStrKeyAsInspectable@ResourceDictionary@DirectUI@@CAJAEBVxstring_ptr_view@@_NPEAPEAUIInspectable@@@Z
    static long GetStrKeyAsInspectable(xstring_ptr_view const &, bool, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComposedDependencyObject@ResourceDictionary@DirectUI@@CA_NPEAVDXamlCore@2@PEAVCDependencyObject@@@Z
    static bool IsComposedDependencyObject(::DirectUI::DXamlCore *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCore@ResourceDictionary@DirectUI@@AEAAJPEAUIInspectable@@_NPEAPEAU3@@Z
    long LookupCore(IInspectable *, bool, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetItemCore@ResourceDictionary@DirectUI@@AEAAJAEBVxstring_ptr_view@@_NPEAPEAUIInspectable@@@Z
    long TryGetItemCore(xstring_ptr_view const &, bool, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetKeyAsString@ResourceDictionary@DirectUI@@AEAAJPEAUIInspectable@@PEAE1PEAVxstring_ptr@@@Z
    long TryGetKeyAsString(IInspectable *, unsigned char *, unsigned char *, xstring_ptr *);
};
} // namespace DirectUI
