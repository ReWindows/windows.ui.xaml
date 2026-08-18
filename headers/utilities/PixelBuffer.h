#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class PixelBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Buffer@PixelBuffer@DirectUI@@UEAAJPEAPEAE@Z
    virtual long Buffer(unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBuffer@PixelBuffer@DirectUI@@QEAAJIPEAVWriteableBitmap@2@@Z
    long InitializeBuffer(unsigned int, ::DirectUI::WriteableBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@PixelBuffer@DirectUI@@QEAAXXZ
    void ReleaseBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capacity@PixelBuffer@DirectUI@@UEAAJPEAI@Z
    virtual long get_Capacity(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Length@PixelBuffer@DirectUI@@UEAAJPEAI@Z
    virtual long get_Length(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Length@PixelBuffer@DirectUI@@UEAAJI@Z
    virtual long put_Length(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PixelBuffer@DirectUI@@UEAA@XZ
    virtual ~PixelBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PixelBuffer@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PixelBuffer@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PixelBuffer@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
