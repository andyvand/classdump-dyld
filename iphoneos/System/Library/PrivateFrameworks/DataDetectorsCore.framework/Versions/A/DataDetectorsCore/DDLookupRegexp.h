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

@interface DDLookupRegexp : DDBasicRegexp <NSCopying> {

	long long _tokenId;
	NSString* _name;

}
-(long long)token;
-(int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2 ;
-(void)appendDescriptionToString:(id)arg1 depth:(int)arg2 ;
-(id)prettyPrintWithPriority:(int)arg1 ;
-(char)acceptEmptyWordWithManager:(id)arg1 ;
-(id)initWithTokenId:(long long)arg1 ;
-(id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3 ;
-(id)monElement;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

