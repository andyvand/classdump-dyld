/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSRulerMarker;

@interface NSTabWell : NSView {

	NSRulerMarker* _prototype;
	char _disabled;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityRoleAttribute;
-(char)isEnabled;
-(char)isOpaque;
-(void)setPrototype:(id)arg1 ;
-(id)prototype;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityMarkerTypeAttribute;
-(char)accessibilityIsMarkerTypeAttributeSettable;
-(id)accessibilityMarkerTypeDescriptionAttribute;
-(char)accessibilityIsMarkerTypeDescriptionAttributeSettable;
-(id)initWithFrame:(CGRect)arg1 prototypeRulerMarker:(id)arg2 ;
@end

