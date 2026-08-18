#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class RenderTargetBitmapPixelBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@RenderTargetBitmapPixelBuffer@DirectUI@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@RenderTargetBitmapPixelBuffer@DirectUI@@QEAAXXZ
    void ReleaseBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@RenderTargetBitmapPixelBuffer@DirectUI@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@RenderTargetBitmapPixelBuffer@DirectUI@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@RenderTargetBitmapPixelBuffer@DirectUI@@UEAAJI@Z
    virtual long put_Length(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RenderTargetBitmapPixelBuffer@DirectUI@@UEAA@XZ
    virtual ~RenderTargetBitmapPixelBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RenderTargetBitmapPixelBuffer@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RenderTargetBitmapPixelBuffer@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RenderTargetBitmapPixelBuffer@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
