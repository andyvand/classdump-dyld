/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSObject, NSString;

@interface NSAutounbinderObservance : NSObject {

	NSObject* _observer;
	NSString* _keyPath;
	void* _context;

}
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithObserver:(id)arg1 keyPath:(id)arg2 context:(void*)arg3 ;
@end

