#include "AngelscriptBinds.h"
#include "AngelscriptManager.h"
#include "SoloASEngineCompat.h"
#if SOLOAS_UE_AT_LEAST(5, 9)
#include "FXSystemComponent.h"
#else
#include "Particles/ParticleSystemComponent.h"
#endif

AS_FORCE_LINK const FAngelscriptBinds::FBind Bind_UFXSystemComponent(FAngelscriptBinds::EOrder::Late, [] {
	auto FXSystemComponent = FAngelscriptBinds::ExistingClass("UFXSystemComponent");

	FXSystemComponent.Method("void DeactivateImmediate()", METHODPR_TRIVIAL(void, UFXSystemComponent, DeactivateImmediate, ()));
	});
