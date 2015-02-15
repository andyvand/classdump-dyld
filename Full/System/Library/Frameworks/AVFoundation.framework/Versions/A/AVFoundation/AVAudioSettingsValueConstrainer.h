/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject {

	AudioStreamBasicDescription _inputASBD;
	AudioStreamBasicDescription _outputASBD;
	OpaqueAudioConverterRef _audioConverter;
	unsigned _outputDataRate;
	char _needNewConverter;
	char _needAvailableSampleRates;
	char _needApplicableParameters;
	NSArray* _availableOutputSampleRates;
	NSMutableArray* _availableOutputDataRates;
	NSMutableArray* _applicableOutputSampleRatesForDataRate;
	NSMutableArray* _applicableOutputDataRatesForSampleRate;

}

@property (assign,nonatomic) float outputSampleRate; 
@property (assign,nonatomic) unsigned outputFormat; 
@property (assign,nonatomic) unsigned outputFormatFlags; 
@property (assign,nonatomic) unsigned outputBitsPerChannel; 
@property (assign,nonatomic) unsigned outputChannelCount; 
@property (assign,nonatomic) unsigned outputDataRate; 
-(void)setInputPropertiesFromASBD:(AudioStreamBasicDescription)arg1 ;
-(void)setOutputFormatFlags:(unsigned)arg1 ;
-(void)setOutputBitsPerChannel:(unsigned)arg1 ;
-(void)setOutputSampleRate:(float)arg1 ;
-(void)setOutputChannelCount:(unsigned)arg1 ;
-(void)setOutputDataRate:(unsigned)arg1 ;
-(unsigned)availableOutputChannelCountForDesiredChannelCount:(unsigned)arg1 rounding:(long long)arg2 ;
-(float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2 ;
-(void)_buildAudioConverter;
-(id)_fetchApplicableOutputDataRates;
-(void)_buildAvailableSampleRates;
-(void)_buildApplicableDataRatesForSampleRates;
-(void)_bringUpToDate;
-(unsigned)outputDataRate;
-(float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2 ;
-(float)outputSampleRate;
-(unsigned)outputFormatFlags;
-(unsigned)outputBitsPerChannel;
-(unsigned)outputChannelCount;
-(unsigned)outputFormat;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setOutputFormat:(unsigned)arg1 ;
@end

