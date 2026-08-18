#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class xstring_ptr_view {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@xstring_ptr_view@@QEBAHAEBV1@W4xstrCompareBehavior@@@Z
    int Compare(xstring_ptr_view const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@xstring_ptr_view@@QEBAHAEBV1@IIW4xstrCompareBehavior@@@Z
    int Compare(xstring_ptr_view const &, unsigned int, unsigned int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndsWith@xstring_ptr_view@@QEBAIAEBV1@W4xstrCompareBehavior@@@Z
    unsigned int EndsWith(xstring_ptr_view const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@xstring_ptr_view@@QEBA_NPEBGIW4xstrCompareBehavior@@@Z
    bool Equals(unsigned short const *, unsigned int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@xstring_ptr_view@@QEBA_NAEBV1@W4xstrCompareBehavior@@@Z
    bool Equals(xstring_ptr_view const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@xstring_ptr_view@@QEBA_NPEBGW4xstrCompareBehavior@@@Z
    bool Equals(unsigned short const *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@xstring_ptr_view@@QEBAJAEBV1@IW4xstrCompareBehavior@@PEAI@Z
    long Find(xstring_ptr_view const &, unsigned int, int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindChar@xstring_ptr_view@@QEBAIGI@Z
    unsigned int FindChar(unsigned short, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLastChar@xstring_ptr_view@@QEBAIGI@Z
    unsigned int FindLastChar(unsigned short, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@xstring_ptr_view@@QEBAPEBGXZ
    unsigned short const * GetBuffer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@xstring_ptr_view@@QEBAIXZ
    unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHash@xstring_ptr_view@@QEBA_KXZ
    uint64_t GetHash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeBufferCopy@xstring_ptr_view@@QEBAPEAGXZ
    unsigned short * MakeBufferCopy() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Promote@xstring_ptr_view@@QEBAJPEAVxstring_ptr@@@Z
    long Promote(xstring_ptr *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Promote@xstring_ptr_view@@QEBAJPEAVxruntime_string_ptr@@@Z
    long Promote(xruntime_string_ptr *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWith@xstring_ptr_view@@QEBAIAEBV1@W4xstrCompareBehavior@@@Z
    unsigned int StartsWith(xstring_ptr_view const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubString@xstring_ptr_view@@QEBAJIIPEAVxstring_ptr@@@Z
    long SubString(unsigned int, unsigned int, xstring_ptr *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubString@xstring_ptr_view@@QEBAXIIPEAVxephemeral_string_ptr@@@Z
    void SubString(unsigned int, unsigned int, xephemeral_string_ptr *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubString@xstring_ptr_view@@QEBAJIIPEAVxruntime_string_ptr@@@Z
    long SubString(unsigned int, unsigned int, xruntime_string_ptr *) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneEncodedStorage@xstring_ptr_view@@IEBAJIPEAUxencoded_string_ptr@@@Z
    long CloneEncodedStorage(unsigned int, xencoded_string_ptr *) const;
};
