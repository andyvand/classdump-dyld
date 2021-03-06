/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (assign,nonatomic) char appliesPreferredTrackTransform; 
@property (getter=_isAttachedToMetadataAdaptor,nonatomic,readonly) char attachedToMetadataAdaptor; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)mediaType;
-(void)setAppliesPreferredTrackTransform:(char)arg1 ;
-(id)_asset;
-(char)appliesPreferredTrackTransform;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(char)_isAttachedToMetadataAdaptor;
-(void)_attachToMetadataAdaptor:(id)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(char)_trimsSampleDurations;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(AVAssetTrack *)track;
-(NSDictionary *)outputSettings;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForMetadataAdaptor;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end

