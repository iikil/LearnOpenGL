#pragma once
#include "Test.h"
#include "Renderer.h"
#include "glm/glm.hpp"
#include "Texture.h"
#include "glm/gtc/matrix_transform.hpp"
#include "VertexBuffer.h"
#include <memory>

namespace test {
	class TestTexture2D: public Test{
	public:
		TestTexture2D();
		~TestTexture2D();

		void OnRender() override;
		void OnImGuiRender() override;
	private:
		std::unique_ptr<VertexArray> m_VAO;
		std::unique_ptr<VertexBuffer> m_VBO;
		std::unique_ptr<IndexBuffer> m_IndexBuffer;
		std::unique_ptr<Shader> m_Shader;
		std::unique_ptr<Texture> m_Texture;
		glm::vec3 m_TranslationA, m_TranslationB;
		Renderer m_Renderer;
	};
}