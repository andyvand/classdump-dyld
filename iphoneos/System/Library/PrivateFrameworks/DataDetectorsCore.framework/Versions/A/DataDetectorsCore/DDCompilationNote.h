/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DDLocation.h>

@class NSString;

@interface DDCompilationNote : DDLocation {

	NSString* _message;
	int _level;

}

@property (readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (readonly) int level;                       //@synthesize level=_level - In the implementation block
+(id)noteAtLocation:(id)arg1 ofLevel:(int)arg2 withFormat:(id)arg3 ;
-(id)initWithLocation:(id)arg1 message:(id)arg2 level:(int)arg3 ;
-(id)initWithFileName:(id)arg1 position:(_DDExpressionPosition)arg2 message:(id)arg3 level:(int)arg4 ;
-(void)dealloc;
-(int)level;
-(NSString *)message;
@end

