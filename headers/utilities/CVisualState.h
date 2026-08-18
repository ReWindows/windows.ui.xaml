#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class CVisualState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVisualState@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableLegacyEnterLeaveBehavior@CVisualState@@QEAAXXZ
    void DisableLegacyEnterLeaveBehavior();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CVisualState@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CVisualState@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboard@CVisualState@@QEAAJPEAPEAVCStoryboard@@@Z
    long GetStoryboard(CStoryboard * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CVisualState@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVisualState@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CVisualState@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateToken@CVisualState@@QEAA?AVVisualStateToken@@XZ
    VisualStateToken GetVisualStateToken();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CVisualState@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CVisualState@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CVisualState@@UEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterName@CVisualState@@UEAAJPEAVCDependencyObject@@I@Z
    virtual long RegisterName(CDependencyObject *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemporaryNamescopeParent@CVisualState@@QEAAXPEAVCDependencyObject@@@Z
    void SetTemporaryNamescopeParent(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Storyboard@CVisualState@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Storyboard(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualState@@UEAA@XZ
    virtual ~CVisualState();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplatedParentImpl@CVisualState@@MEAAXPEAVCDependencyObject@@@Z
    virtual void SetTemplatedParentImpl(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeferredItemFromTemplateContent@CVisualState@@AEAAJPEAVCTemplateContent@@PEAPEAVCDependencyObject@@@Z
    long CreateDeferredItemFromTemplateContent(CTemplateContent *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentAndEnterDO@CVisualState@@AEAAXPEAVCDependencyObject@@@Z
    void ParentAndEnterDO(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDelayCreateLegacyPropertySetters@CVisualState@@AEAAJXZ
    long TryDelayCreateLegacyPropertySetters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDelayCreateLegacyStoryboard@CVisualState@@AEAAJXZ
    long TryDelayCreateLegacyStoryboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentAndLeaveDO@CVisualState@@AEAAXPEAVCDependencyObject@@@Z
    void UnparentAndLeaveDO(CDependencyObject *);
};
