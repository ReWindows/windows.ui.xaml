#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CRichEditGripperChild {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRichEditGripperChild@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CRichEditGripperChild@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetX@CRichEditGripperChild@@UEAAMXZ
    virtual float GetActualOffsetX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetY@CRichEditGripperChild@@UEAAMXZ
    virtual float GetActualOffsetY();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CRichEditGripperChild@@QEAAJXZ
    long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGripper@CRichEditGripperChild@@QEAAJPEAVITextServices@@W4GripperType@CRichEditGripper@@PEAVITextHost2@@PEAVCTextBoxBase@@@Z
    long InitializeGripper(ITextServices *, int, ITextHost2*, CTextBoxBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulation@CRichEditGripperChild@@QEAAJ_N0HHH@Z
    long OnManipulation(bool, bool, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CRichEditGripperChild@@QEAAJI@Z
    long Show(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPole@CRichEditGripperChild@@QEAAJW4PoleMode@CRichEditGripper@@@Z
    long ShowPole(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterWorldCoordinate@CRichEditGripperChild@@QEAAJAEBUXPOINTF@@M@Z
    long UpdateCenterWorldCoordinate(XPOINTF const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeColor@CRichEditGripperChild@@QEAAJXZ
    long UpdateThemeColor();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRichEditGripperChild@@AEAA@PEAVCCoreServices@@@Z
    CRichEditGripperChild(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndRepositionShapesForPoleHeightChange@CRichEditGripperChild@@AEAAJM@Z
    long CheckAndRepositionShapesForPoleHeightChange(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentDirty@CRichEditGripperChild@@AEAAXW4Value@DirtyFlags@@@Z
    void SetContentDirty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterLocalCoordinate@CRichEditGripperChild@@AEAAXAEBUXPOINTF@@@Z
    void UpdateCenterLocalCoordinate(XPOINTF const &);
};
