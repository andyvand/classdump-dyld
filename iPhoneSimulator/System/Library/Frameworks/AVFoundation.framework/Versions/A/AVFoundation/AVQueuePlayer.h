/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}
+(id)playerWithURL:(id)arg1 ;
+(id)playerWithPlayerItem:(id)arg1 ;
+(id)queuePlayerWithItems:(id)arg1 ;
+(void)initialize;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(long long)_defaultActionAtItemEnd;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(char)_shouldEnqueueModifications;
-(void)_enqueueModification:(/*^block*/id)arg1 ;
-(void)advanceToNextItem;
-(char)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)beginModifications;
-(void)commitModifications;
-(id)init;
-(void)dealloc;
-(id)items;
-(void)removeAllItems;
-(void)removeItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
@end

