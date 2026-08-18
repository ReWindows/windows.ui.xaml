#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CDispatcherTimer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CDispatcherTimer@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStateImpl@CDispatcherTimer@@UEAAJAEBUComputeStateParams@@AEAU2@PEAI_N2@Z
    virtual long ComputeStateImpl(ComputeStateParams const &, ComputeStateParams &, unsigned int *, bool, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?ControlsManagedPeerLifetime@CDispatcherTimer@@UEAAIXZ
    virtual unsigned int ControlsManagedPeerLifetime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDispatcherTimer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTickEvent@CDispatcherTimer@@QEAAXXZ
    void FireTickEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDispatcherTimer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInActiveState@CDispatcherTimer@@UEBAIXZ
    virtual unsigned int IsInActiveState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CDispatcherTimer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CDispatcherTimer@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CDispatcherTimer@@QEAAJXZ
    long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CDispatcherTimer@@QEAAJXZ
    long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkComplete@CDispatcherTimer@@QEAAJXZ
    long WorkComplete();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDispatcherTimer@@MEAA@XZ
    virtual ~CDispatcherTimer();
};
