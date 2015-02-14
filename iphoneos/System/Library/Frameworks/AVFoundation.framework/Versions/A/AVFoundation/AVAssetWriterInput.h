/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInputInternal, NSString, NSDictionary, NSArray, AVOutputSettings, AVWeakReference, AVAssetWriterInputHelper;

@interface AVAssetWriterInput : NSObject {

	AVAssetWriterInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef sourceFormatHint; 
@property (nonatomic,copy) NSArray * metadata; 
@property (getter=isReadyForMoreMediaData,nonatomic,readonly) char readyForMoreMediaData; 
@property (assign,nonatomic) char expectsMediaDataInRealTime; 
@property (getter=_outputSettingsObject,nonatomic,readonly) AVOutputSettings * outputSettingsObject; 
@property (getter=_status,nonatomic,readonly) long long status; 
@property (getter=_isAttachedToMetadataAdaptor,nonatomic,readonly) char attachedToMetadataAdaptor; 
@property (setter=_setWeakReferenceToAssetWriter:,getter=_weakReferenceToAssetWriter,nonatomic,retain) AVWeakReference * weakReferenceToAssetWriter; 
@property (getter=_trackID,nonatomic,readonly) int trackID; 
@property (assign,setter=_setAlternateGroupID:,getter=_alternateGroupID,nonatomic) short alternateGroupID; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (setter=_setHelper:,getter=_helper,nonatomic,retain) AVAssetWriterInputHelper * helper; 
@property (setter=_setSourcePixelBufferAttributes:,getter=_sourcePixelBufferAttributes,nonatomic,copy) NSDictionary * sourcePixelBufferAttributes; 
@property (getter=_pixelBufferPool,nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
@property (assign,setter=_setAttachedToPixelBufferAdaptor:,getter=_isAttachedToPixelBufferAdaptor,nonatomic) char attachedToPixelBufferAdaptor; 
@property (readonly) long long numberOfAppendFailures; 
+(id)keyPathsForValuesAffectingStatus;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
+(id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
+(id)keyPathsForValuesAffectingReadyForMoreMediaData;
+(id)keyPathsForValuesAffectingCanPerformMultiplePasses;
+(id)keyPathsForValuesAffectingCurrentPassDescription;
+(void)initialize;
-(float)preferredVolume;
-(long long)_status;
-(NSArray *)metadata;
-(id)extendedLanguageTag;
-(id)languageCode;
-(NSString *)mediaType;
-(CGSize)naturalSize;
-(void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)isReadyForMoreMediaData;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(id)_trackReferences;
-(id)availableTrackAssociationTypes;
-(char)_isAttachedToMetadataAdaptor;
-(opaqueCMFormatDescriptionRef)sourceFormatHint;
-(void)_attachToMetadataAdaptor:(id)arg1 ;
-(char)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(id)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(id)arg1 ;
-(NSDictionary *)outputSettings;
-(id)_helper;
-(id)_outputSettingsObject;
-(void)_setWeakReferenceToAssetWriter:(id)arg1 ;
-(void)setMarksOutputTrackAsEnabled:(char)arg1 ;
-(void)_setAlternateGroupID:(short)arg1 ;
-(short)_alternateGroupID;
-(char)expectsMediaDataInRealTime;
-(char)_prepareForWritingWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 mediaFileType:(id)arg2 error:(id*)arg3 ;
-(int)_trackID;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(char)_prepareToFinishWritingReturningError:(id*)arg1 ;
-(void)_transitionToTerminalStatus:(long long)arg1 ;
-(id)_weakReferenceToAssetWriter;
-(char)marksOutputTrackAsEnabled;
-(int)mediaTimeScale;
-(void)setMediaTimeScale:(int)arg1 ;
-(void)setExpectsMediaDataInRealTime:(char)arg1 ;
-(char)performsMultiPassEncodingIfSupported;
-(void)setPerformsMultiPassEncodingIfSupported:(char)arg1 ;
-(SCD_Struct_CM5)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_CM5)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(id)_sourcePixelBufferAttributes;
-(long long)numberOfAppendFailures;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 ;
-(id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(opaqueCMFormatDescriptionRef)arg3 ;
-(void)_setHelper:(id)arg1 ;
-(char)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(char)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg1 ;
-(CVPixelBufferPoolRef)_pixelBufferPool;
-(void)_setSourcePixelBufferAttributes:(id)arg1 ;
-(char)_isAttachedToPixelBufferAdaptor;
-(void)_setAttachedToPixelBufferAdaptor:(char)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(dispatch_queue_sRef)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)_appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(long long)layer;
-(id)description;
-(void)setLayer:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
@end

