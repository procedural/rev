#pragma once

void revTexture(unsigned textureId, const char * pathToPPM);
void revVertex(unsigned vertexIndex, float x, float y, float z, float u, float v);
void revOffset(float positionX, float positionY, float positionZ, float rotationQuaternionX, float rotationQuaternionY, float rotationQuaternionZ, float rotationQuaternionW);
void revDraw(unsigned vertexIndexStart, unsigned vertexIndexEnd, unsigned textureId, unsigned visualEffectId);
void revPresent(const void * displayOrHinstance, const void * windowOrHwnd, unsigned windowWidth, unsigned windowHeight, unsigned terminate);
