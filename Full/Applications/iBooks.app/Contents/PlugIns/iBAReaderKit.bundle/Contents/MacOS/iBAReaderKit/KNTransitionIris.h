/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/KNIrisBase.h>
#import <iBAReaderKit/KNFrameAnimator.h>

@class NSString;

@interface KNTransitionIris : KNIrisBase <KNFrameAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedTypes;
+(char)isTransition;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
@end
