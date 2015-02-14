/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKEventChangeListenerDelegate;
@interface EKEventChangeListener : NSObject {

	id<EKEventChangeListenerDelegate> _delegate;

}

@property (__weak) id<EKEventChangeListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)updatedEventFor:(id)arg1 changeNotification:(id)arg2 ;
-(void)eventsChangedNotification:(id)arg1 ;
-(void)setDelegate:(id<EKEventChangeListenerDelegate>)arg1 ;
-(void)dealloc;
-(id<EKEventChangeListenerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

