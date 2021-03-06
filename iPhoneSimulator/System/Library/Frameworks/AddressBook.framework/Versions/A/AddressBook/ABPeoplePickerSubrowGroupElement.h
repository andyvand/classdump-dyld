/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class ABPeoplePickerTableView;

@interface ABPeoplePickerSubrowGroupElement : NSObject {

	id _parent;
	ABPeoplePickerTableView* _tableView;
	long long _row;

}

@property (retain) id parent;                                        //@synthesize parent=_parent - In the implementation block
@property (assign) ABPeoplePickerTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign) long long row;                                    //@synthesize row=_row - In the implementation block
-(id)initWithParent:(id)arg1 tableView:(id)arg2 row:(long long)arg3 ;
-(void)setRow:(long long)arg1 ;
-(id)accessibilitySelectedAttributeOfChild:(id)arg1 ;
-(void)accessibilitySetSelectedAttributeOfChild:(id)arg1 toValue:(id)arg2 ;
-(CGSize)_accessibilitySizeOfChild:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityPositionOfChild:(id)arg1 ;
-(id)accessibilitySizeOfChild:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(id)accessibilityHelpAttribute;
-(char)accessibilityIsHelpAttributeSettable;
-(id)accessibilityFocusedAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilitySetFocusedAttribute:(id)arg1 ;
-(id)accessibilityParentAttribute;
-(char)accessibilityIsParentAttributeSettable;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(long long)row;
-(ABPeoplePickerTableView *)tableView;
-(id)accessibilityChildrenAttribute;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(void)setTableView:(ABPeoplePickerTableView *)arg1 ;
@end

