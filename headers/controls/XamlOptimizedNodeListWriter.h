#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace XamlOptimizedNodeList {
class XamlOptimizedNodeListWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@XamlOptimizedNodeListWriter@XamlOptimizedNodeList@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@XamlOptimizedNodeListWriter@XamlOptimizedNodeList@@UEAAJXZ
    virtual long WriteEndConditionalScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@XamlOptimizedNodeListWriter@XamlOptimizedNodeList@@UEAAJXZ
    virtual long WriteEndMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@XamlOptimizedNodeListWriter@XamlOptimizedNodeList@@UEAAJXZ
    virtual long WriteEndObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlOptimizedNodeListWriter@XamlOptimizedNodeList@@UEAA@XZ
    virtual ~XamlOptimizedNodeListWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCommonInfo@XamlOptimizedNodeListWriter@XamlOptimizedNodeList@@AEAAXW4XamlNodeType@@W4NodeListFlags@2@@Z
    void WriteCommonInfo(int, int);
};
} // namespace XamlOptimizedNodeList
