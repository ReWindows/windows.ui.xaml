#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CThemeShadow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForAncestorReceivers@CThemeShadow@@QEAAJPEAVCUIElement@@@Z
    long CheckForAncestorReceivers(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CThemeShadow@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionCleared@CThemeShadow@@UEAAJXZ
    virtual long CollectionCleared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CThemeShadow@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementInserted@CThemeShadow@@UEAAJI@Z
    virtual long ElementInserted(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementMoved@CThemeShadow@@UEAAJII@Z
    virtual long ElementMoved(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementRemoved@CThemeShadow@@UEAAJI@Z
    virtual long ElementRemoved(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReceiversNoRef@CThemeShadow@@QEAAPEAVCUIElementWeakCollection@@XZ
    CUIElementWeakCollection * GetReceiversNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CThemeShadow@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCustomReceivers@CThemeShadow@@QEAA_NXZ
    bool HasCustomReceivers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropShadowMode@CThemeShadow@@SA_NXZ
    static bool IsDropShadowMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDropShadowQuirkEnabled@CThemeShadow@@SA_NXZ
    static bool IsDropShadowQuirkEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CThemeShadow@@UEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CThemeShadow@@QEAAXPEAUICompositionBrush@Composition@UI@Windows@@@Z
    void SetMask(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CThemeShadow@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFlagOnPopupChild@CThemeShadow@@AEAAXPEAVCDependencyObject@@@Z
    void SetDirtyFlagOnPopupChild(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThemeShadow@@EEAA@XZ
    virtual ~CThemeShadow();
};
