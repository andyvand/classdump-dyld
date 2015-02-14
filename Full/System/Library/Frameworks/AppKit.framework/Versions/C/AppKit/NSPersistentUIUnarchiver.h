/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>

@class NSArray;

@interface NSPersistentUIUnarchiver : NSCoder {

	NSArray* _unarchivers;

}

@property (setter=_setUnarchivers:,copy) NSArray * _unarchivers;              //@synthesize unarchivers=_unarchivers - In the implementation block
-(void)dealloc;
-(void)finishDecoding;
-(char)allowsKeyedCoding;
-(id)decodeObjectForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)_subcoderWithValueForKey:(id)arg1 ;
-(NSArray *)_unarchivers;
-(void)_setUnarchivers:(id)arg1 ;
@end

