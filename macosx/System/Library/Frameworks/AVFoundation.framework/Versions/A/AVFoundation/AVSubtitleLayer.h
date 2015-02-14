/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVSubtitleLayerInternal, AVPlayer;

@interface AVSubtitleLayer : CALayer {

	AVSubtitleLayerInternal* _subtitleLayer;

}

@property (nonatomic,retain) AVPlayer * player; 
+(id)subtitleLayerWithPlayer:(id)arg1 ;
-(AVPlayer *)player;
-(void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2 ;
-(void)_setSubtitleSample:(id)arg1 ;
-(int)updateSubtitle:(id)arg1 forcedSubtitleSample:(char)arg2 shouldBeHidden:(char*)arg3 ;
-(void)_updateNonForcedSubtitleDisplayEnabled:(char)arg1 ;
-(int)getLayout:(SubtitleLayoutParameters)arg1 suggestLayout:(CGRect*)arg2 shouldUpdateCachedSubtitleSample:(char)arg3 ;
-(void)subtitleRenderingNeedsLayout;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

