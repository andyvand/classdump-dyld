/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class AVSynchronizedLayerInternal, AVPlayerItem;

@interface AVSynchronizedLayer : CALayer {

	AVSynchronizedLayerInternal* _syncLayer;

}

@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(id)synchronizedLayerWithPlayerItem:(id)arg1 ;
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)layerDidBecomeVisible:(char)arg1 ;
@end

