/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>

@interface NSCIDGlyphInfo : NSGlyphInfo {

	unsigned short _cid;
	unsigned long long _collection;

}
+(void)initialize;
+(id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(unsigned long long)characterCollection;
-(unsigned long long)characterIdentifier;
-(id)initWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3 ;
@end

