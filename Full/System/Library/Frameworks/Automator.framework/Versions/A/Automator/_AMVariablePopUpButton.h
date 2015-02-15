/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPopUpButton.h>

@interface _AMVariablePopUpButton : NSPopUpButton {

	id _delegate;
	char _isMenuVisible;

}
+(void)initialize;
+(Class)cellClass;
-(void)addVariable:(id)arg1 ;
-(id)observedParameterKey;
-(void)createVariablesSection;
-(void)_removeItemAtIndex:(long long)arg1 ;
-(void)removeVariableWithUUID:(id)arg1 ;
-(id)defaultNewVariable;
-(char)_allowDrag:(id)arg1 ;
-(void)selectVariableMenuItemWithUUID:(id)arg1 ;
-(void)makeNewVariable:(id)arg1 ;
-(void)AMWorkflowDidAddVariable:(id)arg1 ;
-(void)AMWorkflowDidRemoveVariable:(id)arg1 ;
-(void)AMVariableInWorkflowDidChange:(id)arg1 ;
-(id)submenuForVariable:(id)arg1 ;
-(void)removeAllItemsWithTag:(long long)arg1 ;
-(void)selectMenuItemWithRepresentedObject:(id)arg1 ;
-(void)popUpButtonWillPopUp:(id)arg1 ;
-(id)selectedVariableUUID;
-(id)variablesToAddToMenu;
-(void)addNewVariableMenuItem;
-(id)variableUUIDsInMenu;
-(char)isMenuVisible;
-(void)useVariableMenuItem:(id)arg1 ;
-(id)_attributedTitleForVariableUUID:(id)arg1 ;
-(id)parameterKeyDictionary;
-(void)updateParameterWithValue:(id)arg1 ;
-(void)_updateVariablesInMenuWithVariableUUID:(id)arg1 ;
-(char)updateParameterWithMenuItem:(id)arg1 ;
-(void)setIsMenuVisible:(char)arg1 ;
-(id)itemArrayWithTag:(long long)arg1 ;
-(void)_addItemWithTitle:(id)arg1 ;
-(void)_addItemsWithTitles:(id)arg1 ;
-(void)_insertItemWithTitle:(id)arg1 atIndex:(long long)arg2 ;
-(void)_removeItemWithTitle:(id)arg1 ;
-(void)_removeAllItems;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setMenu:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)awakeFromNib;
-(void)selectItemAtIndex:(long long)arg1 ;
-(void)removeItemAtIndex:(long long)arg1 ;
-(void)removeAllItems;
-(void)addItemWithTitle:(id)arg1 ;
-(void)removeItemWithTitle:(id)arg1 ;
-(void)selectItem:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)insertItemWithTitle:(id)arg1 atIndex:(long long)arg2 ;
-(void)addItemsWithTitles:(id)arg1 ;
-(void)selectItemWithTitle:(id)arg1 ;
-(char)selectItemWithTag:(long long)arg1 ;
@end

