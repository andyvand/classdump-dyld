/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <QuartzCore/CALayer.h>

@class CABackdropLayer, CALayer, NSString;

@interface NCSelectionMaterialLayer : CALayer {

	CABackdropLayer* _backdropLayer;
	CALayer* _branch;
	CALayer* _soft;
	CALayer* _normal;
	BOOL _reduceTransparency;
	NSString* _groupName;

}

@property (readonly) NSString * groupName;                         //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL reduceTransparency;              //@synthesize reduceTransparency=_reduceTransparency - In the implementation block
-(void)setReduceTransparency:(BOOL)arg1 ;
-(void)_buildLayerTree;
-(BOOL)reduceTransparency;
-(void)_setupForReducedTransparency;
-(id)initWithGroupName:(id)arg1 ;
-(NSString *)groupName;
-(void)setBounds:(CGRect)arg1 ;
@end

