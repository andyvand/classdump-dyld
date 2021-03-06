/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MGMediaCompositionAssetProvider;
#import <QuickTime Player/QuickTime Player-Structs.h>
@class MGMediaComposition, AVPlayerItem, MGMediaClip;

@interface MGMediaCompositionPlayerItemController : NSObject {

	id<MGMediaCompositionAssetProvider> _assetProvider;
	MGMediaComposition* _composition;
	AVPlayerItem* _playerItem;
	MGMediaClip* _mediaClipAtCurrentTime;
	SCD_Struct_MG13 _offsetInMediaClipAtCurrentTime;
	unsigned long long _indexOfMediaClipBeforeMediaClipAtCurrentTime;
	unsigned long long _disableCurrentTimeAutoUpdateCount;
	SCD_Struct_MG13 _currentTimeAfterUpdate;
	char _playerItemNeedsUpdate;
	char _isAsynchronouslyLoadingAssets;

}

@property (nonatomic,retain) MGMediaComposition * composition; 
@property (nonatomic,readonly) AVPlayerItem * playerItem;                   //@synthesize playerItem=_playerItem - In the implementation block
-(id)initWithAssetProvider:(id)arg1 ;
-(void)makeCurrentPlayerItem:(id)arg1 ;
-(void)disableCurrentTimeAutoUpdate;
-(void)setCurrentTimeAfterUpdate:(SCD_Struct_MG13)arg1 ;
-(void)enableCurrentTimeAutoUpdate;
-(void)updatePlayerItemIfNeeded;
-(void)setPlayerItemNeedsUpdate;
-(AVPlayerItem *)playerItem;
-(void)setComposition:(MGMediaComposition *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MGMediaComposition *)composition;
@end

