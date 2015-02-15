/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSError, AVPlayerItem, AVPlayer;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	char _shouldAppendItem;
	long long _status;
	NSError* _error;
	AVPlayerItem* _previousPlayerItem;

}

@property (nonatomic,readonly) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerItem * playerItem; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) dispatch_queue_sRef serializationQueue; 
-(AVPlayer *)player;
-(char)addItemToPlayQueue;
-(void)removeItemFromPlayQueue;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(char)arg3 ;
-(AVPlayerItem *)playerItem;
-(dispatch_queue_sRef)serializationQueue;
-(void)dealloc;
-(id)description;
-(long long)status;
-(NSError *)error;
@end

