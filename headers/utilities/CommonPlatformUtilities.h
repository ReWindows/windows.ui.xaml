#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CommonPlatformUtilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xstralloc@CommonPlatformUtilities@@UEAAPEAGPEBGI@Z
    virtual unsigned short * Xstralloc(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xstrfree@CommonPlatformUtilities@@UEAAXPEAG@Z
    virtual void Xstrfree(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xstrlen@CommonPlatformUtilities@@UEAAIPEBG@Z
    virtual unsigned int Xstrlen(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xstrncmp@CommonPlatformUtilities@@UEAAHPEBG0I@Z
    virtual int Xstrncmp(unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xstrncmpi@CommonPlatformUtilities@@UEAAHPEBG0I@Z
    virtual int Xstrncmpi(unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Xstrncpy@CommonPlatformUtilities@@UEAAPEAXPEAGPEBGI@Z
    virtual void * Xstrncpy(unsigned short *, unsigned short const *, unsigned int);
};
