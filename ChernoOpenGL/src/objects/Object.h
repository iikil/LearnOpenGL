#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
class Object
{
protected:
	glm::vec3 m_Pos;
	glm::vec3 m_Rotate;
	glm::vec3 m_Scale;
public:
	Object(glm::vec3 Pos = glm::vec3(0.0f),glm::vec3 Rotate = glm::vec3(0.0f),glm::vec3 Scale = glm::vec3(0.0f));
	~Object();


	virtual void GetVerties();

	inline glm::vec3 GetPos() { return m_Pos; }
	inline glm::vec3 GetRotate() { return m_Rotate; }
	inline glm::vec3 GetScale() { return m_Scale; }

	inline void SetPos(glm::vec3 Pos) { m_Pos = Pos; }
	inline void SetRotate(glm::vec3 Rotate) { m_Rotate = Rotate; }
	inline void SetScale(glm::vec3 Scale) { m_Scale = Scale; }
};

