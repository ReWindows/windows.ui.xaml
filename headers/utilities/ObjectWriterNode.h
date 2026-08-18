#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class ObjectWriterNode {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectWriterNode@@QEAA@XZ
    ObjectWriterNode();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectWriterNode@@QEAA@AEBV0@@Z
    ObjectWriterNode(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresNewScope@ObjectWriterNode@@QEBA?B_NXZ
    bool RequiresNewScope() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresScopeToEnd@ObjectWriterNode@@QEBA?B_NXZ
    bool RequiresScopeToEnd() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriterNode@@QEAA@XZ
    ~ObjectWriterNode();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectWriterNode@@IEAA@W4ObjectWriterNodeType@@AEBVXamlLineInfo@@@Z
    ObjectWriterNode(int, XamlLineInfo const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectWriterNode@@IEAA@W4ObjectWriterNodeType@@AEBVXamlLineInfo@@AEBVxstring_ptr@@@Z
    ObjectWriterNode(int, XamlLineInfo const &, xstring_ptr const &);
};
