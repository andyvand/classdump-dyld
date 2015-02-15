/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class _AMPredicateEditor, NSPopUpButton, NSPredicate, NSArray, NSString;

@interface _AMPredicateEditorAction : AMBundleAction {

	_AMPredicateEditor* _predicateEditor;
	NSPopUpButton* _itemTypePopUpButton;
	NSPredicate* _predicate;
	NSArray* _perItemTypeInfo;

}

@property (copy) NSString * itemType; 
@property (copy) NSPredicate * predicate; 
@property (copy,readonly) NSArray * perItemTypeInfo;              //@synthesize perItemTypeInfo=_perItemTypeInfo - In the implementation block
-(void)updateParameters;
-(void)parametersUpdated;
-(void)opened;
-(NSArray *)perItemTypeInfo;
-(void)setUpUIForItemType:(id)arg1 withPredicate:(id)arg2 ;
-(void)setItemType:(NSString *)arg1 ;
-(void)itemTypePopUpButtonSelectionChanged:(id)arg1 ;
-(void)predicateEditorChanged:(id)arg1 ;
-(void)dealloc;
-(void)awakeFromNib;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSString *)itemType;
@end

