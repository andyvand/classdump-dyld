/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNObserver;
@class NSString;

@interface _CNKeyValueObserverHandler : NSObject {

	id _object;
	NSString* _keyPath;
	id<CNObserver> _observer;

}
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
-(void)stopObserving;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

