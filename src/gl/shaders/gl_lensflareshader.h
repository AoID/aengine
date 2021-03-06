#pragma once

#include "gl_shaderprogram.h"

class FLensFlareDownSampleShader
{
public:
	void Bind();

	//FBufferedUniformSampler FlareTexture;
	FBufferedUniformSampler InputTexture;
	FBufferedUniform4f Scale;
	FBufferedUniform4f Bias;

private:
	FShaderProgram mShader;
};

class FLensFlareGhostShader
{
public:
	void Bind();

	//FBufferedUniformSampler FlareTexture;
	FBufferedUniformSampler InputTexture;
	FBufferedUniform1i nSamples;
	FBufferedUniform1i flareMode;
	FBufferedUniform1f flareBias;
	FBufferedUniform1f flareMul;
	FBufferedUniform1f flareHaloWidth;
	FBufferedUniform1f flareDispersal;
	FBufferedUniform3f flareChromaticDistortion;

private:
	FShaderProgram mShader;
};