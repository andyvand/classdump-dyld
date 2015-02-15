/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSTableColumn;

@interface NSOutlineColumnMockGroup : NSObject {

	long long _row;
	NSTableColumn* _tableColumn;

}
+(id)outlineColumnGroupForRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3 ;
+(id)outlineColumnGroupForRow:(long long)arg1 tableColumn:(id)arg2 ;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
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
-(long long)row;
-(long long)column;
-(id)accessibilityChildrenAttribute;
-(char)accessibilityIsChildrenAttributeSettable;
-(long long)accessibilityColumnIndex;
-(id)initWithRow:(long long)arg1 tableColumn:(id)arg2 ;
-(id)initWithRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3 ;
-(id)_cellProxyForRow:(long long)arg1 tableColumn:(id)arg2 ;
-(CGRect)_groupRect;
@end

