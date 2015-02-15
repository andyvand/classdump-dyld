/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/Versions/A/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AirPlayRemoteSlideshowDelegate;
#import <MediaControlSender/MediaControlSender-Structs.h>
@class MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject {

	dispatch_queue_sRef _internalQueue;
	MediaControlClient* _client;
	id<AirPlayRemoteSlideshowDelegate> _delegate;
	dispatch_queue_sRef _userQueue;
	char _started;
	double _startTime;

}

@property (assign,nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDispatchQueue:(dispatch_queue_sRef)arg1 ;
-(void)_configureEventHandler;
-(void)getFeaturesWithOptions:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFeaturesWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<AirPlayRemoteSlideshowDelegate>)arg1 ;
-(void)dealloc;
-(void)setHost:(id)arg1 ;
-(id<AirPlayRemoteSlideshowDelegate>)delegate;
-(void)setPassword:(id)arg1 ;
@end

