/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_CM6 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
+(id)_errorForOSStatus:(int)arg1 ;
+(void)initialize;
-(AVAsset *)asset;
-(char)startReading;
-(void)cancelReading;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)_tearDownFigAssetReader;
-(char)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(char)canAddOutput:(id)arg1 ;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(NSError *)error;
-(void)setTimeRange:(SCD_Struct_CM6)arg1 ;
-(SCD_Struct_CM6)timeRange;
-(NSArray *)outputs;
-(void)addOutput:(id)arg1 ;
@end

