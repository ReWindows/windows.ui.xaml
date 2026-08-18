#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class xstring_ptr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneBuffer@xstring_ptr@@SAJPEBGIPEAV1@@Z
    static long CloneBuffer(unsigned short const *, unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneBuffer@xstring_ptr@@SAJPEBGPEAV1@@Z
    static long CloneBuffer(unsigned short const *, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneBufferTrimWhitespace@xstring_ptr@@SAJPEBGIPEAV1@@Z
    static long CloneBufferTrimWhitespace(unsigned short const *, unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneRuntimeStringHandle@xstring_ptr@@SAJPEAUHSTRING__@@PEAV1@@Z
    static long CloneRuntimeStringHandle(HSTRING__*, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concatenate@xstring_ptr@@SAJAEBVxstring_ptr_view@@I0IPEAV1@@Z
    static long Concatenate(xstring_ptr_view const &, unsigned int, xstring_ptr_view const &, unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUInt32@xstring_ptr@@SAJIPEAV1@@Z
    static long CreateFromUInt32(unsigned int, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@xstring_ptr@@SA?AV1@AEBUxencoded_string_ptr@@@Z
    static xstring_ptr Decode(xencoded_string_ptr const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0xstring_ptr@@QEAA@AEBV0@@Z
    xstring_ptr(xstring_ptr const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0xstring_ptr@@QEAA@XZ
    xstring_ptr();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0xstring_ptr@@QEAA@$$QEAV0@@Z
    xstring_ptr(xstring_ptr &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1xstring_ptr@@QEAA@XZ
    ~xstring_ptr();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneNonEphemeralEncodedStorage@xstring_ptr@@AEBA?AUxencoded_string_ptr@@XZ
    xencoded_string_ptr CloneNonEphemeralEncodedStorage() const;
};
