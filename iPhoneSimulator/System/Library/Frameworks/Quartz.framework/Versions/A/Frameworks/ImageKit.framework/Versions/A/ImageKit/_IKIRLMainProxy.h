/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSArray;

@interface _IKIRLMainProxy : NSProxy {

	id _originalObject;
	char _wait;
	NSArray* _modes;

}
-(id)initWithOriginalObject:(id)arg1 modes:(id)arg2 wait:(char)arg3 ;
-(void)cancelPerforms;
-(id)originalObject;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(char)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

