cbuffer CBuf
{
	float4 color[6];
};
float4 main(uint tid : SV_PRIMITIVEID) : SV_TARGET
{
	return color[tid / 2];
}