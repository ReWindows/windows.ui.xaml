#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CWinPlatformUtilities {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUILanguageRTL@CWinPlatformUtilities@@UEAAIXZ
    virtual unsigned int IsUILanguageRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xswprintf_s@CWinPlatformUtilities@@UEAAIPEAGIPEBGZZ
    virtual unsigned int Xswprintf_s(unsigned short *, unsigned int, unsigned short const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getInstance@CWinPlatformUtilities@@SAPEAV1@XZ
    static CWinPlatformUtilities * getInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?vXswprintf_s@CWinPlatformUtilities@@UEAAIPEAGIPEBGPEAD@Z
    virtual unsigned int vXswprintf_s(unsigned short *, unsigned int, unsigned short const *, char *);
};
