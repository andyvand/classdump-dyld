/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVMediaDataRequesterConsumer;
#import <AVFoundation/AVFoundation-Structs.h>
@interface AVMediaDataRequester : NSObject {

	id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
	dispatch_queue_sRef _requestQueue;
	/*^block*/id _requestBlock;

}

@property (nonatomic,readonly) dispatch_queue_sRef requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                               //@synthesize requestBlock=_requestBlock - In the implementation block
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(dispatch_queue_sRef)arg2 requestBlock:(/*^block*/id)arg3 ;
-(void)_requestMediaDataIfReady;
-(void)startRequestingMediaData;
-(id)requestBlock;
-(dispatch_queue_sRef)requestQueue;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
@end

