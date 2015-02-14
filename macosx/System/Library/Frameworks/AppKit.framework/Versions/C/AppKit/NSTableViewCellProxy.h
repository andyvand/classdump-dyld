/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAccessibilityProxy.h>
#import <AppKit/NSTableViewCellElement.h>

@class NSTableColumn, NSString;

@interface NSTableViewCellProxy : NSAccessibilityProxy <NSTableViewCellElement> {

	NSTableColumn* _tableColumn;
	long long _row;
	Class _alternateParentClass;
	id _realElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellForRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3 ;
+(id)cellForRow:(long long)arg1 tableColumn:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilitySetFocusedAttribute:(id)arg1 ;
-(id)accessibilityParentAttribute;
-(id)accessibilityPositionAttribute;
-(id)accessibilitySizeAttribute;
-(void)accessibilityPerformAction:(id)arg1 ;
-(long long)row;
-(long long)column;
-(id)tableView;
-(id)realElement;
-(id)accessibilityChildrenAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(void)_accessibilityShowMenu:(id)arg1 ;
-(id)accessibilityCurrentEditor;
-(CGPoint)accessibilityWindowPointForShowMenu;
-(void)accessibilitySetValueAttribute:(id)arg1 ;
-(id)accessibilityBoundsForRangeAttributeForParameter:(id)arg1 ;
-(long long)accessibilityColumnIndex;
-(id)initWithRow:(long long)arg1 tableColumn:(id)arg2 ;
-(id)initWithRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3 ;
-(char)isBeingEdited;
-(id)cellForProxy;
-(void)_accessibilityPerformAction:(id)arg1 withValue:(id)arg2 ;
-(id)editor;
-(void)_accessibilityPopUpButtonCellPressAction:(id)arg1 ;
-(void)_sendDataSourceSetObjectValue:(id)arg1 ;
-(void)_accessibilityPerformAction:(id)arg1 ;
-(Class)alternateParentClass;
-(void)setAlternateParentClass:(Class)arg1 ;
@end

