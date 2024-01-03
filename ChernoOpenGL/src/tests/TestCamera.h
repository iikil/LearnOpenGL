#pragma once
#include "Test.h"
#include "Camera.h"
#include "Renderer.h"
#include "Texture.h"
#include "VertexBuffer.h"
#include <memory>
namespace test {
	class TestCamera:public Test
	{
	public:
		TestCamera();
		~TestCamera();

		void OnUpdate(float deltaTime) override;
		void OnRender() override;
		void OnImGuiRender() override;
	private:
		std::unique_ptr<VertexArray> m_VAO;
		std::unique_ptr<VertexBuffer> m_VBO;
		std::unique_ptr<IndexBuffer> m_IndexBuffer;
		std::unique_ptr<Shader> m_Shader;
		std::unique_ptr<Texture> m_Texture;
		Renderer m_Renderer;
		Camera m_Camera;
	};
}
