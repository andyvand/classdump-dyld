/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVMutableVideoComposition : AVVideoComposition {

	AVMutableVideoCompositionInternal* _mutableVideoComposition;

}

@property (nonatomic,retain) Class customVideoCompositorClass; 
@property (assign,nonatomic) SCD_Struct_CM5 frameDuration; 
@property (assign,nonatomic) CGSize renderSize; 
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,retain) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)videoComposition;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
-(CGSize)renderSize;
-(SCD_Struct_CM5)frameDuration;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(id)builtInCompositorName;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(void)setFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)setInstructions:(NSArray *)arg1 ;
-(NSArray *)instructions;
@end

