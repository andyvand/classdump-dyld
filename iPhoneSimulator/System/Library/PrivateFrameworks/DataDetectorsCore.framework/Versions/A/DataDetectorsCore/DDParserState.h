/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSMutableArray, NSArray;

@interface DDParserState : NSObject {

	NSMutableArray* _children;
	long long _stateIndex;
	long long _numberOfSamples;
	unsigned long long _totalNumberOfSamples;
	CFDictionaryRef _weightFromChild;
	char _isRootState;

}

@property (assign) char isRootState;                       //@synthesize isRootState=_isRootState - In the implementation block
@property (readonly) NSArray * children;                   //@synthesize children=_children - In the implementation block
@property (assign) long long index;                        //@synthesize stateIndex=_stateIndex - In the implementation block
@property (assign) long long numberOfSamples;              //@synthesize numberOfSamples=_numberOfSamples - In the implementation block
-(void)setIndex:(long long)arg1 ;
-(long long)numberOfSamples;
-(void)setIsRootState:(char)arg1 ;
-(void)setTotalNumberOfSamples:(unsigned long long)arg1 ;
-(id)initWithStateIndex:(long long)arg1 ;
-(void)addSampleFrom:(id)arg1 ;
-(double)ratioOfTotalSamples;
-(char)isRootState;
-(void)setNumberOfSamples:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)index;
-(NSArray *)children;
-(void)addChild:(id)arg1 ;
@end

