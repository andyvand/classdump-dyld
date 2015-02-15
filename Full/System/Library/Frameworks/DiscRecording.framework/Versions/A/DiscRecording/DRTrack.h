/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DiscRecording/DiscRecording-Structs.h>
@interface DRTrack : NSObject {

	void* _ref;

}
+(char)isPropertyKey:(id)arg1 ;
+(id)trackForAudioOfLength:(id)arg1 producer:(id)arg2 ;
+(id)trackForAudioFile:(id)arg1 ;
+(id)trackForRootFolder:(id)arg1 ;
+(void)setupBindings;
+(void)initialize;
-(id)initWithProperties:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(float)_testProductionSpeedForLength:(unsigned)arg1 orInterval:(double)arg2 ;
-(unsigned long long)estimateLength;
-(DRTrackObject*)_obj;
-(void)_DiscRecording_KVCSetterPlaceholder:(id)arg1 ;
-(id)_DiscRecording_KVCGetterPlaceholder;
-(id)initWithProducer:(id)arg1 ;
-(float)testProductionSpeedForInterval:(double)arg1 ;
-(float)testProductionSpeedForLength:(unsigned)arg1 ;
-(id)preGap;
-(void)setPreGap:(id)arg1 ;
-(int)_estimateSizeCallback:(unsigned long long*)arg1 ;
-(int)_preBurnCallback:(id)arg1 ;
-(int)_producePreGapCallback:(DRTrackProductionInfo*)arg1 ;
-(int)_produceDataCallback:(DRTrackProductionInfo*)arg1 ;
-(int)_verificationStartingCallback;
-(int)_verifyPreGapCallback:(DRTrackProductionInfo*)arg1 ;
-(int)_verifyDataCallback:(DRTrackProductionInfo*)arg1 ;
-(int)_verificationDoneCallback;
-(int)_postBurnCallback;
-(id)verificationType;
-(void)setVerificationType:(id)arg1 ;
-(unsigned short)blockSize;
-(void)setBlockSize:(unsigned short)arg1 ;
-(long long)dataForm;
-(void)setDataForm:(long long)arg1 ;
-(long long)blockType;
-(void)setBlockType:(long long)arg1 ;
-(long long)trackMode;
-(void)setTrackMode:(long long)arg1 ;
-(long long)sessionFormat;
-(void)setSessionFormat:(long long)arg1 ;
-(float)maximumBurnSpeed;
-(void)setMaximumBurnSpeed:(float)arg1 ;
-(id)dvdCopyrightInfo;
-(void)setDVDCopyrightInfo:(id)arg1 ;
-(id)dvdTimestamp;
-(void)setDVDTimestamp:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)length;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setLength:(id)arg1 ;
-(id)properties;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end
