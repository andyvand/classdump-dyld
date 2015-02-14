/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <Foundation/NSOperation.h>

@interface IKTaskAsyncOperation : NSOperation {

	id _target;
	id _object;
	id _delegate;
	id _queue;
	SEL _selector;
	SEL _cancelSelector;
	char _done;
	SCD_Struct_IK28 _state;

}

@property (retain) id target;                       //@synthesize target=_target - In the implementation block
@property (retain) id object;                       //@synthesize object=_object - In the implementation block
@property (retain) id delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign) id queue;                        //@synthesize queue=_queue - In the implementation block
@property (assign) SEL selector;                    //@synthesize selector=_selector - In the implementation block
@property (assign) SEL cancelSelector;              //@synthesize cancelSelector=_cancelSelector - In the implementation block
-(char)isCanceled;
-(void)setCancelSelector:(SEL)arg1 ;
-(void)done;
-(SCD_Struct_IK28*)taskState;
-(SEL)cancelSelector;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id)queue;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(id)object;
-(id)target;
-(id)delegate;
-(void)setObject:(id)arg1 ;
-(void)main;
-(void)setQueue:(id)arg1 ;
@end

