/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppleScriptObjC.framework/Versions/A/AppleScriptObjC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleScriptObjC/AppleScriptObjC-Structs.h>
@interface BAObjectProto : NSObject
+(unsigned)getOSAID;
+(ComponentInstanceRecord*)getComponentInstance;
+(id)invokeScriptHandler:(id)arg1 forObject:(unsigned)arg2 inComponentInstance:(ComponentInstanceRecord*)arg3 args:(id)arg4 error:(id*)arg5 ;
+(id)invokeScriptHandler:(id)arg1 args:(id)arg2 error:(id*)arg3 ;
+(char)hasScriptHandler:(id)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(unsigned)getOSAID;
-(void)setComponentInstance:(ComponentInstanceRecord*)arg1 ;
-(void)setOSAID:(unsigned)arg1 ;
-(ComponentInstanceRecord*)getComponentInstance;
-(id)invokeScriptHandler:(id)arg1 args:(id)arg2 error:(id*)arg3 ;
-(char)hasScriptHandler:(id)arg1 ;
-(char)hasScriptProperty:(id)arg1 ;
-(id)setterNames;
-(char)scriptHasSetter:(id)arg1 ;
-(char)scriptRespondsToSelector:(SEL)arg1 ;
-(char)scriptHasGetter:(id)arg1 ;
-(id)_allProperties;
-(ComponentInstanceRecord*)_getComponentInstance;
-(unsigned)_getOSAID;
-(id)handlerNames;
-(void)dumpProperties:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)propertyNames;
@end

