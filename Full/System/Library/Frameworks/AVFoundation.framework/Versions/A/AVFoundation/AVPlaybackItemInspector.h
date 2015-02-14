/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	NSArray* _trackIDs;

}

@property (setter=_setPlaybackItem:,getter=_playbackItem,nonatomic,retain) OpaqueFigPlaybackItemRef playbackItem; 
-(id)lyrics;
-(long long)trackCount;
-(id)commonMetadata;
-(CGSize)naturalSize;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(char)providesPreciseDurationAndTiming;
-(id)trackIDs;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(void)_setPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(id)initWithPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackIDs:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(SCD_Struct_CM5)duration;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

