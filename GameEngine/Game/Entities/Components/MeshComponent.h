#pragma once

#include "Component.h"

class MeshComponent : public Component {
public:
	MeshComponent();
	~MeshComponent();

	void Render();

	ComponentType GetComponentType() override;
private:

};