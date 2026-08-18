#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class TypeNameHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamespace@TypeNameHelper@@SAJPEBGPEAPEAG@Z
    static long GetNamespace(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrameworkNamespace@TypeNameHelper@@SAJPEBGPEAI@Z
    static long IsFrameworkNamespace(unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseAssemblyQualifiedTypeName@TypeNameHelper@@SAJAEBVxstring_ptr@@PEAV2@1@Z
    static long ParseAssemblyQualifiedTypeName(xstring_ptr const &, xstring_ptr *, xstring_ptr *);
};
