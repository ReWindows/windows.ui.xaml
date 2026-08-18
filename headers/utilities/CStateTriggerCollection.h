#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CStateTriggerCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CStateTriggerCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStateTriggerCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CStateTriggerCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CStateTriggerCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CStateTriggerCollection@@UEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CStateTriggerCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CStateTriggerCollection@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStateTriggerCollection@@UEAA@XZ
    virtual ~CStateTriggerCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTriggerToVariantMap@CStateTriggerCollection@@AEAAJPEAVCDependencyObject@@@Z
    long AddTriggerToVariantMap(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTriggerFromVariantMap@CStateTriggerCollection@@AEAAJPEAVCDependencyObject@@@Z
    long RemoveTriggerFromVariantMap(CDependencyObject *);
};
