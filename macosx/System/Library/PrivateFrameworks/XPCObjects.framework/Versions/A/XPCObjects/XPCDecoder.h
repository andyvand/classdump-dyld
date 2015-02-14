/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/Versions/A/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCObjects/XPCObjects-Structs.h>
#import <Foundation/NSCoder.h>

@protocol OS_xpc_object;
@class NSObject, NSArray, NSString;

@interface XPCDecoder : NSCoder {

	NSObject*<OS_xpc_object> _encoding;
	NSObject*<OS_xpc_object> _currentObject;
	CFDictionaryRef _decodedObjects;
	CFSetRef _requestedDecodedObjects;
	NSArray* _allowedClasses;
	NSString* _errorDescription;

}

@property (nonatomic,copy) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
+(id)rootObjectForEncoding:(id)arg1 allowedClasses:(id)arg2 errorDescription:(id)arg3 ;
+(id)rootObjectForEncoding:(id)arg1 allowedClasses:(id)arg2 ;
+(id)rootObjectForEncoding:(id)arg1 ;
-(void)_verifyCurrentObject;
-(void)setErrorDescription:(NSString *)arg1 ;
-(char)_classIsAllowed:(Class)arg1 ;
-(id)decodeEndpointForKey:(id)arg1 ;
-(unsigned)decodeMachSendRightForKey:(id)arg1 ;
-(id)initWithEncoding:(id)arg1 ;
-(void)dealloc;
-(char)allowsKeyedCoding;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)decodeObject;
-(long long)versionForClassName:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(NSString *)errorDescription;
@end

