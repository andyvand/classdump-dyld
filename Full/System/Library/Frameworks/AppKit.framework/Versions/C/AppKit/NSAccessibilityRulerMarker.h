/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSAccessibilityMockUIElement.h>

@class NSRulerMarker;

@interface NSAccessibilityRulerMarker : NSAccessibilityMockUIElement {

	NSRulerMarker* _marker;

}
+(id)markerWithRulerMarker:(id)arg1 parent:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(void)accessibilitySetValueAttribute:(id)arg1 ;
-(id)marker;
-(id)initWithRulerMarker:(id)arg1 parent:(id)arg2 ;
-(id)accessibilityMarkerTypeAttribute;
-(char)accessibilityIsMarkerTypeAttributeSettable;
-(id)accessibilityMarkerTypeDescriptionAttribute;
-(char)accessibilityIsMarkerTypeDescriptionAttributeSettable;
@end

