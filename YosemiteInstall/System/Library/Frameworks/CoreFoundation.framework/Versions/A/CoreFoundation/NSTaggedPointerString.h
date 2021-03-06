/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSTaggedPointerString : NSString
+(void)_setAsTaggedStringClass;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)isNSString__;
-(char)_isCString;
-(char)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(char)_getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned)arg3 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(char)isEqualToString:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(const char*)UTF8String;
-(id)substringWithRange:(NSRange)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(const unsigned short*)_fastCharacterContents;
-(const char*)_fastCStringContents:(char)arg1 ;
@end

