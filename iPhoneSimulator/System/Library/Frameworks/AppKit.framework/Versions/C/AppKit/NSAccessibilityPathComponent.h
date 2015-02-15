/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@class NSPathComponentCell;

@interface NSAccessibilityPathComponent : NSAccessibilityIndexedMockUIElement {

	NSPathComponentCell* _pathComponentCell;

}
+(id)pathComponentWithPathComponentCell:(id)arg1 index:(long long)arg2 parent:(id)arg3 ;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(id)accessibilityURLAttribute;
-(char)accessibilityIsURLAttributeSettable;
-(id)pathComponentCell;
-(id)initWithPathComponentCell:(id)arg1 index:(long long)arg2 parent:(id)arg3 ;
@end

