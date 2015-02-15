/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _NSIdleTimer : NSObject {

	unsigned long long _id;
	int _lock;
	unsigned long long _suspensionCount;
	/*^block*/id _handler;

}

@property (copy) id handler; 
+(void)idle;
+(void)addIdleTimer:(id)arg1 ;
+(void)removeIdleTimer:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setHandler:(id)arg1 ;
-(void)resume;
-(void)suspend;
-(id)handler;
-(void)idle;
@end

