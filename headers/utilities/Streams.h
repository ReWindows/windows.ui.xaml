#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace Windows::Storage {
class Streams {
public:
    class DefaultMarshaler;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CBuffer_Allocate@Streams@Storage@Windows@@YAJIPEAPEAUIBuffer@123@@Z
    long CBuffer_Allocate(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CBuffer_CreateOverCallerManagedBuffer@Streams@Storage@Windows@@YAJIIPEAEPEAPEAUIBuffer@123@@Z
    long CBuffer_CreateOverCallerManagedBuffer(unsigned int, unsigned int, unsigned char *, WindissectOpaque * *);
};
} // namespace Windows::Storage
