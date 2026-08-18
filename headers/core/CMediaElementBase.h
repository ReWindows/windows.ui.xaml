#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CMediaElementBase {
public:
    class CMediaBackgroundBrush;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrush@CMediaElementBase@@UEAAJXZ
    virtual long EnsureBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CMediaElementBase@@UEAAMXZ
    virtual float GetActualHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CMediaElementBase@@UEAAMXZ
    virtual float GetActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CMediaElementBase@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoFrameProvider@CMediaElementBase@@UEAAPEAUIXcpVideoFrameProvider@@XZ
    virtual IXcpVideoFrameProvider * GetVideoFrameProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullScreen@CMediaElementBase@@UEBAIXZ
    virtual unsigned int IsFullScreen() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullWindow@CMediaElementBase@@UEBAIXZ
    virtual unsigned int IsFullWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowPosterImage@CMediaElementBase@@QEAAIXZ
    unsigned int ShouldShowPosterImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CMediaElementBase@@UEAAJXZ
    virtual long UpdateState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CMediaElementBase@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaElementBase@@IEAA@PEAVCCoreServices@@@Z
    CMediaElementBase(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CMediaElementBase@@MEAAJAEAUXRECTF_WH@@@Z
    virtual long GetNaturalBounds(XRECTF_WH &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CMediaElementBase@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCreateBackgroundBrush@CMediaElementBase@@MEAAIXZ
    virtual unsigned int ShouldCreateBackgroundBrush();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaElementBase@@MEAA@XZ
    virtual ~CMediaElementBase();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledOtherDimension@CMediaElementBase@@CAMMMM@Z
    static float GetScaledOtherDimension(float, float, float);
};
