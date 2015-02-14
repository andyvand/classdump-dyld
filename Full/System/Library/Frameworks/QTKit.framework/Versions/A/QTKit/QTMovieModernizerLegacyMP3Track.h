/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTMovieModernizerTrack.h>

@class NSURL, AVAssetReader;

@interface QTMovieModernizerLegacyMP3Track : QTMovieModernizerTrack {

	NSURL* _legacyMP3URL;
	AVAssetReader* _legacyMP3AssetReader;

}

@property (nonatomic,retain) NSURL * legacyMP3URL;                              //@synthesize legacyMP3URL=_legacyMP3URL - In the implementation block
@property (nonatomic,retain) AVAssetReader * legacyMP3AssetReader;              //@synthesize legacyMP3AssetReader=_legacyMP3AssetReader - In the implementation block
-(char)startup;
-(id)initWithSourceAsset:(id)arg1 track:(id)arg2 forModernizer:(id)arg3 ;
-(id)newMP3AssetInTmpDirectoryFromAudioTrack:(id)arg1 asset:(id)arg2 error:(id*)arg3 ;
-(AVAssetReader *)legacyMP3AssetReader;
-(NSURL *)legacyMP3URL;
-(void)setLegacyMP3URL:(NSURL *)arg1 ;
-(void)setLegacyMP3AssetReader:(AVAssetReader *)arg1 ;
-(char)cleanup;
@end

