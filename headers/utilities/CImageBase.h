#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CImageBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CImageBase@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrush@CImageBase@@UEAAJXZ
    virtual long EnsureBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CImageBase@@UEAAJI@Z
    virtual long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CImageBase@@UEAAJXZ
    virtual long FireImageOpened();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidMediaSource@CImageBase@@UEAA_NXZ
    virtual bool HasValidMediaSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CImageBase@@UEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMedia@CImageBase@@MEAAXXZ
    virtual void CloseMedia();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CImageBase@@MEAAJAEAUXRECTF_WH@@@Z
    virtual long GetNaturalBounds(XRECTF_WH &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerImpl@CImageBase@@MEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMeasure@CImageBase@@IEAAJXZ
    long UpdateMeasure();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageBase@@MEAA@XZ
    virtual ~CImageBase();
};
