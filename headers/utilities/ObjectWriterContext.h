#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class ObjectWriterContext {
public:
    class AmbientValue;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTargetTypeCaches@ObjectWriterContext@@QEAAJXZ
    long EnsureTargetTypeCaches();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BaseUri@ObjectWriterContext@@QEAA?AV?$xref_ptr@UIPALUri@@@@XZ
    WindissectOpaque get_BaseUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootNamescope@ObjectWriterContext@@QEBA?AV?$xref_ptr@VINameScope@@@@XZ
    WindissectOpaque get_RootNamescope() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XamlResourceUri@ObjectWriterContext@@QEAA?AV?$xref_ptr@UIPALUri@@@@XZ
    WindissectOpaque get_XamlResourceUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_BaseUri@ObjectWriterContext@@QEAAXV?$xref_ptr@UIPALUri@@@@@Z
    void set_BaseUri(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_RootNamescope@ObjectWriterContext@@QEAAXV?$xref_ptr@VINameScope@@@@@Z
    void set_RootNamescope(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_XamlResourceUri@ObjectWriterContext@@QEAAXV?$xref_ptr@UIPALUri@@@@@Z
    void set_XamlResourceUri(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_XbfHash@ObjectWriterContext@@QEAAXVxstring_ptr@@@Z
    void set_XbfHash(xstring_ptr);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriterContext@@UEAA@XZ
    virtual ~ObjectWriterContext();
};
