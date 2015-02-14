/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVMediaFileType, AVAssetWriterInputFigAssetWriterEndPassOperation;

@interface AVFigAssetWriterTrack : NSObject {

	AVWeakReference* _weakReference;
	OpaqueFigAssetWriterRef _figAssetWriter;
	int _trackID;
	NSString* _mediaType;
	AVMediaFileType* _mediaFileType;
	dispatch_queue_sRef _aboveHighWaterLevelQueue;
	char _aboveHighWaterLevel;
	SCD_Struct_CM5 _sampleBufferCoalescingInterval;
	AVAssetWriterInputFigAssetWriterEndPassOperation* _endPassOperation;

}

@property (nonatomic,readonly) OpaqueFigAssetWriterRef figAssetWriter;                   //@synthesize figAssetWriter=_figAssetWriter - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                     //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) AVMediaFileType * mediaFileType;                          //@synthesize mediaFileType=_mediaFileType - In the implementation block
@property (nonatomic,readonly) int trackID;                                              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (nonatomic,readonly) char encoderSupportsMultiPass; 
@property (getter=isAboveHighWaterLevel,readonly) char aboveHighWaterLevel; 
@property (assign,nonatomic) SCD_Struct_CM5 sampleBufferCoalescingInterval;              //@synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval - In the implementation block
+(id)assetWriterTrackWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(char)arg6 error:(id*)arg7 ;
-(int)trackID;
-(NSString *)mediaType;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setAlternateGroupID:(short)arg1 ;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(void)setMediaTimeScale:(int)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)setSampleBufferCoalescingInterval:(SCD_Struct_CM5)arg1 ;
-(void)prepareToEndSession;
-(void)setFigMetadata:(id)arg1 ;
-(void)setExcludeFromAutoSelection:(char)arg1 ;
-(void)setFigTrackMatrix:(id)arg1 ;
-(void)setFigDimensions:(id)arg1 ;
-(void)setTrackVolume:(float)arg1 ;
-(void)setPreferredChunkDuration:(SCD_Struct_CM5)arg1 ;
-(void)setPreferredChunkAlignment:(long long)arg1 ;
-(void)setPreferredChunkSize:(long long)arg1 ;
-(char)encoderSupportsMultiPass;
-(char)isAboveHighWaterLevel;
-(char)beginPassReturningError:(id*)arg1 ;
-(char)addSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(char)addPixelBuffer:(CVBufferRef)arg1 atPresentationTime:(SCD_Struct_CM5)arg2 error:(id*)arg3 ;
-(char)markEndOfDataReturningError:(id*)arg1 ;
-(void)endPassWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(char)arg6 error:(id*)arg7 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(char)arg3 error:(id*)arg4 ;
-(void)_refreshAboveHighWaterLevel;
-(OpaqueFigAssetWriterRef)figAssetWriter;
-(void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1 ;
-(SCD_Struct_CM5)sampleBufferCoalescingInterval;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setLayer:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
@end

