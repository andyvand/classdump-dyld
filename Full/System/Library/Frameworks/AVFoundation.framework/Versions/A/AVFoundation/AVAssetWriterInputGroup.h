/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAssetWriterInputGroupInternal, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {

	AVAssetWriterInputGroupInternal* _internal;

}

@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) AVAssetWriterInput * defaultInput; 
+(id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(AVAssetWriterInput *)defaultInput;
-(id)initWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)options;
-(NSArray *)inputs;
@end

