/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebAccessibilityObjectWrapperBase.h>

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase
-(id)attachmentView;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(CGPoint)convertPointToScreenSpace:(FloatPoint*)arg1 ;
-(void)unregisterUniqueIdForUIElement;
-(id)additionalAccessibilityAttributeNames;
-(id)textMarkerRangeFromVisiblePositions:(VisiblePosition*)arg1 endPosition:(VisiblePosition*)arg2 ;
-(id)bezierPathFromPath:(CGPathRef)arg1 ;
-(id)role;
-(id)subrole;
-(id)remoteAccessibilityParentObject;
-(id)roleDescription;
-(id)computedRoleString;
-(id)scrollViewParent;
-(id)renderWidgetChildren;
-(id)textMarkerRangeForSelection;
-(id)textMarkerForVisiblePosition:(const VisiblePosition*)arg1 ;
-(void)accessibilityShowContextMenu;
-(void)accessibilityPerformPressAction;
-(void)accessibilityPerformShowMenuAction;
-(void)accessibilityPerformIncrementAction;
-(void)accessibilityPerformDecrementAction;
-(void)accessibilityScrollToVisible;
-(VisiblePositionRange*)visiblePositionRangeForTextMarkerRange:(id)arg1 ;
-(id)doAXAttributedStringForTextMarkerRange:(id)arg1 ;
-(VisiblePosition*)visiblePositionForTextMarker:(id)arg1 ;
-(NSRange)_convertToNSRange:(Range*)arg1 ;
-(id)doAXAttributedStringForRange:(NSRange)arg1 ;
-(IntRect)screenToContents:(const IntRect*)arg1 ;
-(long long)_indexForTextMarker:(id)arg1 ;
-(id)_textMarkerForIndex:(long long)arg1 ;
-(id)doAXRTFForRange:(NSRange)arg1 ;
-(id)path;
-(id)position;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)accessibilityParameterizedAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)accessibilitySupportsOverriddenAttributes;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(void)detach;
@end

