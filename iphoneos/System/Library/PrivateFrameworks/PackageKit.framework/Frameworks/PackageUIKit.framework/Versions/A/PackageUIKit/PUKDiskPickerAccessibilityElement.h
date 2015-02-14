/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageUIKit/PackageUIKit-Structs.h>
@class PUKDiskPickerView, NSArray;

@interface PUKDiskPickerAccessibilityElement : NSObject {

	id _parent;
	PUKDiskPickerView* _view;
	NSArray* _attributeNames;

}

@property (retain) NSArray * attributeNames;              //@synthesize attributeNames=_attributeNames - In the implementation block
+(id)elementWithParent:(id)arg1 view:(id)arg2 ;
-(NSArray *)attributeNames;
-(CGRect)elementFrame;
-(id)elementRole;
-(id)elementChildren;
-(id)initWithParent:(id)arg1 view:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)setAttributeNames:(NSArray *)arg1 ;
@end

