/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/Contents/MacOS/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	unsigned char ChAber_SW_Extended;
	unsigned short CA_blu[8];
	unsigned short CA_red[8];
	short BG[8];
	short RG[8];
} SCD_Struct_De0;

typedef struct {
	unsigned char FujiCAEnable;
	int numberOfPoints;
	int maxDistance;
	float CA_LR[16];
	float CA_red[16];
	float CA_blu[16];
} SCD_Struct_De1;

typedef struct {
	unsigned char FujiLensCorrectionEnable;
	int maxDistance;
	int numberOfPoints;
	float lengthRatio[16];
	float factor[16];
} SCD_Struct_De2;

typedef struct otrc_s {
	float s0;
	float y1;
	float s1;
	float y2;
	float s2;
	float y3;
	float s3;
	float s4;
	BOOL disabled;
} otrc_s;

typedef struct signalNoiseModel_s {
	float a;
	float b;
	float c;
	float PRNU;
} signalNoiseModel_s;

typedef struct reconstructionDataV4_s {
	unsigned pattern;
	int bitmapType;
	BOOL despeckleBlackNoiseEnabled;
	BOOL blackLevelExtendEnabled;
	float blackDespeckleNoiseFactor;
	BOOL greenSplitEnabled;
	BOOL unknownDNGCamera;
	float greenSplitRed;
	float greenSplitGreen1;
	float greenSplitBlue;
	int greenBayerSplit;
	BOOL HREnabled;
	float HRGreenClip;
	BOOL SPEEnabled;
	float SPEDeadNoiseFactor;
	float SPEDeadNoticeabilityFactor;
	float SPEHotNoiseFactor;
	BOOL DESEnabled;
	float DESNoiseFactor;
	float DESSignalToNoiseThreshold;
	int DESDoEarlyOut;
	float DESEarlyOutFactor;
	int DESDoRed;
	int DESDoGreen;
	int DESDoBlue;
	int DESTaperMethod;
	int DESMethod;
	float DESCloseThreshold;
	SCD_Struct_De0 CAParameters;
	BOOL CACorrectionEnabled;
	float CACorrectionRedPower;
	float CACorrectionBluePower;
	float CACorrectionRedScale;
	float CACorrectionBlueScale;
	int fullWidth;
	int fullHeight;
	BOOL vignetteCorrectionEnabled;
	float vignetteCorrectionPower;
	float vignetteCorrectionAmount;
	SCD_Struct_De1 fujiCAParameters;
	SCD_Struct_De2 fujiLensParameters;
	float chromaBlurHighFrequencyThreshold;
	float highFrequencyNoiseFactor;
	BOOL chromaBlurEnabled;
	BOOL noAntiAliasingFilter;
	float chromaBlurRadius;
	float chromaBlurRadius2;
	float powerBlurNoiseFactor;
	float cnrNoiseFactor;
	float cnrRadius;
	float cnrAmount;
	float cnrBias;
	float chromaBlurEdgeThreshold;
	float chromaBlurEdgeThreshold2;
	float adaptiveNormalizationNoiseFactor;
	BOOL adaptiveNormalizationSimple;
	int adaptiveNormalizationDirectionFindingMethod;
	BOOL fujiGreenReconstructionCopyRaw;
	BOOL fujiGreenReconstructionHighFrequency;
	float fujiDirectionsNoiseFactor;
	int fujiGreenSmoothingEnabled;
	int fujiGreenSmoothingThreshold;
	float fujiGreenSmoothingSharpeningAmount;
	float fujiGreenSmoothingCornerThreshold;
	float fujiGreenSmoothingAdjuster;
	BOOL fujiRedBluePlanarValidity;
	int redBlueDefringe;
	int redBlueRangeLimit;
	int redBlueGradientThreshold;
	int redBlueDumbOnly;
	int redBlueGreenOnly;
	int colorSmoothingEnabled;
	float colorSmoothingSharpnessAmount;
	float resampleHorizScale;
	float resampleVertScale;
	float resampleSharpness;
	float resamplePower;
	int resampleRadial;
	int sourceCropColumn;
	int sourceCropRow;
	float minimumSignalToNoiseRatio;
	float maximumSignalToNoiseRatio;
	float factors[3];
	float RVector[3];
	float GVector[3];
	float BVector[3];
	float bias[3];
	float clipLevels[3];
	int biasOff;
	BOOL boostEnabled;
	otrc_s otrc;
	float gamma;
	float shadowDesaturatePoint;
	float shadowDesaturateWidth;
	float shadowDesaturateAmount;
	float xScale;
	float yScale;
	int ISO;
	float blackLevels[4];
	float darkNoise[4];
	BOOL individualQuadratics;
	signalNoiseModel_s signalNoiseModels[4];
	BOOL moireSuppressionEnabled;
	float hueMagMR;
	float hueMagRY;
	float hueMagYG;
	float hueMagGC;
	float hueMagCB;
	float hueMagBM;
	BOOL useGPUEnabled;
} reconstructionDataV4_s;

typedef struct noiseVars {
	float factor4[4];
	float ifactor4[4];
	float blacklevel4[4];
	float darknoise24[4];
	float coeffA4[4];
	float coeffB4[4];
	float coeffC4[4];
} noiseVars;

typedef struct {
	int width;
	int height;
	char* name;
	int programID;
	char* functionName;
	int workGroupSize;
	int CPUonly;
} SCD_Struct_De7;

