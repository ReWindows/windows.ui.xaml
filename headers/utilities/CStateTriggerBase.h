#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CStateTriggerBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStateTriggerBase@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CStateTriggerBase@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CStateTriggerBase@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStateTriggerBase@@UEAA@XZ
    virtual ~CStateTriggerBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStateTriggerBase@@IEAA@PEAVCCoreServices@@@Z
    CStateTriggerBase(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateStateTriggers@CStateTriggerBase@@IEAAJXZ
    long EvaluateStateTriggers();
};
