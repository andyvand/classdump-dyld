/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDErrorRegexp.h>
#import <DataDetectorsCore/NSCopying.h>

@class NSString;

@interface DDVariableNotFoundError : DDErrorRegexp <NSCopying> {

	NSString* _name;

}
-(id)initWithVariableName:(id)arg1 ;
-(int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

