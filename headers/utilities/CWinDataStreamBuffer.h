#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CWinDataStreamBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CWinDataStreamBuffer@@UEAAJPEAPEAUIPALStream@@@Z
    virtual long CreateStream(IPALStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportFastSeek@CWinDataStreamBuffer@@UEAAIXZ
    virtual unsigned int SupportFastSeek();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CWinDataStreamBuffer@@UEAAJPEBXIH@Z
    virtual long Write(void const *, unsigned int, int);
};
