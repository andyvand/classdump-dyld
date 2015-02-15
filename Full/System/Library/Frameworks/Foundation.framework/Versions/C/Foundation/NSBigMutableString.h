/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSBigMutableString : NSMutableString {

	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	}  flags;
	unsigned long long length;
	SCD_Union_NS10* contents;

}
-(void)_checkForInvalidMutationWithSelector:(SEL)arg1 ;
-(char)_isCString;
-(char)_getData:(id*)arg1 encoding:(unsigned long long*)arg2 ;
-(char)_setData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(char)_copyStorage:(_CFStorage*)arg1 encoding:(unsigned long long*)arg2 ;
-(char)_setStorage:(CFStorageRef)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithStorage:(CFStorageRef)arg1 length:(unsigned long long)arg2 isUnicode:(char)arg3 ;
-(void)_markAsImmutable;
-(id)_newSmallImmutableSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(id)_newBigSubstringWithRange:(NSRange)arg1 wantsMutable:(char)arg2 zone:(NSZone*)arg3 ;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(char)_isMarkedAsImmutable;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
@end

