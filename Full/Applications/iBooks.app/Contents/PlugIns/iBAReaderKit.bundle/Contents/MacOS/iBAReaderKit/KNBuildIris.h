/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/KNIrisBase.h>
#import <iBAReaderKit/KNFrameBuildAnimator.h>

@class NSString;

@interface KNBuildIris : KNIrisBase <KNFrameBuildAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isTransition;
+(id)supportedTypes;
+(char)requiresSingleTexturePerStage;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
@end

