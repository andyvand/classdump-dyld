/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_CM5;

typedef struct {
	SCD_Struct_CM5 start;
	SCD_Struct_CM5 duration;
} SCD_Struct_CM6;

typedef struct {
	SCD_Struct_CM6 source;
	SCD_Struct_CM6 target;
} SCD_Struct_CM7;

typedef struct OpaqueFigMetadataReader* OpaqueFigMetadataReaderRef;

typedef struct _NSZone* NSZoneRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct CGImage* CGImageRef;

typedef const struct OpaqueFigAsset* OpaqueFigAssetRef;

typedef struct OpaqueFigPlaybackItem* OpaqueFigPlaybackItemRef;

typedef struct OpaqueFigFormatReader* OpaqueFigFormatReaderRef;

typedef struct OpaqueFigMutableComposition* OpaqueFigMutableCompositionRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct OpaqueFigAssetImageGenerator* OpaqueFigAssetImageGeneratorRef;

typedef struct OpaqueFigAssetTrack* OpaqueFigAssetTrackRef;

typedef struct OpaqueFigTrackReader* OpaqueFigTrackReaderRef;

typedef struct OpaqueFigPlayer* OpaqueFigPlayerRef;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct OpaqueCMTimebase* OpaqueCMTimebaseRef;

typedef struct OpaqueVTPixelBufferAttributesMediator* OpaqueVTPixelBufferAttributesMediatorRef;

typedef struct OpaqueFigCPEProtector* OpaqueFigCPEProtectorRef;

typedef struct opaqueMTAudioProcessingTap* opaqueMTAudioProcessingTapRef;

typedef struct OpaqueFigAssetReader* OpaqueFigAssetReaderRef;

typedef struct OpaqueFigMutableMovie* OpaqueFigMutableMovieRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct dispatch_semaphore_s* dispatch_semaphore_sRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGColor* CGColorRef;

typedef struct OpaqueFigRemaker* OpaqueFigRemakerRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct dispatch_source_s* dispatch_source_sRef;

typedef struct OpaqueFigManifold* OpaqueFigManifoldRef;

typedef struct OpaqueCMBlockBuffer* OpaqueCMBlockBufferRef;

typedef struct OpaqueFigSampleCursorService* OpaqueFigSampleCursorServiceRef;

typedef struct __CFBag* CFBagRef;

typedef struct opaqueCMNotificationCenter* opaqueCMNotificationCenterRef;

typedef struct OpaqueFigSubtitleRenderer* OpaqueFigSubtitleRendererRef;

typedef struct CGContext* CGContextRef;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct OpaqueCMIOGraph* OpaqueCMIOGraphRef;

typedef struct OpaqueFileWritingControlToken* OpaqueFileWritingControlTokenRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_AV50;

typedef struct {
	long long field1;
	float field2;
	unsigned char field3;
} SCD_Struct_AV51;

typedef struct OpaqueCMIOUnit* OpaqueCMIOUnitRef;

typedef struct OpaqueFigSampleBufferRenderSynchronizer* OpaqueFigSampleBufferRenderSynchronizerRef;

typedef struct OpaqueFigSampleCursor* OpaqueFigSampleCursorRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_AV55;

typedef struct {
	char field1;
	char field2;
	char field3;
} SCD_Struct_AV56;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	char field5;
	char field6;
} SCD_Struct_AV57;

typedef struct {
	long long field1;
	char field2;
	char field3;
	char field4;
} SCD_Struct_AV58;

typedef struct __CFArray* CFArrayRef;

typedef struct OpaqueFigSampleBufferAudioRenderer* OpaqueFigSampleBufferAudioRendererRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_AV61;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct OpaqueFigSampleGenerator* OpaqueFigSampleGeneratorRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct {
	unsigned field1;
	int field2;
	long long field3;
	unsigned long long field4;
	double field5;
	long long field6;
	CVSMPTETime field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_AV68;

typedef struct OpaqueFigVisualContext* OpaqueFigVisualContextRef;

typedef struct OpaqueVTPixelBufferConformer* OpaqueVTPixelBufferConformerRef;

typedef struct OpaqueFigVideoQueue* OpaqueFigVideoQueueRef;

typedef struct OpaqueFigAssetCollection* OpaqueFigAssetCollectionRef;

typedef struct OpaqueFigVideoCompositor* OpaqueFigVideoCompositorRef;

typedef struct OpaqueFigVideoCompositorFrame* OpaqueFigVideoCompositorFrameRef;

typedef struct {
	long long horizontalSpacing;
	long long verticalSpacing;
} SCD_Struct_AV75;

typedef struct {
	double left;
	double top;
	double right;
	double bottom;
} SCD_Struct_AV76;

