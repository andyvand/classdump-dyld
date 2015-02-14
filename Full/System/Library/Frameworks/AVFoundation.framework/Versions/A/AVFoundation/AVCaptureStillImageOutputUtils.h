/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary;

@interface AVCaptureStillImageOutputUtils : NSObject {

	NSDictionary* _outputSettings;
	long long _imageOrientation;
	char _imageMirrored;
	unsigned _imageDataFormatType;
	SCD_Struct_AV61 _transferDimensions;
	unsigned _transferPixelFormatType;
	opaqueCMFormatDescriptionRef _sourceFormatDescription;
	CVPixelBufferPoolRef _cvRotationBufferPool;
	OpaqueVTImageRotationSessionRef _vtImageRotationSession;
	CVPixelBufferPoolRef _cvTransferBufferPool;
	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	OpaqueVTCompressionSessionRef _vtCompressionSession;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (assign,nonatomic) long long imageOrientation; 
@property (assign,getter=isImageMirrored,nonatomic) char imageMirrored; 
+(void)initialize;
-(NSDictionary *)outputSettings;
-(void)setOutputSettings:(NSDictionary *)arg1 ;
-(long long)imageOrientation;
-(void)setImageOrientation:(long long)arg1 ;
-(void)setImageMirrored:(char)arg1 ;
-(opaqueCMSampleBufferRef)transformWithSettings:(id)arg1 orientation:(long long)arg2 mirrored:(char)arg3 sample:(opaqueCMSampleBufferRef)arg4 forceClean:(char)arg5 error:(id*)arg6 ;
-(void)clean;
-(id)rotationTransform:(opaqueCMSampleBufferRef)arg1 ;
-(id)transferTransform:(opaqueCMSampleBufferRef)arg1 ;
-(id)encodeTransform:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)transform:(opaqueCMSampleBufferRef)arg1 forceClean:(char)arg2 error:(id*)arg3 ;
-(char)isImageMirrored;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

