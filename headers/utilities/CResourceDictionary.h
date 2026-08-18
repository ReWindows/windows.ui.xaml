#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 52 member(s).
class CResourceDictionary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CResourceDictionary@@QEAAJAEBVxstring_ptr@@PEAVCValue@@1I@Z
    long Add(xstring_ptr const &, CValue *, CValue *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CResourceDictionary@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CResourceDictionary@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CResourceDictionary@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CResourceDictionary@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSystemColors@CResourceDictionary@@SAJPEAVCCoreServices@@PEAPEAV1@@Z
    static long CreateSystemColors(CCoreServices *, CResourceDictionary * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAll@CResourceDictionary@@QEAAJXZ
    long EnsureAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CResourceDictionary@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CResourceDictionary@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyAtIndex@CResourceDictionary@@QEAAJHPEAVCValue@@PEA_N1@Z
    long GetKeyAtIndex(int, CValue *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyForResourceResolutionNoRef@CResourceDictionary@@QEAAJAEBVxstring_ptr_view@@W4LookupScope@Resources@@PEAPEAVCDependencyObject@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    long GetKeyForResourceResolutionNoRef(xstring_ptr_view const &, int, CDependencyObject * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyFromGlobalThemeResourceNoRef@CResourceDictionary@@SAJPEAVCCoreServices@@PEAV1@AEBVxstring_ptr_view@@_NPEAPEAVCDependencyObject@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static long GetKeyFromGlobalThemeResourceNoRef(CCoreServices *, CResourceDictionary *, xstring_ptr_view const &, bool, CDependencyObject * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyWithOverrideNoRef@CResourceDictionary@@QEAAJAEBVxstring_ptr_view@@W4LookupScope@Resources@@PEAPEAVCDependencyObject@@@Z
    long GetKeyWithOverrideNoRef(xstring_ptr_view const &, int, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalOverrideNoRef@CResourceDictionary@@QEAAJAEBVxstring_ptr_view@@PEAPEAVCDependencyObject@@PEAPEAV1@@Z
    long GetLocalOverrideNoRef(xstring_ptr_view const &, CDependencyObject * *, CResourceDictionary * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceOwnerNoRef@CResourceDictionary@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * GetResourceOwnerNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CResourceDictionary@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUndeferredImplicitStyles@CResourceDictionary@@QEAAJPEAU?$stack_vector@PEAVCStyle@@$07@Jupiter@@@Z
    long GetUndeferredImplicitStyles(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImplicitStyle@CResourceDictionary@@QEAA_NXZ
    bool HasImplicitStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CResourceDictionary@@QEBA_NAEBVxstring_ptr@@_N@Z
    bool HasKey(xstring_ptr const &, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPotentialOverrides@CResourceDictionary@@QEBA_NXZ
    bool HasPotentialOverrides() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnlyDictionary@CResourceDictionary@@QEBA_NXZ
    bool IsReadOnlyDictionary() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAllIsGlobal@CResourceDictionary@@QEAAXXZ
    void MarkAllIsGlobal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CResourceDictionary@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CResourceDictionary@@UEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CResourceDictionary@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CResourceDictionary@@UEAAJAEBVxstring_ptr@@I@Z
    virtual long Remove(xstring_ptr const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CResourceDictionary@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceOwner@CResourceDictionary@@QEAAXQEAVCDependencyObject@@@Z
    void SetResourceOwner(CDependencyObject * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CResourceDictionary@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CResourceDictionary@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceDictionary@@UEAA@XZ
    virtual ~CResourceDictionary();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceDictionary@@IEAA@PEAVCCoreServices@@@Z
    CResourceDictionary(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildEnter@CResourceDictionary@@MEAAJPEAVCDependencyObject@@0UEnterParams@@I@Z
    virtual long ChildEnter(CDependencyObject *, CDependencyObject *, EnterParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildLeave@CResourceDictionary@@MEAAJPEAVCDependencyObject@@0ULeaveParams@@I@Z
    virtual long ChildLeave(CDependencyObject *, CDependencyObject *, LeaveParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CResourceDictionary@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CResourceDictionary@@AEAAJAEBVxstring_ptr@@PEAVCValue@@1_N222@Z
    long Add(xstring_ptr const &, CValue *, CValue *, bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKey@CResourceDictionary@@AEAAJAEBVxstring_ptr@@PEAVCDependencyObject@@_N22@Z
    long AddKey(xstring_ptr const &, CDependencyObject *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleCheckInternal@CResourceDictionary@@AEAAJPEAV1@@Z
    long CycleCheckInternal(CResourceDictionary *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureActiveThemeDictionary@CResourceDictionary@@AEAAJXZ
    long EnsureActiveThemeDictionary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDeferredResource@CResourceDictionary@@AEAAJAEBVxstring_ptr_view@@_NPEAPEAVCDependencyObject@@@Z
    long FindDeferredResource(xstring_ptr_view const &, bool, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindResourceByKey@CResourceDictionary@@AEBAPEAVCDependencyObject@@AEBVxstring_ptr_view@@_N@Z
    CDependencyObject * FindResourceByKey(xstring_ptr_view const &, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyNoRefImpl@CResourceDictionary@@AEAAJAEBVxstring_ptr_view@@_NW4LookupScope@Resources@@PEAPEAVCDependencyObject@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    long GetKeyNoRefImpl(xstring_ptr_view const &, bool, int, CDependencyObject * *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyOverrideFromApplicationResourcesNoRef@CResourceDictionary@@CAJPEAVCCoreServices@@AEBVxstring_ptr_view@@PEAPEAVCDependencyObject@@PEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    static long GetKeyOverrideFromApplicationResourcesNoRef(CCoreServices *, xstring_ptr_view const &, CDependencyObject * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateImplicitStyles@CResourceDictionary@@AEAAJPEAV1@@Z
    long InvalidateImplicitStyles(CResourceDictionary *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAllDeferredResources@CResourceDictionary@@AEAAJXZ
    long LoadAllDeferredResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromSource@CResourceDictionary@@AEAAJXZ
    long LoadFromSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyImplicitStyleChanged@CResourceDictionary@@AEAAJPEAVCStyle@@W4StyleUpdateType@1@@Z
    long NotifyImplicitStyleChanged(CStyle *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeDictionariesChanged@CResourceDictionary@@AEAAJXZ
    long NotifyThemeDictionariesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveKey@CResourceDictionary@@AEAAJAEBVxstring_ptr@@_NI@Z
    long RemoveKey(xstring_ptr const &, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadDeferredResource@CResourceDictionary@@AEAAJAEBVxstring_ptr@@_NPEAPEAVCDependencyObject@@@Z
    long TryLoadDeferredResource(xstring_ptr const &, bool, CDependencyObject * *);
};
