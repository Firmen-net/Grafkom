#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float move = 0;

	float jalurx[30] = { -1, -2, -2,
						-2, -3, -3,
						-3, -3, -3,
						-3, -3, -2,
						-2, -1 ,-1,
						-1, -1, 0,
						0, 1, 1,
						1,1,1,
						1,1,0,
						0, -1, -1 };

	float jalury[30] = { 0, 0, 0,
						0, 0, 5,
						5, 10, 10,
						10, 15, 15,
						15, 15, 20,
						20, 25, 25,
						25, 25, 20,
						20,10,10,
						10, 0, 0,
						0,0,0 };
	int sizeCurve = 30;
	int scaleCurve = 3;
	int indexPos = 0;
	float gerakX = 0;
	float gerakY = 0;
	float segment = 0;
	bool translate = false;
	float segmentCount = 600;

	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	float bezier(float t, float point1, float point2, float point3);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void DrawColoredCube(int rotate, float positionX, float positionY, float positionZ, float scaleX, float scaleY, float scaleZ);
	void BuildColoredPlane();
//	void DrawColoredCube();

	void DrawColoredPlane();
};

