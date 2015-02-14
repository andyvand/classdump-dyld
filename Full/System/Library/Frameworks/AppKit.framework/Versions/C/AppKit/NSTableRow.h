/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSTableView;

@interface NSTableRow : NSObject {

	NSTableView* _tableView;
	long long _row;

}
+(id)tableRow:(long long)arg1 ofTableView:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityArrayAttributeCount:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(unsigned long long)accessibilityIndexOfChild:(id)arg1 ;
-(id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilitySubroleAttribute;
-(char)accessibilityIsSubroleAttributeSettable;
-(id)accessibilityParentAttribute;
-(char)accessibilityIsParentAttributeSettable;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(char)accessibilitySupportsNotifications;
-(long long)row;
-(id)accessibilityChildrenAttribute;
-(id)_accessibilityChildUIElementForSpecifierComponent:(long long)arg1 ;
-(long long)_accessibilitySpecifierComponentForChildUIElement:(id)arg1 registerIfNeeded:(char)arg2 ;
-(char)accessibilityIsChildrenAttributeSettable;
-(id)accessibilityVisibleChildrenAttribute;
-(char)accessibilityIsVisibleChildrenAttributeSettable;
-(id)_accessibilityChildrenWithIndexes:(id)arg1 ;
-(long long)_childrenCount;
-(id)accessibilitySelectedAttribute;
-(char)accessibilityIsSelectedAttributeSettable;
-(void)accessibilitySetSelectedAttribute:(id)arg1 ;
-(id)accessibilityIndexAttribute;
-(char)accessibilityIsIndexAttributeSettable;
-(id)initWithRow:(long long)arg1 ofTableView:(id)arg2 ;
-(char)_canDeselect;
@end

