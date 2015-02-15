/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class SBObject, NSDictionary, NSError;

@interface SBProxy : NSProxy {

	SBObject* _createdObject;
	NSDictionary* _properties;
	id _data;
	NSError* _lastError;

}
-(void)addToElementArray:(id)arg1 atLocation:(id)arg2 ;
-(unsigned)codeInContext:(id)arg1 ;
-(void)setLastError:(id)arg1 ;
-(char)exists;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)lastError;
@end
