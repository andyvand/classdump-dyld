/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSPlaceholderString : NSString
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(_va_list_tag*)arg3 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(unsigned long long)retainCount;
-(unsigned long long)length;
-(id)initWithString:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(char)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(char)arg3 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithCString:(const char*)arg1 ;
@end

