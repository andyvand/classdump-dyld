/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/Versions/A/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCObjects/XPCObjects-Structs.h>
#import <Foundation/NSCoder.h>

@protocol OS_xpc_object;
@class NSObject;

@interface XPCEncoder : NSCoder {

	NSObject*<OS_xpc_object> _encoding;
	NSObject*<OS_xpc_object> _currentObject;
	CFDictionaryRef _encodedObjects;
	CFDictionaryRef _conditionalObjects;
	unsigned long long _nextConditionalObjectID;
	CFDictionaryRef _replacementObjects;

}
+(id)newEncodingForRootObject:(id)arg1 ;
-(void)_fixUpConditionalObjects;
-(id)_replacementObjectForObject:(id)arg1 ;
-(void)_verifyCurrentObject;
-(void)encodeEndpoint:(id)arg1 forKey:(id)arg2 ;
-(void)encodeMachSendRight:(unsigned)arg1 forKey:(id)arg2 ;
-(id)encoding;
-(id)init;
-(void)dealloc;
-(char)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
@end

