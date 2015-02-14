/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/Versions/A/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaControlSender/MediaControlSender-Structs.h>
@interface MediaControlClient : NSObject {

	dispatch_queue_sRef _queue;
	MediaControlClientImpRef _client;
	dispatch_queue_sRef _eventHandlerQueue;
	/*^block*/id _eventHandlerBlock;

}
-(void)getSlideshowFeaturesWithOptions:(unsigned)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setSlideshowInfo:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(dispatch_queue_sRef)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)authorizeWithPICRequest:(id)arg1 options:(id)arg2 completionQueue:(dispatch_queue_sRef)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)startPresentation:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)sendPhotoData:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addResourceData:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addResourceFile:(id)arg1 mimeType:(id)arg2 uuid:(id)arg3 completionQueue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addResource:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)removeResource:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)activateResource:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getSlideshowInfoWithOptions:(unsigned)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)authorizeWithPICRequest:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getPositionWithOptions:(unsigned)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setPosition:(float)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getVolumeWithOptions:(unsigned)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setVolume:(float)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(MediaControlClientImpRef)internalClient;
-(id)init;
-(void)dealloc;
-(void)setEventHandlerQueue:(dispatch_queue_sRef)arg1 eventHandlerBlock:(/*^block*/id)arg2 ;
-(void)ensureDisconnected;
-(void)removeItem:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)checkAuthentication;
-(void)ensureConnected;
-(void)stopWithOptions:(unsigned)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completionQueue:(dispatch_queue_sRef)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completionQueue:(dispatch_queue_sRef)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setPosition:(float)arg1 options:(id)arg2 completionQueue:(dispatch_queue_sRef)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setRate:(float)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 completionQueue:(dispatch_queue_sRef)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)playWithParams:(id)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getPlaybackInfoWithOptions:(unsigned)arg1 completionQueue:(dispatch_queue_sRef)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)performRemoteAction:(id)arg1 withParams:(id)arg2 completionQueue:(dispatch_queue_sRef)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setHost:(id)arg1 ;
-(void)invalidate;
-(void)setPassword:(id)arg1 ;
@end

