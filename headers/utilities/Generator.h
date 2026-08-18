#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI::ItemContainerGenerator {
class Generator {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateNext@Generator@ItemContainerGenerator@DirectUI@@AEAAJPEAEPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long GenerateNext(unsigned char *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Generator@ItemContainerGenerator@DirectUI@@AEAA@PEAV12@IUGeneratorPosition@Primitives@Controls@Xaml@UI@Windows@@W4GeneratorDirection@45678@E@Z
    Generator(::DirectUI::ItemContainerGenerator *, unsigned int, ::Windows::UI::Xaml::Controls::Primitives::GeneratorPosition, int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMapChanged@Generator@ItemContainerGenerator@DirectUI@@AEAAXPEAVItemBlock@23@HH0HH@Z
    void OnMapChanged(WindissectOpaque *, int, int, WindissectOpaque *, int, int);
};
} // namespace DirectUI::ItemContainerGenerator
