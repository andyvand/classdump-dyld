/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDBasicRegexp.h>
#import <DataDetectorsCore/NSCopying.h>

@class NSString;

@interface DDAtomicRegexp : DDBasicRegexp <NSCopying> {

	SCD_Union_DD3 u;
	char _caseInsensitive;
	int _type;
	NSString* _displayName;

}
-(id)initWithSimplePattern:(id)arg1 caseInsensitive:(char)arg2 ;
-(int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2 ;
-(void)appendDescriptionToString:(id)arg1 depth:(int)arg2 ;
-(id)prettyPrintWithPriority:(int)arg1 ;
-(char)acceptEmptyWordWithManager:(id)arg1 ;
-(id)initWithEmptyString;
-(id)initWithCharacter:(unsigned short)arg1 ;
-(id)initWithAnyChar;
-(id)initWithICUPattern:(id)arg1 ;
-(char)caseInsensitive;
-(void)setCaseInsensitive:(char)arg1 ;
-(id)stringPattern;
-(id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3 ;
-(id)monElement;
-(void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
@end

