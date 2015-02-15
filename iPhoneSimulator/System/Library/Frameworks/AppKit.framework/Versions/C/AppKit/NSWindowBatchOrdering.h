/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSWindowBatchOrdering : NSObject {

	/*^block*/id completionCallback;
	NSWindowBatchOrderingTriplet* triplets;
	unsigned long long tripletCount;
	unsigned long long tripletCapacity;

}
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)unscheduleWindow:(long long)arg1 ;
-(long long)bottomWindowOfAtLeastNormalWindowLevel;
-(void)scheduleWindow:(long long)arg1 forBatchOrdering:(long long)arg2 relativeTo:(long long)arg3 ;
-(void)performRelativeToWindow:(long long)arg1 ;
-(void)addCompletionCallback:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfTripletWithWindow:(long long)arg1 ;
-(void)ensureCapacity:(unsigned long long)arg1 ;
-(void)performBatchOrderingForTripletsInRange:(NSRange)arg1 ;
-(void)deallocateAllWindows;
@end

