/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DDOperatorRegexp.h>

@interface DDConcatenationRegexp : DDOperatorRegexp
+(void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 arguments:(id)arg4 ;
+(void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 argument:(id)arg4 repeatCount:(unsigned)arg5 ;
-(void)appendDescriptionToString:(id)arg1 depth:(int)arg2 ;
-(id)prettyPrintWithPriority:(int)arg1 ;
-(char)acceptEmptyWordWithManager:(id)arg1 ;
-(id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3 ;
-(id)monElement;
-(id)computeTypeFromParent:(id)arg1 withManager:(id)arg2 ;
-(void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 ;
@end

