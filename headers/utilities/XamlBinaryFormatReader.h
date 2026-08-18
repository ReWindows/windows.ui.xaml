#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class XamlBinaryFormatReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentNode@XamlBinaryFormatReader@@UEAAAEBVXamlNode@@XZ
    virtual XamlNode const & CurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XamlBinaryFormatReader@@QEAAJPEAUIPALStream@@@Z
    long Initialize(IPALStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@XamlBinaryFormatReader@@UEAAJXZ
    virtual long Read();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NextIndex@XamlBinaryFormatReader@@UEAAJPEAI@Z
    virtual long get_NextIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_NextIndex@XamlBinaryFormatReader@@UEAAJI@Z
    virtual long set_NextIndex(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryFormatReader@@UEAA@XZ
    virtual ~XamlBinaryFormatReader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAddNamespaceNode@XamlBinaryFormatReader@@AEAAJXZ
    long ReadAddNamespaceNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromNodeStreamBuffer@XamlBinaryFormatReader@@AEAAJPEAEI@Z
    long ReadFromNodeStreamBuffer(unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLineInfoAbsolute@XamlBinaryFormatReader@@AEAAJXZ
    long ReadLineInfoAbsolute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLineInfoDelta@XamlBinaryFormatReader@@AEAAJXZ
    long ReadLineInfoDelta();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPersistedString@XamlBinaryFormatReader@@AEAAJPEAVxstring_ptr@@@Z
    long ReadPersistedString(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStartMemberNode@XamlBinaryFormatReader@@AEAAJXZ
    long ReadStartMemberNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStartObjectNode@XamlBinaryFormatReader@@AEAAJXZ
    long ReadStartObjectNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTextValueNode@XamlBinaryFormatReader@@AEAAJXZ
    long ReadTextValueNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadValueNode@XamlBinaryFormatReader@@AEAAJXZ
    long ReadValueNode();
};
