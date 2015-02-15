/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString {

	SCD_Union_NS64* contents;
	struct {
		unsigned isFat : 1;
		unsigned freeWhenDone : 1;
		unsigned refs : 30;
	}  flags;
	unsigned long long numCharacters;
	void* _reserved;

}
-(char)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(unsigned long long)fastestEncoding;
-(unsigned long long)cStringLength;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(char)arg3 isUnicode:(char)arg4 ;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(const char*)cString;
@end

