/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IMDirectlyObservableObject : NSObject {

	NSArray* _observers;

}

@property (retain) NSArray * observers;              //@synthesize observers=_observers - In the implementation block
-(void)informObserversOfNotification:(id)arg1 ;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(void)_objectDidPostNotification:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

