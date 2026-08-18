#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class AsyncDecodeResponse {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncDecodeResponse@@QEAA@JV?$xref_ptr@VOfferableSoftwareBitmap@@@@@Z
    AsyncDecodeResponse(long, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecodingResult@AsyncDecodeResponse@@UEBAJXZ
    virtual long GetDecodingResult() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@AsyncDecodeResponse@@UEBAAEBV?$xref_ptr@VOfferableSoftwareBitmap@@@@XZ
    virtual WindissectOpaque const & GetSurface() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncDecodeResponse@@UEAA@XZ
    virtual ~AsyncDecodeResponse();
};
