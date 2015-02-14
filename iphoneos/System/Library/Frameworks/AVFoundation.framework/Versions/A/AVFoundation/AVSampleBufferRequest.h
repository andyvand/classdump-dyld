/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVSampleBufferRequestInternal, AVSampleCursor;

@interface AVSampleBufferRequest : NSObject {

	AVSampleBufferRequestInternal* _request;

}

@property (nonatomic,retain,readonly) AVSampleCursor * startCursor; 
@property (assign,nonatomic) long long direction; 
@property (nonatomic,retain) AVSampleCursor * limitCursor; 
@property (assign,nonatomic) long long preferredMinSampleCount; 
@property (assign,nonatomic) long long maxSampleCount; 
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) SCD_Struct_CM5 overrideTime; 
+(id)sampleBufferRequestWithStartCursor:(id)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(AVSampleCursor *)startCursor;
-(long long)preferredMinSampleCount;
-(long long)maxSampleCount;
-(AVSampleCursor *)limitCursor;
-(SCD_Struct_CM5)overrideTime;
-(id)initWithStartCursor:(id)arg1 ;
-(void)setLimitCursor:(AVSampleCursor *)arg1 ;
-(void)setPreferredMinSampleCount:(long long)arg1 ;
-(void)setMaxSampleCount:(long long)arg1 ;
-(void)setOverrideTime:(SCD_Struct_CM5)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
@end

