/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>

@class NSString, NSDocInfo;

@interface NSLeafProxy : _UKNOWN_SUPERCLASS_ <NSCopying> {

	Class isa;
	NSString* dir;
	NSString* file;
	NSDocInfo* docInfo;
	long long refCount;
	id realObject;

}
+()initialize;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3 ;
-(void)reallyDealloc;
-(void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(id)copy;
-(char)isProxy;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
@end

