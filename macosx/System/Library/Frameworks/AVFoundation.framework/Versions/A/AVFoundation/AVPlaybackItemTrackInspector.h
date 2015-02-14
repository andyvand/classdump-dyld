/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(int)trackID;
-(id)mediaType;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)asset;
-(float)estimatedDataRate;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(void)finalize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isEnabled;
-(SCD_Struct_CM6)timeRange;
-(CGSize)dimensions;
@end

