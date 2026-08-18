#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class CSwapChainPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CSwapChainPanel@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSwapChainPanel@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInRenderOrder@CSwapChainPanel@@UEAAXPEAPEAPEAVCUIElement@@PEAI@Z
    virtual void GetChildrenInRenderOrder(CUIElement * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionScaleX@CSwapChainPanel@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetCompositionScaleX(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionScaleY@CSwapChainPanel@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetCompositionScaleY(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSwapChainPanel@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSwapChain@CSwapChainPanel@@QEBAIXZ
    unsigned int HasSwapChain() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CSwapChainPanel@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBitmap@CSwapChainPanel@@UEAAJPEAI00PEAPEAX@Z
    virtual long LockBitmap(unsigned int *, unsigned int *, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuRequested@CSwapChainPanel@@QEAAJXZ
    long OnContextMenuRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CSwapChainPanel@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@CSwapChainPanel@@QEAAJPEAUIUnknown@@@Z
    long SetSwapChain(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSwapChainPanel@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockBitmap@CSwapChainPanel@@UEAAJXZ
    virtual long UnlockBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmap@CSwapChainPanel@@UEAAJXZ
    virtual long UpdateBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionScale@CSwapChainPanel@@QEAAJAEBVCMILMatrix@@I@Z
    long UpdateCompositionScale(CMILMatrix const &, unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSwapChainPanel@@IEAA@PEAVCCoreServices@@@Z
    CSwapChainPanel(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CSwapChainPanel@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CSwapChainPanel@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CSwapChainPanel@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSwapChainPanel@@MEAA@XZ
    virtual ~CSwapChainPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCompositionScale@CSwapChainPanel@@AEAAJPEAM0@Z
    long ComputeCompositionScale(float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainElement@CSwapChainPanel@@AEAAJXZ
    long CreateSwapChainElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHWRealization@CSwapChainPanel@@AEAAJPEAPEAVHWRealization@@@Z
    long EnsureHWRealization(HWRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionScaleImpl@CSwapChainPanel@@AEAAJW4KnownPropertyIndex@@PEAVCValue@@@Z
    long GetCompositionScaleImpl(int, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCompositionScaleChangedEvent@CSwapChainPanel@@AEAAJXZ
    long RaiseCompositionScaleChangedEvent();
};
