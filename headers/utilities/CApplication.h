#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CApplication@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CApplication@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CApplication@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBaseUri@CApplication@@SAJIPEBGPEAPEAUIPALUri@@@Z
    static long CreateBaseUri(unsigned int, unsigned short const *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CApplication@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireExitEvent@CApplication@@QEAAXXZ
    void FireExitEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireExitedEvent@CApplication@@QEAAXXZ
    void FireExitedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireExitingEvent@CApplication@@QEAAXXZ
    void FireExitingEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireStartupEvent@CApplication@@QEAAXXZ
    void FireStartupEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationHighContrastAdjustment@CApplication@@SAJPEAVCCoreServices@@PEAW4ApplicationHighContrastAdjustment@DirectUI@@@Z
    static long GetApplicationHighContrastAdjustment(CCoreServices *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CApplication@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CApplication@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadComponent@CApplication@@SAJPEAVCCoreServices@@PEAVCDependencyObject@@PEAUIPALUri@@@Z
    static long LoadComponent(CCoreServices *, CDependencyObject *, IPALUri *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastAdjustmentChanged@CApplication@@QEAAJXZ
    long OnHighContrastAdjustmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CApplication@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CApplication@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CApplication@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplication@@EEAA@XZ
    virtual ~CApplication();
};
