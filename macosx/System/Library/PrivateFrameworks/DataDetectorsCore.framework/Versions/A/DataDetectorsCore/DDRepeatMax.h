/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDUnaryOperator.h>
#import <DataDetectorsCore/NSCopying.h>

@interface DDRepeatMax : DDUnaryOperator <NSCopying> {

	int _max;

}
-(void)appendDescriptionToString:(id)arg1 depth:(int)arg2 ;
-(id)prettyPrintWithPriority:(int)arg1 ;
-(char)acceptEmptyWordWithManager:(id)arg1 ;
-(id)initWithPattern:(id)arg1 repeatAtMost:(int)arg2 ;
-(id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3 ;
-(id)monElement;
-(void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 ;
-(unsigned)count;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

