#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class XamlBinaryMetadataStore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringId@XamlBinaryMetadataStore@@QEAAJAEBVxstring_ptr@@AEAI@Z
    long GetStringId(xstring_ptr const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMetadataBody@XamlBinaryMetadataStore@@QEAAJPEAUIPALStream@@@Z
    long WriteMetadataBody(IPALStream *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlBinaryMetadataStore@@QEAA@AEBUTargetOSVersion@@@Z
    XamlBinaryMetadataStore(TargetOSVersion const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryMetadataStore@@QEAA@XZ
    ~XamlBinaryMetadataStore();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinBlueTypeName@XamlBinaryMetadataStore@@AEAAJAEBUXamlTypeToken@@PEAVxstring_ptr@@@Z
    long GetWinBlueTypeName(XamlTypeToken const &, xstring_ptr *);
};
