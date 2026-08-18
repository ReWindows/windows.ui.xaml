#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class HWTexture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocalSpaceToTextureSpaceTransform@HWTexture@@QEAAXPEAVCMILMatrix@@@Z
    void AddLocalSpaceToTextureSpaceTransform(CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTextureSpaceToLocalSpaceTransform@HWTexture@@QEAAXPEAVCMILMatrix@@@Z
    void AddTextureSpaceToLocalSpaceTransform(CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HWTexture@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurface@HWTexture@@UEBAPEAVDCompSurface@@XZ
    virtual DCompSurface * GetCompositionSurface() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLOD@HWTexture@@UEAAIXZ
    virtual unsigned int GetMaxLOD();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotifyOnDelete@HWTexture@@UEAAJPEAPEAUCNotifyOnDelete@@@Z
    virtual long GetNotifyOnDelete(CNotifyOnDelete * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasMIPMapChain@HWTexture@@UEAAIXZ
    virtual unsigned int HasMIPMapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceLost@HWTexture@@UEAAIXZ
    virtual unsigned int IsSurfaceLost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtual@HWTexture@@UEAA_NXZ
    virtual bool IsVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@HWTexture@@UEAAJW4XSURFNOTIFY@@IPEAE@Z
    virtual long Notify(int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offer@HWTexture@@UEAAJXZ
    virtual long Offer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reclaim@HWTexture@@UEAAJPEAI@Z
    virtual long Reclaim(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOpaque@HWTexture@@UEAAXI@Z
    virtual void SetIsOpaque(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextureFromSoftware@HWTexture@@UEAAJPEAUIPALSurface@@AEBUXPOINT@@@Z
    virtual long UpdateTextureFromSoftware(IPALSurface *, XPOINT const &);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWTexture@@MEAA@XZ
    virtual ~HWTexture();
};
