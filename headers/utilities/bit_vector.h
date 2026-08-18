#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace containers {
class bit_vector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?empty@bit_vector@containers@@QEBA_NXZ
    bool empty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?erase@bit_vector@containers@@QEAAX_K@Z
    void erase(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_back@bit_vector@containers@@QEAAX_N@Z
    void push_back(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set@bit_vector@containers@@QEAAX_K_N@Z
    void set(uint64_t, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?alloc_external_uninitialized@bit_vector@containers@@CAPEAUexternal_storage@12@_K@Z
    static WindissectOpaque * alloc_external_uninitialized(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?destroy@bit_vector@containers@@AEAAXXZ
    void destroy();
};
} // namespace containers
