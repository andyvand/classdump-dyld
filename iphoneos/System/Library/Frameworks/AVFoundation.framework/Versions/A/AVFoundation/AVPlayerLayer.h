/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVPlayerLayerInternal, AVPlayer, NSString;

@interface AVPlayerLayer : CALayer {

	AVPlayerLayerInternal* _playerLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (copy) NSString * videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) CGRect videoRect; 
+(id)playerLayerWithPlayer:(id)arg1 ;
+(id)keyPathsForValuesAffectingVideoRect;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVPlayer *)player;
-(NSString *)videoGravity;
-(char)isReadyForDisplay;
-(void)_setSubtitleGravity:(id)arg1 ;
-(void)_notifyPlayerOfDisplaySize;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(void)_addAnimationsForMaskLayer:(id)arg1 ;
-(void)_addAnimationsForVideoLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)_addAnimationsForClosedCaptionLayer:(id)arg1 gravity:(id)arg2 ;
-(CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1 ;
-(void)_updatePresentationSize:(CGSize)arg1 forceUpdate:(char)arg2 ;
-(void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2 ;
-(void)_setItem:(id)arg1 readyForDisplay:(char)arg2 ;
-(id)_subtitleGravity;
-(id)_videoLayer;
-(id)_closedCaptionLayer;
-(id)_subtitleLayer;
-(CGRect)videoRect;
-(CGRect)_videoRectForBounds:(CGRect)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(id)initWithLayer:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeAllAnimations;
@end

