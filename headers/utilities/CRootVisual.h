#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CRootVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsHandlerWhenNotLive@CRootVisual@@UEBA_NHW4KnownEventIndex@@@Z
    virtual bool AllowsHandlerWhenNotLive(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRootVisual@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssociatedPopupRootNoRef@CRootVisual@@QEBAPEAVCPopupRoot@@XZ
    CPopupRoot * GetAssociatedPopupRootNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CRootVisual@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootScrollViewerOrCanvas@CRootVisual@@QEAAPEAVCUIElement@@XZ
    CUIElement * GetRootScrollViewerOrCanvas();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRootVisual@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CRootVisual@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CRootVisual@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CRootVisual@@QEAAJI@Z
    long SetBackgroundColor(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CRootVisual@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CRootVisual@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CRootVisual@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CRootVisual@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutClip@CRootVisual@@MEAAJ_N@Z
    virtual long UpdateLayoutClip(bool);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRootVisual@@EEAA@XZ
    virtual ~CRootVisual();
};
