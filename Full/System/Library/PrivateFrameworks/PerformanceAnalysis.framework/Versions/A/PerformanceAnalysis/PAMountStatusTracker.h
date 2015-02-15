/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASerializable.h>

@class NSMutableDictionary, NSString;

@interface PAMountStatusTracker : NSObject <PASerializable> {

	NSMutableDictionary* _mountStatusDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)takeCurrentMountStatusForMachTime:(double)arg1 ;
-(unsigned long long)forEachMountBlockingThread:(unsigned long long)arg1 withSanitizedPaths:(char)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 runBlock:(/*^block*/id)arg5 ;
-(unsigned long long)forEachUnresponsiveMountWithSanitizedPaths:(char)arg1 BetweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(/*^block*/id)arg4 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

