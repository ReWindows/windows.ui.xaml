#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class XamlOptimizedNodeList {
public:
    class XamlOptimizedNodeListReader;
    class XamlOptimizedNodeListWriter;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlOptimizedNodeList@@QEAA@XZ
    ~XamlOptimizedNodeList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@XamlOptimizedNodeList@@IEAAXAEBVxstring_ptr@@@Z
    void AddString(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read7BitEncodedInt@XamlOptimizedNodeList@@IEBAIAEAI@Z
    unsigned int Read7BitEncodedInt(unsigned int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStringAt@XamlOptimizedNodeList@@IEBA?AVxstring_ptr@@AEAI@Z
    xstring_ptr ReadStringAt(unsigned int &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write7BitEncodedInt@XamlOptimizedNodeList@@IEAAXI_N@Z
    void Write7BitEncodedInt(unsigned int, bool);
};
