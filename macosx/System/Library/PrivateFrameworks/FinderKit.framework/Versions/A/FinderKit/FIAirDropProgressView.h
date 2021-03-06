/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TUpdateLayerView.h>

@interface FIAirDropProgressView : FI_TUpdateLayerView {

	TNSRef<FI_TAirDropProgressLayer *> _progressLayer;

}

@property (assign,nonatomic) double percentComplete; 
-(void)initCommon;
-(void)resetProgress;
-(void)awakeFromNib;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
@end

