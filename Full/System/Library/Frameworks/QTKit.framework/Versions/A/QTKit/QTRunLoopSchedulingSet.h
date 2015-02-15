/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTRunLoopSchedulingSet : NSObject {

	CFSetRef _schedulingSet;
	long long _reserved;

}
-(void)addRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)containsRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)scheduleSelector:(SEL)arg1 forTarget:(id)arg2 withObject:(id)arg3 ;
-(void)scheduleAtHostTime:(unsigned long long)arg1 selector:(SEL)arg2 forTarget:(id)arg3 withObject:(id)arg4 ;
-(id)init;
-(void)dealloc;
@end

