#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 34 member(s).
class CSurfaceImageSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@CSurfaceImageSource@@QEAAJPEBUXRECT_WH@@AEBU_GUID@@PEAPEAUIUnknown@@PEAUXPOINT@@@Z
    long BeginDraw(XRECT_WH const *, _GUID const &, IUnknown * *, XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithD2D@CSurfaceImageSource@@QEAAJPEBUXRECT_WH@@AEBU_GUID@@IPEAPEAUIUnknown@@PEAUXPOINT@@@Z
    long BeginDrawWithD2D(XRECT_WH const *, _GUID const &, unsigned int, IUnknown * *, XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForLostHardwareResources@CSurfaceImageSource@@UEAA_NXZ
    virtual bool CheckForLostHardwareResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CSurfaceImageSource@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@CSurfaceImageSource@@QEAAJXZ
    long EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrawWithD2D@CSurfaceImageSource@@QEAAJXZ
    long EndDrawWithD2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAndUpdateHardwareResources@CSurfaceImageSource@@UEAAJPEAVHWTextureManager@@PEAVCWindowRenderTarget@@PEAVSurfaceCache@@@Z
    virtual long EnsureAndUpdateHardwareResources(HWTextureManager *, CWindowRenderTarget *, SurfaceCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHeight@CSurfaceImageSource@@UEBAIXZ
    virtual unsigned int GetHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSurfaceImageSource@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@CSurfaceImageSource@@UEBAIXZ
    virtual unsigned int GetWidth() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasDimensions@CSurfaceImageSource@@UEAAIXZ
    virtual unsigned int HasDimensions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSurfaceImageSource@@QEAAJHHI@Z
    long Initialize(int, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CSurfaceImageSource@@UEAAIXZ
    virtual unsigned int IsOpaque();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeDraw@CSurfaceImageSource@@QEAAJI@Z
    long ResumeDraw(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevice@CSurfaceImageSource@@QEAAJPEAUIUnknown@@@Z
    long SetDevice(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceWithD2D@CSurfaceImageSource@@QEAAJPEAUIUnknown@@@Z
    long SetDeviceWithD2D(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendDraw@CSurfaceImageSource@@QEAAJI@Z
    long SuspendDraw(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSurfaceImageSource@@UEAA@XZ
    virtual ~CSurfaceImageSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawCommon@CSurfaceImageSource@@IEAAJPEBUXRECT_WH@@AEBU_GUID@@PEAPEAUIUnknown@@PEAUXPOINT@@@Z
    long BeginDrawCommon(XRECT_WH const *, _GUID const &, IUnknown * *, XPOINT *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSurfaceImageSource@@IEAA@PEAVCCoreServices@@@Z
    CSurfaceImageSource(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrawCommon@CSurfaceImageSource@@IEAAJXZ
    long EndDrawCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMultiThreadedDevice@CSurfaceImageSource@@IEBAJXZ
    long EnsureMultiThreadedDevice() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSurfaceNotOffered@CSurfaceImageSource@@IEBAJXZ
    long EnsureSurfaceNotOffered() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtual@CSurfaceImageSource@@MEAAIXZ
    virtual unsigned int IsVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreUpdateVirtual@CSurfaceImageSource@@MEAAJPEBV?$xvector@UXRECT_WH@@@@@Z
    virtual long PreUpdateVirtual(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuirkedBeginDrawUsingScratchSurface@CSurfaceImageSource@@IEAAJPEBUXRECT_WH@@PEAUIUnknown@@PEAPEAU3@PEAUXPOINT@@@Z
    long QuirkedBeginDrawUsingScratchSurface(XRECT_WH const *, IUnknown *, IUnknown * *, XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuirkedEndDrawUsingScratchSurface@CSurfaceImageSource@@IEAAJXZ
    long QuirkedEndDrawUsingScratchSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCleanupOnLeave@CSurfaceImageSource@@MEAAXXZ
    virtual void RegisterForCleanupOnLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForCleanupOnEnter@CSurfaceImageSource@@MEAAXXZ
    virtual void UnregisterForCleanupOnEnter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceInterfaceUsage@CSurfaceImageSource@@AEAAJW4InterfaceUsed@1@@Z
    long EnforceInterfaceUsage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObtainSurfaceFactory@CSurfaceImageSource@@AEAAJPEAUIUnknown@@PEAPEAVDCompSurfaceFactory@@@Z
    long ObtainSurfaceFactory(IUnknown *, DCompSurfaceFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateUpdateRect@CSurfaceImageSource@@AEAAJPEBUXRECT_WH@@@Z
    long ValidateUpdateRect(XRECT_WH const *);
};
