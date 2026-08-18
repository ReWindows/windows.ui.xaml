#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CVisualStateGroupCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CVisualStateGroupCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVisualStateGroupCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFaultedIn@CVisualStateGroupCollection@@QEBAJXZ
    long EnsureFaultedIn() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CVisualStateGroupCollection@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CVisualStateGroupCollection@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwningControl@CVisualStateGroupCollection@@QEBA?AV?$xref_ptr@VCControl@@@@XZ
    WindissectOpaque GetOwningControl() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVisualStateGroupCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CVisualStateGroupCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CVisualStateGroupCollection@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CVisualStateGroupCollection@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CVisualStateGroupCollection@@UEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseVsm2Logic@CVisualStateGroupCollection@@QEBA_NXZ
    bool ShouldUseVsm2Logic() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualStateGroupCollection@@UEAA@XZ
    virtual ~CVisualStateGroupCollection();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CVisualStateGroupCollection@@MEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEnsureNameResolution@CVisualStateGroupCollection@@MEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualStateGroupCollection@@AEAA@PEAVCCoreServices@@@Z
    CVisualStateGroupCollection(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeferredStandardNameScopeEntries@CVisualStateGroupCollection@@EEAAXPEAVCDependencyObject@@@Z
    virtual void RegisterDeferredStandardNameScopeEntries(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDeferredStandardNameScopeEntries@CVisualStateGroupCollection@@EEAAXPEAVCDependencyObject@@@Z
    virtual void UnregisterDeferredStandardNameScopeEntries(CDependencyObject *);
};
