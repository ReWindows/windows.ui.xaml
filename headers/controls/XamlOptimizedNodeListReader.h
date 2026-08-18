#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace XamlOptimizedNodeList {
class XamlOptimizedNodeListReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentNode@XamlOptimizedNodeListReader@XamlOptimizedNodeList@@UEAAAEBVXamlNode@@XZ
    virtual XamlNode const & CurrentNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@XamlOptimizedNodeListReader@XamlOptimizedNodeList@@UEAAJXZ
    virtual long Read();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NextIndex@XamlOptimizedNodeListReader@XamlOptimizedNodeList@@UEAAJPEAI@Z
    virtual long get_NextIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_NextIndex@XamlOptimizedNodeListReader@XamlOptimizedNodeList@@UEAAJI@Z
    virtual long set_NextIndex(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlOptimizedNodeListReader@XamlOptimizedNodeList@@UEAA@XZ
    virtual ~XamlOptimizedNodeListReader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLineInfo@XamlOptimizedNodeListReader@XamlOptimizedNodeList@@AEAAXXZ
    void ReadLineInfo();
};
} // namespace XamlOptimizedNodeList
