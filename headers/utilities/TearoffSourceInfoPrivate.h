#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class TearoffSourceInfoPrivate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TearoffSourceInfoPrivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TearoffSourceInfoPrivate@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TearoffSourceInfoPrivate@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TearoffSourceInfoPrivate@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TearoffSourceInfoPrivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TearoffSourceInfoPrivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Column@TearoffSourceInfoPrivate@@UEAAJPEAH@Z
    virtual long get_Column(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Line@TearoffSourceInfoPrivate@@UEAAJPEAH@Z
    virtual long get_Line(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParseUri@TearoffSourceInfoPrivate@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ParseUri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XbfHash@TearoffSourceInfoPrivate@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_XbfHash(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Column@TearoffSourceInfoPrivate@@UEAAJH@Z
    virtual long put_Column(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Line@TearoffSourceInfoPrivate@@UEAAJH@Z
    virtual long put_Line(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParseUri@TearoffSourceInfoPrivate@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ParseUri(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XbfHash@TearoffSourceInfoPrivate@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_XbfHash(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TearoffSourceInfoPrivate@@QEAA@XZ
    ~TearoffSourceInfoPrivate();
};
