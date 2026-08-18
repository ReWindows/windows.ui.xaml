#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 39 member(s).
class CTextSelectionGripper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndAdjustStrokeColor@CTextSelectionGripper@@QEAAJXZ
    long CheckAndAdjustStrokeColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextSelectionGripper@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetX@CTextSelectionGripper@@UEAAMXZ
    virtual float GetActualOffsetX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetY@CTextSelectionGripper@@UEAAMXZ
    virtual float GetActualOffsetY();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextSelectionGripper@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CTextSelectionGripper@@QEAAJI@Z
    long Hide(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGripper@CTextSelectionGripper@@QEAAJPEAVTextSelectionManager@@@Z
    long InitializeGripper(TextSelectionManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CTextSelectionGripper@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CTextSelectionGripper@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CTextSelectionGripper@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CTextSelectionGripper@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CTextSelectionGripper@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGripperPointerCapture@CTextSelectionGripper@@QEAAJXZ
    long ReleaseGripperPointerCapture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentDirty@CTextSelectionGripper@@QEAAXW4Value@DirtyFlags@@@Z
    void SetContentDirty(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CTextSelectionGripper@@QEAAXPEAVCUIElement@@I@Z
    void SetOwner(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CTextSelectionGripper@@QEAAJI@Z
    long Show(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterWorldCoordinate@CTextSelectionGripper@@QEAAJAEBUXPOINTF@@M@Z
    long UpdateCenterWorldCoordinate(XPOINTF const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibility@CTextSelectionGripper@@UEAAJXZ
    virtual long UpdateVisibility();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndRepositionShapesForPoleHeightChange@CTextSelectionGripper@@IEAAJM@Z
    long CheckAndRepositionShapesForPoleHeightChange(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFadeStoryboard@CTextSelectionGripper@@KAJPEAPEAVCStoryboard@@PEAVCCoreServices@@PEAVCDependencyObject@@PEBVCDependencyProperty@@MI@Z
    static long CreateFadeStoryboard(CStoryboard * *, CCoreServices *, CDependencyObject *, CDependencyProperty const *, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CTextSelectionGripper@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationModeCore@CTextSelectionGripper@@MEBA?AW4ManipulationModes@DirectUI@@XZ
    virtual int GetManipulationModeCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideImmediately@CTextSelectionGripper@@IEAAJXZ
    long HideImmediately();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CTextSelectionGripper@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CTextSelectionGripper@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CTextSelectionGripper@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideAnimationComplete@CTextSelectionGripper@@KAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnHideAnimationComplete(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowAnimationComplete@CTextSelectionGripper@@KAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnShowAnimationComplete(CDependencyObject *, CEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationModeCore@CTextSelectionGripper@@MEAAJW4ManipulationModes@DirectUI@@@Z
    virtual long SetManipulationModeCore(int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextSelectionGripper@@AEAA@PEAVCCoreServices@@@Z
    CTextSelectionGripper(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToLocalCoordinate@CTextSelectionGripper@@AEAAJAEBUXPOINTF@@PEAU2@@Z
    long ConvertToLocalCoordinate(XPOINTF const &, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToWorldCoordinate@CTextSelectionGripper@@AEAAJAEBUXPOINTF@@PEAU2@@Z
    long ConvertToWorldCoordinate(XPOINTF const &, XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGripperClipped@CTextSelectionGripper@@AEAAIXZ
    unsigned int IsGripperClipped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerReleasedWorker@CTextSelectionGripper@@AEAAJIPEAI@Z
    long PointerReleasedWorker(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCenterLocalCoordinate@CTextSelectionGripper@@AEAAXAEBUXPOINTF@@@Z
    void UpdateCenterLocalCoordinate(XPOINTF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateParent@CTextSelectionGripper@@AEAAJXZ
    long UpdateParent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextSelectionGripper@@EEAA@XZ
    virtual ~CTextSelectionGripper();
};
