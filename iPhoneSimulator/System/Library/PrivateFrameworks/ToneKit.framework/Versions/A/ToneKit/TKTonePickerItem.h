/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/TKPickerSelectableItem.h>
#import <ToneKit/TKPickerContainerItem.h>

@class TKTonePickerController, TKTonePickerSectionItem, NSString;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {

	TKTonePickerController* _parentTonePickerController;
	long long _numberOfChildren;
	unsigned long long _itemKind;

}

@property (assign,nonatomic) unsigned long long itemKind;                                                                              //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,readonly) TKTonePickerSectionItem * parentSectionItem; 
@property (assign,setter=_setParentTonePickerController:,nonatomic) TKTonePickerController * _parentTonePickerController;              //@synthesize parentTonePickerController=_parentTonePickerController - In the implementation block
@property (assign,nonatomic) long long numberOfChildren;                                                                               //@synthesize numberOfChildren=_numberOfChildren - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfChildren;
-(unsigned long long)itemKind;
-(TKTonePickerController *)_parentTonePickerController;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(void)_setParentTonePickerController:(id)arg1 ;
-(void)_setNumberOfChildren:(long long)arg1 ;
-(TKTonePickerSectionItem *)parentSectionItem;
-(void)_setItemKind:(unsigned long long)arg1 ;
-(id)childItemAtIndex:(long long)arg1 ;
@end

