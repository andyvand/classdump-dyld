/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject {

	SCD_Struct_CM5 _time;
	SCD_Struct_CM5 _duration;
	CGRect _bounds;
	NSString* _type;
	AVCaptureInput* _input;
	AVMetadataObject* _originalMetadataObject;

}

@property (assign) SCD_Struct_CM5 time;                                    //@synthesize time=_time - In the implementation block
@property (assign) SCD_Struct_CM5 duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) CGRect bounds;                                          //@synthesize bounds=_bounds - In the implementation block
@property (retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (retain) AVCaptureInput * input;                                 //@synthesize input=_input - In the implementation block
@property (retain) AVMetadataObject * originalMetadataObject;              //@synthesize originalMetadataObject=_originalMetadataObject - In the implementation block
-(void)setInput:(AVCaptureInput *)arg1 ;
-(AVCaptureInput *)input;
-(SCD_Struct_CM5)time;
-(AVMetadataObject *)originalMetadataObject;
-(void)setOriginalMetadataObject:(AVMetadataObject *)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDuration:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)duration;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setTime:(SCD_Struct_CM5)arg1 ;
@end

