#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CustomWriterManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStreamOffsetToken@CustomWriterManager@@UEAAJPEAVStreamOffsetToken@@@Z
    virtual long CreateStreamOffsetToken(StreamOffsetToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CustomWriterManager@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllowProcessStartObjectByCustomWriter@CustomWriterManager@@UEAAX_N@Z
    virtual void SetAllowProcessStartObjectByCustomWriter(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@CustomWriterManager@@QEAAJAEA_N@Z
    long WriteEndConditionalScope(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@CustomWriterManager@@QEAAJAEA_N@Z
    long WriteEndMember(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@CustomWriterManager@@QEAAJAEA_N@Z
    long WriteEndObject(bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomWriterManager@@QEAA@XZ
    ~CustomWriterManager();
};
