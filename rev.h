#pragma once

void revTexture(unsigned textureId, const char * pathToPPM);
void revOffset(float positionX, float positionY, float positionZ, float rotationQuaternionX, float rotationQuaternionY, float rotationQuaternionZ, float rotationQuaternionW);
void revVertex(float x, float y, float z, float u, float v, unsigned textureId, unsigned visualEffectId);
void revPresent(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
