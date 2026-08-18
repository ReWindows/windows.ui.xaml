#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CImage@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPCRenderData@CImage@@UEAAXXZ
    virtual void ClearPCRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CImage@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImage@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrush@CImage@@UEAAJXZ
    virtual long EnsureBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageFailed@CImage@@UEAAJI@Z
    virtual long FireImageFailed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireImageOpened@CImage@@UEAAJXZ
    virtual long FireImageOpened();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCastingSource@CImage@@QEAAJPEAPEAUICastingSource@Casting@Media@Windows@@@Z
    long GetCastingSource(::Windows::Media::Casting::ICastingSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlayToSource@CImage@@QEAAJPEAVCValue@@@Z
    long GetPlayToSource(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CImage@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CImage@@UEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@CImage@@UEAAJXZ
    virtual long OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@CImage@@UEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CImage@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceStreamForSharingService@CImage@@QEAAJXZ
    long UpdateSourceStreamForSharingService();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImage@@IEAA@PEAVCCoreServices@@@Z
    CImage(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImage@@MEAA@XZ
    virtual ~CImage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCastingSource@CImage@@AEAAJXZ
    long UpdateCastingSource();
};
