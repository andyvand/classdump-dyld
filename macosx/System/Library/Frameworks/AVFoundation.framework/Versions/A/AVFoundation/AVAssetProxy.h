/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {

	AVAssetProxyInternal* _assetProxy;

}
+(id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2 ;
+(id)assetProxyWithPropertyList:(id)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(void)finalize;
-(void)dealloc;
-(char)isProxy;
-(id)tracks;
@end

