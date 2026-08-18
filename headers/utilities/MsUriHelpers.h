#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class MsUriHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrackMsResourceUri@MsUriHelpers@@YAJPEBUIPALUri@@PEAVxstring_ptr@@11PEAI@Z
    long CrackMsResourceUri(IPALUri const *, xstring_ptr *, xstring_ptr *, xstring_ptr *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMsResourceUri@MsUriHelpers@@YAJPEBUIPALUri@@PEAI@Z
    long IsMsResourceUri(IPALUri const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMsResourceUri@MsUriHelpers@@YAIAEBVxstring_ptr_view@@@Z
    unsigned int IsMsResourceUri(xstring_ptr_view const &);
};
