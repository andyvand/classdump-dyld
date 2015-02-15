/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {

	AVAssetReaderSampleReferenceOutputInternal* _sampleReferenceOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
+(id)assetReaderSampleReferenceOutputWithTrack:(id)arg1 ;
-(id)mediaType;
-(id)_asset;
-(char)_trimsSampleDurations;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(AVAssetTrack *)track;
-(id)initWithTrack:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
@end