typedef struct {
	int nBuffers;
	int width;
	int height;
	int samplesPerPixel;
	int bytesPerSample;
	unsigned long long flags;
	int inputSpecifier;
	int highWaterMark;
} SCD_Struct_De8;

typedef struct {
	int width;
	int height;
	int samplesPerPixel;
	int bytesPerSample;
	int size;
	int factor;
	char* name;
} SCD_Struct_De9;

typedef struct {
	double start;
	double end;
	double time;
	BOOL openCL;
	int kernelID;
	char str[128];
} SCD_Struct_De10;

typedef struct OpenCLSharedBuffer {
	unsigned long long size;
	unsigned long long width;
	unsigned long long height;
	int samplesPerPixel;
	int bytesPerSample;
	unsigned long long externalRowSamples;
	unsigned long long flags;
	_cl_mem buf;
	BOOL inUse;
	int tag;
} OpenCLSharedBuffer;

typedef struct tableVars {
	_OpenCLSharedBuffer redNoisePerceptualBuffer;
	_OpenCLSharedBuffer redNoiseBuffer;
	_OpenCLSharedBuffer greenNoisePerceptualBuffer;
	_OpenCLSharedBuffer greenNoiseBuffer;
	_OpenCLSharedBuffer greenNoisePlainBuffer;
	_OpenCLSharedBuffer blueNoisePerceptualBuffer;
	_OpenCLSharedBuffer blueNoiseBuffer;
	_OpenCLSharedBuffer perceptualBuffer;
	_OpenCLSharedBuffer reciprocalBuffer;
	_OpenCLSharedBuffer reciprocal2Buffer;
	_OpenCLSharedBuffer boostBuffer;
	_OpenCLSharedBuffer highFrequencyBuffer;
	_OpenCLSharedBuffer FujiEXRResampleBuffer;
	int redSN1;
	int redSN2;
	int greenSN1;
	int greenSN2;
	int blueSN1;
	int blueSN2;
	int redMaxNoise;
	int greenMaxNoise;
	int blueMaxNoise;
	int reciprocal2Table;
	unsigned short boostTable;
	float highFrequencyTable;
} tableVars;

typedef struct {
	int kernelID;
	int width;
	int height;
	_cl_event event;
} SCD_Struct_De13;

typedef struct {
	int initialized;
	BOOL GPU;
	BOOL CPU32;
	BOOL useAutoVectorizer;
	_cl_device_id device_id;
	_cl_command_queue commands;
	int nProgramIDs;
	int nKernelIDs;
	int nSharedBufferShapes;
	int nSharedBuffers;
	char* programNames[50];
	SCD_Struct_De7 kernelInfoRecords[100];
	SCD_Struct_De8 sharedBufferShapes[20];
	cl_program programs[50_];
	cl_kernel kernels[100_];
	int nKernelInvocations;
	SCD_Struct_De13 invocations[6000];
	_OpenCLSharedBuffer inputBuffer1;
	_OpenCLSharedBuffer inputBuffer2;
	_OpenCLSharedBuffer inputBuffer3;
	OpenCLSharedBuffer sharedBuffers[64];
	SCD_Struct_De9 specs[100];
	int nSpecs;
	double timeTotals[100];
	double externalTimeTotals[9];
	int sizes[8];
	int ntasks;
	SCD_Struct_De10 tasks[200];
	char kernelDirectory[1024];
} SCD_Struct_De14;

typedef struct {
	int initialized;
	BOOL ForRAWFilter;
	int showTiming;
	tableVars T;
	noiseVars N;
	SCD_Struct_De14 C;
	unsigned short mems[13];
	char GPUDeviceName[256];
} SCD_Struct_De15;

typedef struct {
	int highFrequencyThreshold;
	int iradius;
	int maxradius;
	int noAntiAliasingFilter;
	float noiseFactor;
	BOOL pass1Enabled;
	BOOL pass2Enabled;
	BOOL pass3Enabled;
	BOOL pass4Enabled;
	int thresh1;
	int thresh2;
	int thresh3;
	int thresh4;
	int pass2Despeckle;
	int pass2DespeckleCountThreshold;
	int pass2DespeckleLuminanceThreshold;
	float pass2DespeckleDifferenceAmount;
	int pass2DespeckleAverageCloseIn;
} SCD_Struct_De16;

typedef struct {
	int minrow;
	int maxrow;
	int mincol;
	int maxcol;
} SCD_Struct_De17;

typedef struct {
	int initialized;
	int showTiming;
	int clMaxInternalTileHeight;
	int clMaxInternalTileWidth;
	int clTileBorder;
	int row;
	int col;
	tableVars T;
	noiseVars N;
	SCD_Struct_De16 V;
	const econstructionDataV4_s dataV4;
	BOOL outputHalf;
	_noiseTables nt;
	SCD_Struct_De14 C;
	int nProducts;
	int product;
	unsigned short mems[20];
	int lastAllocateBuffersWidth;
	int lastAllocateBuffersHeight;
	int lastAllocateBuffersShow;
	char GPUDeviceName[256];
	SCD_Struct_De17 destinationTileRect;
} SCD_Struct_De18;

typedef struct noiseTables {
	unsigned short tables[13];
	int redSN1;
	int redSN2;
	int greenSN1;
	int greenSN2;
	int blueSN1;
	int blueSN2;
	int redMaxNoise;
	int greenMaxNoise;
	int blueMaxNoise;
	noiseVars N;
	SCD_Struct_De16 V;
} noiseTables;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _NSZone* NSZoneRef;

