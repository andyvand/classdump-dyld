/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {

	RetainPtr<NSArray>* m_attributeNames;

}
-(CGPoint)convertScreenPointToRootView:(CGPoint)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(id)accessibilityChildren;
@end

