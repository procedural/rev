#pragma once

void revTexel(unsigned textureId, unsigned textureSize, unsigned texelIndexX, unsigned texelIndexY, float r, float g, float b, float a);
void revVertex(unsigned vertexIndex, float x, float y, float z, float u, float v);
void revOffset(float positionX, float positionY, float positionZ, float rotationQuaternionX, float rotationQuaternionY, float rotationQuaternionZ, float rotationQuaternionW);
void revDraw(unsigned vertexIndexStart, unsigned vertexIndexEnd, unsigned textureId, unsigned visualEffectId, float * visualEffectParameters);
void revPresent(const void * displayOrHinstance, const void * windowOrHwnd, unsigned windowWidth, unsigned windowHeight, unsigned destroyEverything);
