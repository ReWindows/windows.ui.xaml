#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class ObjectWriterFrame {
public:
    class FrameLegacyStorage;
    class FrameOverflowStorage;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFrameLegacyStorage@ObjectWriterFrame@@QEAAXXZ
    void EnsureFrameLegacyStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOverflowStorage@ObjectWriterFrame@@QEAAXXZ
    void EnsureOverflowStorage();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectWriterFrame@@QEAA@AEBV0@@Z
    ObjectWriterFrame(ObjectWriterFrame const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopConditionalScopeNode@ObjectWriterFrame@@QEAAXXZ
    void PopConditionalScopeNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConditionalScopeNode@ObjectWriterFrame@@QEAAX_N@Z
    void PushConditionalScopeNode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?clear_Collection@ObjectWriterFrame@@QEAAXXZ
    void clear_Collection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_CompressedStack@ObjectWriterFrame@@QEAAXXZ
    void ensure_CompressedStack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?exists_CompressedStack@ObjectWriterFrame@@QEBA_NXZ
    bool exists_CompressedStack() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?exists_ReplacementPropertyValues@ObjectWriterFrame@@QEBA_NXZ
    bool exists_ReplacementPropertyValues() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?exists_WeakRefInstance@ObjectWriterFrame@@QEBA_NXZ
    bool exists_WeakRefInstance() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasConditionalScopeToSkip@ObjectWriterFrame@@QEBA_N_N@Z
    bool get_HasConditionalScopeToSkip(bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsObjectFromMember@ObjectWriterFrame@@QEBA_NXZ
    bool get_IsObjectFromMember() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_IsObjectFromMember@ObjectWriterFrame@@QEAAX_N@Z
    void set_IsObjectFromMember(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriterFrame@@QEAA@XZ
    ~ObjectWriterFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDirectives@ObjectWriterFrame@@AEAAXXZ
    void EnsureDirectives();
};
