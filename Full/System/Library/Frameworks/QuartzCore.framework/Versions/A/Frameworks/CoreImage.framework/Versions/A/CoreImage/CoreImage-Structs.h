/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class FEImage;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CIBitmapContextPrivate* CIBitmapContextPrivateRef;

typedef struct FEFormat {
	unsigned format : 8;
} FEFormat;

typedef struct FEHash {
	unsigned char data[20];
} FEHash;

typedef struct fe_bitmap_struct {
	unsigned flags : 16;
	FEFormat format;
	unsigned long long width;
	unsigned long long height;
	unsigned long long depth;
	long long rowbytes;
	long long imagebytes;
	void data;
	unsigned long long data_size;
	fe_bitmap_provider_struct provider;
	FEHash identity;
} fe_bitmap_struct;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct fe_param_struct {
	void key;
	void value;
} fe_param_struct;

typedef struct fe_params_struct {
	fe_param_struct params;
	int n_params;
	int n_allocated_params;
	fe_param_struct buffer[30];
} fe_params_struct;

typedef struct fe_cl_buffer_struct* fe_cl_buffer_structRef;

typedef struct cl_image_format {
	unsigned image_channel_order;
	unsigned image_channel_data_type;
} cl_image_format;

typedef struct CICGContextPrivate* CICGContextPrivateRef;

typedef struct CGContext* CGContextRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct CICLContextPrivate* CICLContextPrivateRef;

typedef struct _cl_device_id* cl_device_idRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGColor* CGColorRef;

typedef struct _CGLContextObject* CGLContextObjectRef;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGImage* CGImageRef;

typedef struct CGLayer* CGLayerRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct x_hash_table_struct* x_hash_table_structRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct _cl_kernel* cl_kernelRef;

typedef struct _cl_mem* cl_memRef;

typedef struct _cl_command_queue* cl_command_queueRef;

typedef struct CGSRegionObject* CGSRegionObjectRef;

typedef struct fe_sampler_struct* fe_sampler_structRef;

typedef struct fe_kernel_struct* fe_kernel_structRef;

typedef struct _cl_program* cl_programRef;

typedef struct _cl_context* cl_contextRef;

typedef struct CIOpenGLContextPrivate* CIOpenGLContextPrivateRef;

typedef struct {
	int x;
} SCD_Struct_CI37;

typedef struct {
	BOOL field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6[3];
} SCD_Struct_CI38;

typedef struct CGImageSource* CGImageSourceRef;

typedef union {
	double vec[4];
	double ptr;
} SCD_Union_CI40;

typedef struct fe_accel_buffer_struct* fe_accel_buffer_structRef;

typedef struct dispatch_semaphore_s* dispatch_semaphore_sRef;

typedef struct dispatch_group_s* dispatch_group_sRef;

typedef struct fe_kernel_table_struct* fe_kernel_table_structRef;

typedef struct FEFormatSet {
	unsigned long long _mask;
	unsigned long long _native;
} FEFormatSet;

typedef struct {
	CGLSContextRec cgls_context;
	float max_dim_GL_texture;
	__CFArray gl_texture_deadpool;
	BOOL cglBased;
	CGLShareGroupRec shareGroup;
	void fboContext;
	BOOL isShared;
	fe_accel_struct accel;
	fe_accel_context_struct accelContext;
} SCD_Struct_FE46;

typedef struct _cl_sampler* cl_samplerRef;

typedef struct CGLShareGroupRec* CGLShareGroupRecRef;

typedef struct fe_accel_context_struct* fe_accel_context_structRef;

typedef struct fe_gl_texture_state_struct {
	fe_texture_object_struct name[16];
	unsigned target[16];
} fe_gl_texture_state_struct;

typedef struct fe_gl_state_struct {
	fe_gl_state_struct orig;
	unsigned active_texture : 8;
	unsigned texture_units : 8;
	unsigned texture_image_units : 8;
	unsigned program_enable : 2;
	unsigned program_enable_valid : 2;
	unsigned pad : 4;
	unsigned seed;
	unsigned texture_enable;
	unsigned texture_enable_valid;
	unsigned program_bindings[2];
	unsigned texture_bindings[32];
} fe_gl_state_struct;

typedef struct {
	int enabled;
	int src;
	int dst;
	int eqn;
} SCD_Struct_FE52;

typedef struct {
	4d src;
	4f dst;
	CGColorSpace src_cs;
} SCD_Struct_FE53;

typedef struct fe_accel_struct* fe_accel_structRef;

typedef struct FETextureCache* FETextureCacheRef;

typedef struct fe_texture_object_struct* fe_texture_object_structRef;

typedef struct {
	FETreeNode tn;
	unsigned seed;
} SCD_Struct_FE57;

