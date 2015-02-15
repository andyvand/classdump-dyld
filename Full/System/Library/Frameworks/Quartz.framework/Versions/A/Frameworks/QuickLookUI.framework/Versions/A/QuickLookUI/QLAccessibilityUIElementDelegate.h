/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLAccessibilityUIElementDelegate <NSObject>
@optional
-(char)accessibilityIsAttributeSettable:(id)arg1 forUIElementWithIdentifier:(id)arg2;
-(id)accessibilityAdditionalAttributeNamesForUIElementWithIdentifier:(id)arg1;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 forUIElementWithIdentifier:(id)arg3;
-(id)accessibilityActionNamesForUIElementWithIdentifier:(id)arg1;
-(void)accessibilityPerformAction:(id)arg1 forUIElementWithIdentifier:(id)arg2;

@required
-(CGRect*)frameForUIElementWithIdentifier:(id)arg1;
-(id)accessibilityAttributeValue:(id)arg1 forUIElementWithIdentifier:(id)arg2;

@end

