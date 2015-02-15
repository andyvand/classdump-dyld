/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/ScriptingBridge-Structs.h>
#import <ScriptingBridge/NSCoding.h>

@class SBAppContext;

@interface SBObject : NSObject <NSCoding> {

	AEDesc* _specifier;
	SBAppContext* _ctx;
	id _reserved;

}
-(id)initWithApplication:(id)arg1 specifier:(const AEDesc*)arg2 ;
-(id)propertyWithCode:(unsigned)arg1 ;
-(id)elementArrayWithCode:(unsigned)arg1 ;
-(id)sendEvent:(unsigned)arg1 id:(unsigned)arg2 parameters:(unsigned)arg3 ;
-(id)propertyWithClass:(Class)arg1 code:(unsigned)arg2 ;
-(id)qualifiedSpecifier;
-(id)initWithContext:(id)arg1 specifier:(const AEDesc*)arg2 ;
-(id)_context;
-(char)isRangeSpecifier;
-(id)childWithClass:(Class)arg1 code:(unsigned)arg2 keyForm:(unsigned)arg3 keyData:(const void*)arg4 length:(unsigned long long)arg5 type:(unsigned)arg6 ;
-(id)childWithClass:(Class)arg1 code:(unsigned)arg2 keyForm:(unsigned)arg3 keyData:(id)arg4 ;
-(id)positionBefore;
-(const AEDesc*)_specifier;
-(id)sendEvent:(unsigned)arg1 id:(unsigned)arg2 format:(const char*)arg3 ;
-(id)specifierDescription;
-(id)initWithClass:(Class)arg1 properties:(id)arg2 data:(id)arg3 ;
-(id)childWithClass:(Class)arg1 code:(unsigned)arg2 keyForm:(unsigned)arg3 keyDesc:(const AEDesc*)arg4 ;
-(id)childWithClass:(Class)arg1 code:(unsigned)arg2 keyForm:(unsigned)arg3 keyData:(id)arg4 type:(unsigned)arg5 ;
-(id)descriptionForSpecifier:(id)arg1 ;
-(id)qualify:(id)arg1 ;
-(id)initWithElementCode:(unsigned)arg1 properties:(id)arg2 data:(id)arg3 ;
-(id)positionAfter;
-(id)elementWithCode:(unsigned)arg1 atIndex:(int)arg2 ;
-(id)elementWithCode:(unsigned)arg1 named:(id)arg2 ;
-(id)elementWithCode:(unsigned)arg1 ID:(id)arg2 ;
-(void)setLastError:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)context;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(const AEDesc*)specifier;
-(id)properties;
-(id)get;
-(id)lastError;
@end