typedef union {
	CGAffineTransform matrix;
	int format;
	CGColor color;
	FEImage* image;
	CGSRegionObject rgn;
	SCD_Struct_FE57 tree;
} SCD_Union_FE58;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct dispatch_source_s* dispatch_source_sRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	char* field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	float field9;
} SCD_Struct_Re62;

typedef struct {
	char field1[256];
	char field2[32];
	CGColorSpace field3;
	int field4;
	int field5;
	SCD_Struct_FE52 field6;
	SCD_Struct_Re62 field7;
	unsigned field8;
	int field9;
	int field10;
	char field11;
	float field12;
} SCD_Struct_Re63;

typedef struct CGImageBlockSet* CGImageBlockSetRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	char* baseAddress;
	int width;
	int height;
	int rowSamples;
	int rowBytes;
	int size;
	int samplesPerPixel;
	int bytesPerSample;
	float resolution;
} SCD_Struct_Re66;

typedef struct {
	int orientation;
	float SNR;
	BOOL N90;
	int redBitmaskArea;
	float imageCenterX;
	float imageCenterY;
	float halfDiagonalSize;
} SCD_Struct_Re67;

typedef struct {
	CGPoint centroid;
	int area;
	float ovalness;
	float contrast;
	float mincontrast;
	int nborder;
	SCD_Struct_FE52 IR;
	float aspectRatio;
	BOOL touchingEdge;
	int localmax;
	int localmaxrow;
	int localmaxcol;
	int localfloor;
	float rgmean;
	float rgstd;
	float ymean;
	float ystd;
} SCD_Struct_Re68;

typedef struct {
	int origHitX;
	int origHitY;
	int snapHitX;
	int snapHitY;
	int bitmaskSeedX;
	int bitmaskSeedY;
	int bitmaskThreshold;
	int cornealReflectionSeedX;
	int cornealReflectionSeedY;
	int cornealReflectionThreshold;
	char align;
	SCD_Struct_FE52 mTemplate;
	SCD_Struct_FE52 existingTemplate;
	int averageSkinMapY;
	int characterizeCase;
	int finalEyeCase;
	float IOD;
	SCD_Struct_Re67 O;
	SCD_Struct_FE52 CR;
} SCD_Struct_Re69;

typedef struct {
	int tag;
	CGPoint pt2;
	int eyeCase;
	int forceCase;
	int npixels;
	int bignpixels;
	SCD_Struct_Re66 fullNew;
	SCD_Struct_FE52 YR;
	SCD_Struct_FE52 psTemplate;
	BOOL pupilShadeAlignment;
	SCD_Struct_FE52 matchingTemplate;
	int faceIndex;
	char left;
	float IOD;
	SCD_Struct_Re69 data;
	SCD_Struct_Re68 BI;
} SCD_Struct_Re70;

typedef struct {
	float a;
	float b;
	float c;
} SCD_Struct_Re71;

typedef struct {
	char field1[256];
	char field2[32];
	CGColorSpace field3;
	int field4;
	int field5;
	SCD_Struct_FE52 field6;
	SCD_Struct_Re66 field7;
	unsigned field8;
	int field9;
	int field10;
	char field11;
	float field12;
} SCD_Struct_Re72;

typedef struct {
	int field1;
	CGPoint field2;
	int field3;
	int field4;
	int field5;
	int field6;
	SCD_Struct_FE52 field7;
	SCD_Struct_FE52 field8;
	SCD_Struct_FE52 field9;
	BOOL field10;
	SCD_Struct_Re66 field11;
	int field12;
	char field13;
	float field14;
	SCD_Struct_Re68 field15;
	SCD_Struct_Re69 field16;
} SCD_Struct_Re73;

typedef struct {
	float field1;
	int field2;
	int field3;
	float field4;
	float field5;
	float field6;
	int field7;
	int field8;
	float field9;
} SCD_Struct_Re74;

typedef struct {
	int field1;
	SCD_Struct_Re74 field2[4];
} SCD_Struct_Re75;

typedef struct {
	char field1;
	int field2;
	int field3;
	float field4;
	float field5;
	int field6;
	int field7;
	int field8;
	int field9;
	float field10;
	float field11;
	int field12;
	int field13;
	float field14;
	int field15;
	int field16;
	int field17;
	int field18;
	int field19;
	int field20;
	float field21;
	int field22;
	int field23;
	int field24;
	int field25;
} SCD_Struct_Re76;

typedef struct {
	int field1;
	int field2;
	int field3;
	int field4;
	int field5;
	int field6;
	int field7;
	int field8;
	int field9;
	int field10;
	char field11;
	SCD_Struct_FE52 field12;
	SCD_Struct_FE52 field13;
	int field14;
	int field15;
	int field16;
	float field17;
	SCD_Struct_FE52 field18;
	SCD_Struct_Re67 field19;
} SCD_Struct_Re77;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_Re78;
