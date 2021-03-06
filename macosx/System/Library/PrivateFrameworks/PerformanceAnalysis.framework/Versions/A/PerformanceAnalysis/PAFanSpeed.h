/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <PerformanceAnalysis/PASerializable.h>

@class NSString;

@interface PAFanSpeed : NSObject <PASerializable> {

	double _machTimestamp;
	int _fanSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimesamp;                           //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) int fanSpeed;                                  //@synthesize fanSpeed=_fanSpeed - In the implementation block
@property (readonly) char fanSpeedIsValid; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(int)numFans;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithMachTime:(double)arg1 ;
-(char)fanSpeedIsValid;
-(int)fanSpeed;
-(double)machTimesamp;
-(id)initWithSerializedFanSpeed:(const SCD_Struct_PA18*)arg1 ;
-(id)init;
@end

