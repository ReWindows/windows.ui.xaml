#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class StyleCustomWriter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomWriterFinished@StyleCustomWriter@@UEBA_NXZ
    virtual bool IsCustomWriterFinished() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsType@StyleCustomWriter@@SA_NAEBUXamlTypeToken@@W4KnownTypeIndex@@@Z
    static bool IsType(XamlTypeToken const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@StyleCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndConditionalScope(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@StyleCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndMember(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@StyleCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndObject(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StyleCustomWriter@@UEAA@XZ
    virtual ~StyleCustomWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StyleCustomWriter@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSetterValue@StyleCustomWriter@@AEAAJAEAVStyleSetterEssence@@@Z
    long ResolveSetterValue(StyleSetterEssence &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHandleOperation@StyleCustomWriter@@AEAA_NW4Operation@1@@Z
    bool ShouldHandleOperation(int);
};
