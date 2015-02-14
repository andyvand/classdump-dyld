/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol NSXPCEncoderDelegate;
@class NSXPCConnection;

@interface NSXPCEncoder : NSXPCCoder {

	void* _oolObjects;
	NSXPCConnection* _connection;
	CFDictionaryRef _replacedObjects;
	CFDictionaryRef _replacedByDelegateObjects;
	id<NSXPCEncoderDelegate> _delegate;
	char _askForReplacement;
	void* _encoder;
	unsigned long long _genericIndex;

}

@property (assign) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (assign) id<NSXPCEncoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_dataWithXPCObject:(void*)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)_connection;
-(void)encodeXPCObject:(void*)arg1 forKey:(id)arg2 ;
-(void)encodeInvocation:(id)arg1 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(void)_insertIntoXPCObject:(void*)arg1 ;
-(void)_encodeCString:(const char*)arg1 forKey:(id)arg2 ;
-(id)_replaceObject:(id)arg1 ;
-(void)_checkObject:(id)arg1 ;
-(void)_encodeObject:(id)arg1 ;
-(void*)_createRootXPCObject;
-(id)init;
-(void)setDelegate:(id<NSXPCEncoderDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)debugDescription;
-(char)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(id<NSXPCEncoderDelegate>)delegate;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(char)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
@end

